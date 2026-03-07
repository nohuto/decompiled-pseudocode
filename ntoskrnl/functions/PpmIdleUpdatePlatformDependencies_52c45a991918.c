__int64 __fastcall PpmIdleUpdatePlatformDependencies(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // r8
  int i; // r10d
  __int64 v5; // r11

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = (unsigned int)HvlEnlightenments;
    if ( (HvlEnlightenments & 0x10000000) != 0 )
      return result;
    v2 = (HvlEnlightenments & 0x400) == 0;
  }
  else
  {
    v2 = HvlHypervisorConnected == 0;
  }
  if ( !v2 )
  {
    v3 = 0LL;
    for ( i = HvlEnlightenments & 0x200; (unsigned int)v3 < *(_DWORD *)(a1 + 8); v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 0LL;
      for ( *(_BYTE *)(a1 + 48 * v3 + 61) = i != 0;
            (unsigned int)v5 < *(_DWORD *)(a1 + 48 * v3 + 72);
            v5 = (unsigned int)(v5 + 1) )
      {
        result = *(_QWORD *)(a1 + 48 * v3 + 96);
        *(_BYTE *)(result + 8 * v5 + 4) = i != 0;
      }
    }
  }
  return result;
}
