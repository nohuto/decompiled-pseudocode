/*
 * XREFs of ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C0344F1C
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B700 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::IncrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this) <= 0xFFFF )
    return 0LL;
  WdLogSingleEntry1(2LL, 6230LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Too many VM processes created", 6230LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
