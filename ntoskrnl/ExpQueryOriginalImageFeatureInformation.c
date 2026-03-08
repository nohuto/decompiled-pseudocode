/*
 * XREFs of ExpQueryOriginalImageFeatureInformation @ 0x140A04604
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpGetOriginalImageVersion @ 0x14060DBD0 (ExpGetOriginalImageVersion.c)
 */

__int64 __fastcall ExpQueryOriginalImageFeatureInformation(
        _DWORD *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int OriginalImageVersion; // eax

  v5 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a1 && a2 >= 0x14 && *a1 == 1 )
  {
    if ( a5 )
      *a5 = 5;
    if ( a3 && a4 >= 5 )
    {
      memset(a3, 0, a4);
      *(_DWORD *)a3 = 1;
      OriginalImageVersion = ExpGetOriginalImageVersion();
      if ( OriginalImageVersion >= 0xA00000C && a1[4] <= OriginalImageVersion )
        a3[4] = 1;
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
