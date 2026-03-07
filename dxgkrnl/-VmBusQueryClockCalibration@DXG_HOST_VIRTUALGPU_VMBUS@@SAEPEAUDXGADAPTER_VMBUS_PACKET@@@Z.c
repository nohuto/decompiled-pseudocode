char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryClockCalibration(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct DXGPROCESS *Current; // rax
  int ClockCalibrationInternal; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v10[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+60h] [rbp-38h]
  _OWORD v13[2]; // [rsp+68h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( v6 )
    {
      memset(v13, 0, sizeof(v13));
      Current = DXGPROCESS::GetCurrent(v5);
      if ( Current )
      {
        ClockCalibrationInternal = DxgkQueryClockCalibrationInternal(
                                     Current,
                                     (struct _D3DKMT_QUERYCLOCKCALIBRATION *)(v6 + 24),
                                     *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
        v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
        LODWORD(v13[0]) = ClockCalibrationInternal;
        *(_OWORD *)((char *)v13 + 4) = *(_OWORD *)(v6 + 36);
        *(_QWORD *)((char *)&v13[1] + 4) = *(_QWORD *)(v6 + 52);
        HIDWORD(v13[1]) = *(_DWORD *)(v6 + 60);
        VmBusCompletePacket(v9, v13, 0x20u);
        goto LABEL_4;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3228LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3228LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
