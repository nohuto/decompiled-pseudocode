/*
 * XREFs of WPP_SF_S @ 0x1C0004A08
 * Callers:
 *     CiTaskDump @ 0x1C000EF00 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    while ( *(_WORD *)(a4 + 2 * v4++ + 2) != 0 )
      ;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_62da978b8000316eb1e6fce22b5cf66e_Traceguids);
}
