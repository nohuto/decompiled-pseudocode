unsigned __int64 __fastcall HalpApicX2WriteCommand(unsigned int a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  if ( (a2 & 0xC0000) == 0x40000 )
  {
    result = (unsigned __int8)a2;
    __writemsr(0x83Fu, (unsigned __int8)a2);
  }
  else
  {
    result = a2 | ((unsigned __int64)a1 << 32);
    __writemsr(0x830u, result);
  }
  return result;
}
