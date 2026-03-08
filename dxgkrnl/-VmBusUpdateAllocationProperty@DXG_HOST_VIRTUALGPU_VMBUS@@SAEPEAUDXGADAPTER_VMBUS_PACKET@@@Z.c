/*
 * XREFs of ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390380
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
 *     DxgkUpdateAllocationProperty @ 0x1C0332F70 (DxgkUpdateAllocationProperty.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateAllocationProperty(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  int updated; // eax
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  __int128 v13; // [rsp+68h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v13 = 0LL;
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    v7 = v4;
    if ( v4 )
    {
      updated = DxgkUpdateAllocationProperty(v4 + 24, v5, v6);
      DWORD2(v13) = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry1(2LL, updated);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkUpdateAllocationProperty failed: 0x%I64x",
          SDWORD2(v13),
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)&v13 = *(_QWORD *)(v7 + 48);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 0x10u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 4426LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4426LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
