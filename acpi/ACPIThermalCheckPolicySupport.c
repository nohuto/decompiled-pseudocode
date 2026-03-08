/*
 * XREFs of ACPIThermalCheckPolicySupport @ 0x1C0095848
 * Callers:
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalCheckPolicySupport(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 200);
  IoReuseIrp(*(PIRP *)(v1 + 192), -1073741637);
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 192) + 184LL);
  *(_DWORD *)(v2 - 56) = 24;
  *(_DWORD *)(v2 - 64) = 24;
  *(_BYTE *)(v2 - 72) = 14;
  *(_DWORD *)(v2 - 48) = 2703508;
  *(_QWORD *)(*(_QWORD *)(v1 + 192) + 24LL) = &v4;
  v4 = 0LL;
  v5 = 0LL;
  LODWORD(v4) = 1;
  return IoSynchronousCallDriver(*(_QWORD *)(v1 + 200), *(_QWORD *)(v1 + 192));
}
