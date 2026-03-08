/*
 * XREFs of WPP_SF_L @ 0x1C0004D18
 * Callers:
 *     CiConfigQueryValue @ 0x1C000ED40 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_L(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_350503daac883abe7be9cf63f89038d9_Traceguids);
}
