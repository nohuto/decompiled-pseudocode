/*
 * XREFs of vDisableSynchronize @ 0x1C00A8D78
 * Callers:
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall vDisableSynchronize(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02556E8;
  if ( qword_1C02556E8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02556E8(a1);
  return result;
}
