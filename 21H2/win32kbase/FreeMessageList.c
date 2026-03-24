/*
 * XREFs of FreeMessageList @ 0x1C0093D58
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C011C830 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0257148;
  if ( qword_1C0257148 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0257148(a1);
  return result;
}
