/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C009E0C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall XDCOBJ_vSetDefaultFontWrap(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0294AC0;
  if ( qword_1C0294AC0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0294AC0(a1, a2);
  return result;
}
