/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r14
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  char v23[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v24; // [rsp+28h] [rbp-38h]
  int v25; // [rsp+30h] [rbp-30h]
  _DWORD v26[4]; // [rsp+38h] [rbp-28h] BYREF
  void *v27; // [rsp+48h] [rbp-18h]
  unsigned int v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+54h] [rbp-Ch]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v5 = *((_QWORD *)a1 + 5);
  v6 = 1;
  v7 = 0;
  v25 = 1;
  if ( !*(_BYTE *)(v5 + 165) )
  {
    v8 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v8 + 24) = 4443LL;
LABEL_18:
    WdLogEvent5_WdError(v8);
    goto LABEL_19;
  }
  if ( *(_BYTE *)(v5 + 153) )
  {
    v9 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v9 + 24) = 4447LL;
    WdLogEvent5_WdWarning(v9);
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  v10 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v13 = (_DWORD *)v10;
  if ( !v10 )
    goto LABEL_19;
  v14 = *((unsigned int *)a1 + 22) - 55LL;
  if ( v14 < *(unsigned int *)(v10 + 40) )
  {
    v8 = WdLogNewEntry5_WdError(v14, v11);
    v15 = *((unsigned int *)a1 + 22);
LABEL_17:
    *(_QWORD *)(v8 + 24) = v15;
    goto LABEL_18;
  }
  v16 = *(_DWORD *)(v10 + 32);
  if ( v16 < 0 || v16 > 1 && v16 != 3 && v16 != 8 && (unsigned int)(v16 - 28) > 1 )
  {
    v8 = WdLogNewEntry5_WdError(v14, v11);
    v15 = (int)v13[8];
    *(_QWORD *)(v8 + 32) = 4469LL;
    goto LABEL_17;
  }
  v26[0] = v13[6];
  v26[3] = v13[9];
  v26[1] = v13[7];
  v29 = v13[11];
  v26[2] = v13[8];
  v28 = v13[10];
  v27 = v13 + 12;
  v17 = DxgkEscape((__int64)v26, v11, v12);
  v20 = v17;
  if ( v17 >= 0 )
  {
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v27, v28);
LABEL_20:
    v7 = v6;
    goto LABEL_21;
  }
  v21 = WdLogNewEntry5_WdError(v19, v18);
  *(_QWORD *)(v21 + 24) = v20;
  WdLogEvent5_WdError(v21);
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v7;
}
