/*
 * XREFs of ViInitPickRandomTargets @ 0x140B49F94
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfRandomGetNumber @ 0x140ABF358 (VfRandomGetNumber.c)
 */

__int64 ViInitPickRandomTargets()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned int v2; // edi
  bool v3; // bp
  unsigned int i; // esi
  ULONG Number; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned __int64 v8; // r10

  result = (unsigned int)VfRandomVerifiedDrivers;
  v1 = 0;
  if ( VfRandomVerifiedDrivers )
  {
    if ( (unsigned int)VfRandomVerifiedDrivers > 0x200 )
    {
      LODWORD(result) = 512;
      VfRandomVerifiedDrivers = 512;
    }
    VfRandomTargetsBitMapHeader = 512;
    v2 = ViExpectedDriversCount + 2;
    if ( (unsigned int)(ViExpectedDriversCount + 2) > 0x200 )
      v2 = 512;
    qword_140D70680 = (__int64)&VfRandomTargetsBitMap;
    v3 = 2 * (int)result > (unsigned int)ViExpectedDriversCount;
    memset(&VfRandomTargetsBitMap, 0, 0x40uLL);
    for ( i = 0; i < VfRandomVerifiedDrivers; ++i )
    {
      Number = VfRandomGetNumber(1u, v2 - 1);
      v6 = (unsigned __int64)Number >> 3;
      if ( ((*(char *)(v6 + qword_140D70680) >> (Number & 7)) & 1) != 0 )
      {
        if ( v3 )
        {
          ++v1;
        }
        else
        {
          v7 = Number;
          while ( 1 )
          {
            v7 = (v7 + 1) % v2;
            if ( !v7 )
              v7 = 1;
            v8 = (unsigned __int64)v7 >> 3;
            if ( ((*(char *)(v8 + qword_140D70680) >> (v7 & 7)) & 1) == 0 )
              break;
            if ( v7 == Number )
              goto LABEL_17;
          }
          *(_BYTE *)(v8 + qword_140D70680) |= 1 << (v7 & 7);
LABEL_17:
          if ( v7 == Number )
            break;
        }
      }
      else
      {
        *(_BYTE *)(v6 + qword_140D70680) |= 1 << (Number & 7);
      }
    }
    VfRandomVerifiedDrivers -= v1;
    return 1LL;
  }
  return result;
}
