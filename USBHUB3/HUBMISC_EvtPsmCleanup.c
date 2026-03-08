/*
 * XREFs of HUBMISC_EvtPsmCleanup @ 0x1C00323F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_EvtPsmCleanup(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C006A340);
  v2 = (_QWORD *)result;
  if ( *(_QWORD *)(result + 1264) )
  {
    (*(void (__fastcall **)(__int64, __int64))(result + 1240))(result, 3046LL);
    (*(void (__fastcall **)(_QWORD))(*v2 + 520LL))(v2[158]);
    result = (*(__int64 (__fastcall **)(_QWORD))(*v2 + 504LL))(v2[158]);
    v2[158] = 0LL;
  }
  return result;
}
