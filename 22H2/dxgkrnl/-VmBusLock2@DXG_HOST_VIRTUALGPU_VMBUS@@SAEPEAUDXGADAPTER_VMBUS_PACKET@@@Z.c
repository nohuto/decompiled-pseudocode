/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02432C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock2 @ 0x1C010BD70 (DxgkLock2.c)
 *     DxgkLock @ 0x1C010CE30 (DxgkLock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  D3DKMT_HANDLE *v11; // rcx
  int v12; // ecx
  void *pData; // rax
  D3DKMT_HANDLE v14; // eax
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  _DWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  void *v18; // [rsp+28h] [rbp-58h]
  _BYTE v19[8]; // [rsp+30h] [rbp-50h] BYREF
  DXGPUSHLOCK *v20; // [rsp+38h] [rbp-48h]
  int v21; // [rsp+40h] [rbp-40h]
  struct _D3DKMT_LOCK v22; // [rsp+48h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v21 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    v10 = v7;
    if ( v7 )
    {
      v17[1] = 0;
      v11 = (D3DKMT_HANDLE *)(v7 + 24);
      if ( *(_BYTE *)(v7 + 48) )
      {
        v14 = *(_DWORD *)(v7 + 28);
        memset(&v22, 0, sizeof(v22));
        v22.hAllocation = v14;
        v22.hDevice = *v11;
        v22.Flags.Value = *(_DWORD *)(v10 + 52);
        v22.PrivateDriverData = *(_DWORD *)(v10 + 56);
        v12 = DxgkLock(&v22, v8, v9);
        pData = v22.pData;
      }
      else
      {
        v12 = DxgkLock2((ULONG64)v11);
        pData = *(void **)(v10 + 40);
      }
      v17[0] = v12;
      v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v18 = pData;
      VmBusCompletePacket(v15, v17, 0x10u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1630LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
