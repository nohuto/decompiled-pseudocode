/*
 * XREFs of ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AB84 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CA274 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

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
