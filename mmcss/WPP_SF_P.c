/*
 * XREFs of WPP_SF_P @ 0x1C00049B8
 * Callers:
 *     CiTaskDump @ 0x1C000EF00 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_P(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_62da978b8000316eb1e6fce22b5cf66e_Traceguids);
}
