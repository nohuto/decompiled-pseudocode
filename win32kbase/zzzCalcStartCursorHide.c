/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C00C42D0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C02D65A8;
  if ( qword_1C02D65A8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D65A8(a1, a2);
  return result;
}
