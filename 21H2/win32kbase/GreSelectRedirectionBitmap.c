/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C00B03B8
 * Callers:
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GreSelectRedirectionBitmap(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C029B808;
  if ( qword_1C029B808 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C029B808(a1, a2);
  return result;
}
