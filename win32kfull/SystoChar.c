__int64 __fastcall SystoChar(unsigned int a1, int a2)
{
  __int64 result; // rax

  if ( a1 - 260 > 3 )
    return a1;
  result = a1 - 4;
  if ( (a2 & 0x20000000) != 0 )
    return a1;
  return result;
}
