/*
 * XREFs of vEnableSynchronize @ 0x1C0064088
 * Callers:
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall vEnableSynchronize(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02947D8;
  if ( qword_1C02947D8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02947D8(a1);
  return result;
}
