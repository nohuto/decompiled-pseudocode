/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02510A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004083C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C022B610 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // eax
  int updated; // eax
  __int64 v14; // rax
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-50h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-40h]
  _DWORD v20[4]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+6Ch] [rbp-4h]
  int v26; // [rsp+80h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v19 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    v11 = v7;
    if ( v7 )
    {
      v25 = 0;
      v22 = 0LL;
      v23 = *(_QWORD *)(v7 + 24);
      v24 = *(_DWORD *)(v7 + 48);
      v20[1] = *(_DWORD *)(v7 + 36);
      v20[0] = *(_DWORD *)(v7 + 32);
      v20[2] = *(_DWORD *)(v7 + 40);
      v20[3] = *(_DWORD *)(v7 + 44);
      v21 = v7 + 56;
      v12 = *(_DWORD *)(v7 + 44);
      if ( v12
        && (v9 = (unsigned int)(v12 - 1), v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 120) >> 6, v8 >= v9) )
      {
        updated = DxgkUpdateGpuVirtualAddress((__int64)v20, v8, v10);
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v14 + 24) = *(unsigned int *)(v11 + 44);
        WdLogEvent5_WdError(v14);
        updated = -1073741811;
      }
      v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v26 = updated;
      VmBusCompletePacket(v15, &v26, 4u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4810LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
