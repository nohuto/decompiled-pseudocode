/*
 * XREFs of ??$ReleaseInterface@VCHolographicInteropTaskQueue@@@@YAXAEAPEAVCHolographicInteropTaskQueue@@@Z @ 0x1802A0C04
 * Callers:
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A0EE4 (--1CHolographicManager@@EEAA@XZ.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802A9040 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CHolographicInteropTaskQueue>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
