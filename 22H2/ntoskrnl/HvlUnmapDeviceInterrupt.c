/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1404F6FC0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-88h] BYREF
  __int128 v10; // [rsp+30h] [rbp-78h]
  _BYTE v11[80]; // [rsp+40h] [rbp-68h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v9, 1, (__int64)v11, 40LL);
  v5 = *((_QWORD *)&v10 + 1);
  *v4 = -1LL;
  v4[1] = a1;
  v6 = *a2;
  *((_DWORD *)v4 + 8) = 0;
  *((_OWORD *)v4 + 1) = v6;
  LOWORD(a1) = HvcallInitiateHypercall(125, v5, 0LL, v7);
  HvlpReleaseHypercallPage((__int64)&v9);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
