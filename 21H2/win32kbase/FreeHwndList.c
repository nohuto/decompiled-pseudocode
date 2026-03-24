/*
 * XREFs of FreeHwndList @ 0x1C00B7A6C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall FreeHwndList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0257308;
  if ( qword_1C0257308 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0257308(a1);
  return result;
}
