/*
 * XREFs of HvlDmaDeleteDeviceDomain @ 0x1404F4270
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaDeleteDeviceDomain(int *a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v4 = *((_BYTE *)a1 + 4) != 0;
  v5 = *a1;
  v1 = HvcallFastExtended(65733LL, (__int64)v3, 0x18u, 0, 0);
  return HvlpHvToNtStatus(v1);
}
