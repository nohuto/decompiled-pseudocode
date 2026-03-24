/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250470
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040814 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00FB130 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // r8
  int v18; // eax
  struct VMBPACKETCOMPLETION__ *v19; // rcx
  _BYTE v21[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v23 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v11 = v7;
    if ( !v7 )
      goto LABEL_13;
    v12 = 4LL * *(unsigned int *)(v7 + 392);
    if ( v12 > 0xFFFFFFFF )
    {
      v14 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, v8);
      *(_QWORD *)(v14 + 24) = 4571LL;
    }
    else
    {
      v13 = *((unsigned int *)a1 + 22);
      if ( v13 - 408 >= (unsigned __int64)(unsigned int)v12 )
      {
        v15 = v13 - (unsigned int)v12 - 408;
        if ( v15 >= *(unsigned int *)(v11 + 320) )
        {
          *(_QWORD *)(v11 + 400) = v11 + 408;
          *(_QWORD *)(v11 + 312) = (unsigned int)v12 + v11 + 408;
          Current = DXGPROCESS::GetCurrent(v15, (unsigned int)v12, v9, v10);
          v18 = DxgkSubmitCommandInternal((struct _D3DKMT_SUBMITCOMMAND *)(v11 + 24), Current, v17);
LABEL_12:
          v19 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
          v24 = v18;
          VmBusCompletePacket(v19, &v24, 4u);
          v5 = 1;
          goto LABEL_13;
        }
        v14 = WdLogNewEntry5_WdError(v15, (unsigned int)v12);
        *(_QWORD *)(v14 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v14 + 32) = 4583LL;
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v13, (unsigned int)v12);
        *(_QWORD *)(v14 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    WdLogEvent5_WdError(v14);
    v18 = -1073741811;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4562LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v5;
}
