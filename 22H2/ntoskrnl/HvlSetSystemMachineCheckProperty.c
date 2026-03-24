/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x1404F64C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-88h] BYREF
  __int128 v7; // [rsp+30h] [rbp-78h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v6, 1, (__int64)v8, 40LL);
  v3 = *((_QWORD *)&v7 + 1);
  *(_DWORD *)v2 = 4;
  v2[1] = *a1;
  LOWORD(a1) = HvcallInitiateHypercall(111, v3, 0LL, v4);
  HvlpReleaseHypercallPage((__int64)&v6);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
