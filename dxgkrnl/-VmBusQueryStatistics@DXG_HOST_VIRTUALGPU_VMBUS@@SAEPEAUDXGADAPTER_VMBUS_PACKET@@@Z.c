/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005ADC4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  int StatisticsInternal; // eax
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rdx
  __int128 v12; // xmm1
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  _BYTE v14[8]; // [rsp+50h] [rbp-338h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-330h]
  int v16; // [rsp+60h] [rbp-328h]
  _DWORD v17[196]; // [rsp+68h] [rbp-320h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v16 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5630LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5630LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
  v6 = v5;
  if ( !v5 || *(_QWORD *)(v5 + 40) )
    goto LABEL_3;
  *(_QWORD *)(v5 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 404LL);
  memset(&v17[1], 0, 0x30CuLL);
  StatisticsInternal = DxgkQueryStatisticsInternal(v6 + 24, 0, v7);
  v9 = 6LL;
  v17[0] = StatisticsInternal;
  v10 = (_OWORD *)(v6 + 48);
  v11 = &v17[2];
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    v12 = v10[7];
    v10 += 8;
    *(v11 - 1) = v12;
    --v9;
  }
  while ( v9 );
  v13 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
  *(_QWORD *)v11 = *(_QWORD *)v10;
  VmBusCompletePacket(v13, v17, 0x310u);
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
