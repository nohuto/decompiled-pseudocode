/*
 * XREFs of FreeMessageList @ 0x1C00386E8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C012DDE0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02955B8;
  if ( qword_1C02955B8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02955B8(a1);
  return result;
}
