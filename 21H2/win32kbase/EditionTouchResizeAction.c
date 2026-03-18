/*
 * XREFs of EditionTouchResizeAction @ 0x1C023E150
 * Callers:
 *     ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFADC (-CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall EditionTouchResizeAction(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C029D840;
  if ( qword_1C029D840 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C029D840(a1, a2, a3);
  return result;
}
