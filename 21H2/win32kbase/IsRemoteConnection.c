/*
 * XREFs of IsRemoteConnection @ 0x1C00B1D58
 * Callers:
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall IsRemoteConnection(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0258050;
  if ( qword_1C0258050 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0258050(a1, a2);
  return result;
}
