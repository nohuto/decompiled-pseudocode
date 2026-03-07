__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
