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
