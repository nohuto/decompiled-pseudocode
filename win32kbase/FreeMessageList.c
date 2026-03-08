/*
 * XREFs of FreeMessageList @ 0x1C0070724
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02D6730;
  if ( qword_1C02D6730 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02D6730(a1);
  return result;
}
