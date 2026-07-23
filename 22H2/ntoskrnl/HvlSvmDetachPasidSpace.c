/*
 * XREFs of HvlSvmDetachPasidSpace @ 0x1404F69F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F7190 (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDetachPasidSpace(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // eax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = a1;
  v2 = HvcallFastExtended(65699LL, (__int64)v6, 8u, 0, 0);
  v3 = HvlpHvToNtStatus(v2);
  if ( (HvlpFlags & 2) != 0 )
  {
    v4 = HvlpDetachRootSvmDevice(a1);
    if ( v3 >= 0 && v4 < 0 )
      return (unsigned int)v4;
  }
  return (unsigned int)v3;
}
