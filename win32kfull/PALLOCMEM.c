__int64 __fastcall PALLOCMEM(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return Win32AllocPoolZInit(a1, a2);
  return result;
}
