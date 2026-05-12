/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterDeviceReset @ 0x1C002C554 (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C002E2C0 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2DC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A660 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C0013F04 (RaidAdapterRestartQueues.c)
 *     StorResumeIoGateway @ 0x1C004E46C (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = StorResumeIoGateway((PKSPIN_LOCK)(a1 + 832));
  v3 = v2;
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v3 )
    RaidAdapterRestartQueues(a1, 0);
  return v3;
}
