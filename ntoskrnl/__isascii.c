int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
