/*
 * XREFs of FreeMessageList @ 0x1C0094B18
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C011CB00 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C011D730 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0256148;
  if ( qword_1C0256148 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0256148(a1);
  return result;
}
