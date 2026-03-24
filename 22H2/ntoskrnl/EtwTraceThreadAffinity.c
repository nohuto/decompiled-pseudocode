/*
 * XREFs of EtwTraceThreadAffinity @ 0x1405A8280
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     KiSetAffinityThread @ 0x14035D934 (KiSetAffinityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall EtwTraceThreadAffinity(__int64 a1, __int64 *a2)
{
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-30h]
  __int16 v4; // [rsp+3Ch] [rbp-2Ch]
  __int16 v5; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 1152);
  v2 = *a2;
  v4 = *((_WORD *)a2 + 4);
  v5 = 0;
  v6[0] = &v2;
  v6[1] = 16LL;
  EtwTraceKernelEvent((__int64)v6, 1u, 0x20001000u, 0x535u, 0x501902u);
}
