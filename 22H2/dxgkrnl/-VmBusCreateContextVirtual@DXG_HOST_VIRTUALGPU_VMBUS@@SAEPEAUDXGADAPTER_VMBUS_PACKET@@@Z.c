/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00F0800 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r14
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  char v20[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v21; // [rsp+28h] [rbp-38h]
  int v22; // [rsp+30h] [rbp-30h]
  _D3DKMT_CREATECONTEXTVIRTUAL v23; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v6 = 0;
  v22 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v7 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v7 + 24) = 816LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v11 = (_DWORD *)v9;
  if ( !v9 )
    goto LABEL_4;
  v12 = *(unsigned int *)(v9 + 48);
  v13 = *((unsigned int *)a1 + 22) - 55LL;
  if ( v13 < v12 )
  {
    v7 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v7 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v7 + 32) = 822LL;
    goto LABEL_3;
  }
  v14 = v12 + 55;
  v23.Flags.Value = *(_DWORD *)(v9 + 40);
  v23.hDevice = *(_DWORD *)(v9 + 28);
  v23.ClientHint = *(_DWORD *)(v9 + 44);
  v23.NodeOrdinal = *(_DWORD *)(v9 + 32);
  v23.EngineAffinity = *(_DWORD *)(v9 + 36);
  v23.pPrivateDriverData = 0LL;
  v23.PrivateDriverDataSize = 0;
  *(_QWORD *)&v23.hContext = 0LL;
  if ( (_DWORD)v12 )
  {
    v23.PrivateDriverDataSize = v12;
    v23.pPrivateDriverData = (void *)(v9 + 52);
  }
  *(_DWORD *)(v9 + 24) = 0;
  v15 = DxgkCreateContextVirtualImpl(&v23, 0, v10);
  v18 = v15;
  if ( v15 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = 849LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_6;
  }
  v11[6] = v23.hContext;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v11, v14);
LABEL_5:
  v6 = v5;
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v6;
}
