/*
 * XREFs of ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03749A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005ABE4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D44BC (DxgkChangeVideoMemoryReservationInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChangeVideoMemoryReservation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v7);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v8 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v9 = -1073741811;
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    if ( v4 )
    {
      if ( !*(_QWORD *)(v4 + 24) && !*(_DWORD *)(v4 + 32) )
        v9 = DxgkChangeVideoMemoryReservationInternal(
               (_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *)(v4 + 24),
               0,
               *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL));
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v9, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 5652LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5652LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return v3;
}
