/*
 * XREFs of GetClassPtr @ 0x1C00B35A0
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A66E4 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetClassPtr(__int64 a1, __int64 a2))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0256810;
  if ( qword_1C0256810 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0256810(a1, a2, hModuleWin);
  return result;
}
