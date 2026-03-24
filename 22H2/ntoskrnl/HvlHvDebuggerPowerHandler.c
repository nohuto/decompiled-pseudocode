/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1404F5150
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int16 v5; // bx
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  __int128 v8; // [rsp+30h] [rbp-78h]
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 1, (__int64)v9, 40LL);
  v3 = *((_QWORD *)&v8 + 1);
  *(_DWORD *)v2 = 10;
  *((_BYTE *)v2 + 8) = a1;
  v5 = HvcallInitiateHypercall(111, v3, 0LL, v4);
  HvlpReleaseHypercallPage((__int64)&v7);
  return HvlpHvToNtStatus(v5);
}
