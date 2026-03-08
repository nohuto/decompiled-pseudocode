/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038F760
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005ABB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v11; // [rsp+28h] [rbp-50h]
  _BYTE v12[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v14 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v5 = v4;
    if ( !v4 )
      goto LABEL_15;
    v6 = *(_DWORD *)(v4 + 64);
    if ( v6 <= 0x10 )
    {
      v8 = *((unsigned int *)a1 + 36);
      v9 = 4 * v6;
      if ( v8 - 80 >= v9 )
      {
        if ( v8 - v9 - 80 >= *(unsigned int *)(v5 + 52) )
        {
          *(_QWORD *)(v5 + 72) = v5 + 80;
          *(_QWORD *)(v5 + 56) = v9 + v5 + 80;
          v7 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v5 + 24), 0, v9);
          v15 = v7;
          if ( v7 >= 0 )
          {
LABEL_14:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v15, 4u);
            v3 = 1;
            goto LABEL_15;
          }
LABEL_13:
          HandleAsyncCommandError((__int64 *)a1, v7, *(_DWORD *)(v5 + 24), 2);
          goto LABEL_14;
        }
        WdLogSingleEntry2(2LL, v8, 5249LL);
        v11 = 5249LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        v11 = 0LL;
      }
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size 0x%I64x",
        *((unsigned int *)a1 + 36),
        v11,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 5234LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid Written Primaries array",
        5234LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = -1073741811;
    v15 = -1073741811;
    goto LABEL_13;
  }
  WdLogSingleEntry1(2LL, 5225LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5225LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v3;
}
