/*
 * XREFs of WPP_SF_qqd @ 0x1C0004CA8
 * Callers:
 *     CiProcessSuspend @ 0x1C0004AE8 (CiProcessSuspend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f961914fea93012ea63c8b8118ed7e5_Traceguids);
}
