/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00B74E0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PostIAMShellHookMessageEx(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0256B90;
  if ( qword_1C0256B90 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0256B90(a1, a2, a3);
  return result;
}
