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
  __int16 v1; // bx
  _OWORD v3[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v3, 0, sizeof(v3));
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v3, 1, (__int64)v4, 40LL);
  *(_DWORD *)v0 = 8;
  *((_BYTE *)v0 + 8) = 1;
  v1 = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
