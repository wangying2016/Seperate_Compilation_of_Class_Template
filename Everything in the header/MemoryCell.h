#ifndef MEMORY_CELL_H
#define MEMORY_CELL_H
/**
 * A class for simulating a memeory cell.
 */

template <typename Object>
class MemoryCell
{
public:
  explicit MemoryCell(const Object & initialValue = Object{});
  const Object & read() const;
  void write(const Object & x);

private:
  Object storedValue;
};

/**
 * Construct the MemoryCell with initialValue.
 */
template <typename Object>
MemoryCell<Object>::MemoryCell(const Object & initialValue)
  : storedValue{ initialValue }
{

}

/**
 * Return the stored value.
 */
template <typename Object>
const Object & MemoryCell<Object>::read() const
{
  return storedValue;
}

/**
 * Store x.
 */
template <typename Object>
void MemoryCell<Object>::write(const Object & x)
{
  storedValue = x;
}

#endif