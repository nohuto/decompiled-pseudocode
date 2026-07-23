/*
 * XREFs of HvlUnregisterDeviceId @ 0x1404F7070
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnregisterDeviceId(unsigned __int64 a1)
{
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    return 3221225485LL;
  v3[0] = -1LL;
  v3[1] = a1;
  v2 = HvcallFastExtended(65667LL, (__int64)v3, 0x10u, 0, 0);
  return HvlpHvToNtStatus(v2);
}
