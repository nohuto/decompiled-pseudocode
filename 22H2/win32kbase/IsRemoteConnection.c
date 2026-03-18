/*
 * XREFs of IsRemoteConnection @ 0x1C00D6144
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00E6390 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall IsRemoteConnection(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02962C0;
  if ( qword_1C02962C0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02962C0(a1);
  return result;
}
