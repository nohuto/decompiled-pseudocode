/*
 * XREFs of vDisableSynchronize @ 0x1C00BBBC0
 * Callers:
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall vDisableSynchronize(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0294B00;
  if ( qword_1C0294B00 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0294B00(a1);
  return result;
}
