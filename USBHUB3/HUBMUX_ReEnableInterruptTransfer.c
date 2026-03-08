/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x1C0010D5C
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C0012980 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C00129E0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C0012A10 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1C0012B80 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C0012D70 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C0013A50 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2328), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return HUBSM_AddEvent(v1 + 1264, 2046);
  return result;
}
