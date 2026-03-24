/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1404F5A80
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r9
  __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-88h] BYREF
  __int128 v6; // [rsp+30h] [rbp-78h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v7, 40LL);
  v1 = *((_QWORD *)&v6 + 1);
  *(_DWORD *)v0 = 8;
  *((_BYTE *)v0 + 8) = 1;
  v3 = HvcallInitiateHypercall(111, v1, 0LL, v2);
  HvlpReleaseHypercallPage((__int64)&v5);
  return v3 != 0 ? 0xC0000001 : 0;
}
