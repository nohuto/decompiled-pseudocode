/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037BE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AB84 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock2 @ 0x1C019E150 (DxgkLock2.c)
 *     DxgkLock @ 0x1C01B7E10 (DxgkLock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  D3DKMT_HANDLE *v8; // rcx
  int v9; // ecx
  void *pData; // rax
  D3DKMT_HANDLE v11; // eax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _DWORD v14[2]; // [rsp+58h] [rbp-9h] BYREF
  void *v15; // [rsp+60h] [rbp-1h]
  _BYTE v16[8]; // [rsp+68h] [rbp+7h] BYREF
  DXGPUSHLOCK *v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+78h] [rbp+17h]
  struct _D3DKMT_LOCK v19; // [rsp+80h] [rbp+1Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    v7 = v4;
    if ( v4 )
    {
      v14[1] = 0;
      v8 = (D3DKMT_HANDLE *)(v4 + 24);
      if ( *(_BYTE *)(v4 + 48) )
      {
        v11 = *(_DWORD *)(v4 + 28);
        memset(&v19, 0, sizeof(v19));
        v19.hAllocation = v11;
        v19.hDevice = *v8;
        v19.Flags.Value = *(_DWORD *)(v7 + 52);
        v19.PrivateDriverData = *(_DWORD *)(v7 + 56);
        v9 = DxgkLock(&v19, v5, v6);
        pData = v19.pData;
      }
      else
      {
        v9 = DxgkLock2((struct DXGALLOCATION *)v8);
        pData = *(void **)(v7 + 40);
      }
      v14[0] = v9;
      v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v15 = pData;
      VmBusCompletePacket(v12, v14, 0x10u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 2044LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2044LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
