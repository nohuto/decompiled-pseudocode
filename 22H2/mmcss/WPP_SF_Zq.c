/*
 * XREFs of WPP_SF_Zq @ 0x1C0004808
 * Callers:
 *     CiDispatchInitialize @ 0x1C000E300 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids);
}
