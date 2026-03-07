__int64 __fastcall CAtlasManager::DetermineIdealAtlasSize(int a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = 8LL;
  if ( (unsigned int)(a1 + 1) >= 8 )
  {
    v2 = a1 + 2;
    v3 = 0x80000000;
    if ( v2 <= 0x400 )
      v3 = 1024;
    while ( (v3 & v2) == 0 )
      v3 >>= 1;
    result = 2 * v3;
    if ( v2 == v3 )
      result = v3;
    if ( (unsigned int)result >= 0x800 )
      return 2048LL;
  }
  return result;
}
