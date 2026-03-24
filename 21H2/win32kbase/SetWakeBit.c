/*
 * XREFs of SetWakeBit @ 0x1C00B677C
 * Callers:
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, __int64 a2, __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0257118;
  if ( qword_1C0257118 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0257118(a1, a2, a3);
  return result;
}
