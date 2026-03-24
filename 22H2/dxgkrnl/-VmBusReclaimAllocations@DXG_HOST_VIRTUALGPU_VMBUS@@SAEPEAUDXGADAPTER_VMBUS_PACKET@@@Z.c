/*
 * XREFs of ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246510
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C0117190 (DxgkReclaimAllocations2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int128 *v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _D3DKMT_RECLAIMALLOCATIONS2 v22; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-38h] BYREF
  DXGPUSHLOCK *v24; // [rsp+50h] [rbp-30h]
  int v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v25 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1273LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_24;
  }
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v9 )
    goto LABEL_24;
  v10 = &v26;
  LODWORD(v11) = -1073741811;
  v26 = 0LL;
  v12 = *(unsigned int *)(v9 + 32);
  v13 = 16;
  memset(&v22, 0, sizeof(v22));
  if ( !(_DWORD)v12
    || (v7 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v12,
        ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v12 < 4) )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = 1286LL;
LABEL_18:
    WdLogEvent5_WdError(v20);
    goto LABEL_19;
  }
  if ( !*(_BYTE *)(v9 + 37)
    || (unsigned int)v12 <= 1
    || (v13 = 4 * v12 + 12, (v10 = (__int128 *)operator new(v13, 0x4B677844u, 1, (POOL_TYPE)512)) != 0LL) )
  {
    *(_QWORD *)&v22.hPagingQueue = *(_QWORD *)(v9 + 28);
    if ( *(_BYTE *)(v9 + 36) )
      v22.pResources = (D3DKMT_HANDLE *)(v9 + 40);
    else
      v22.HandleList = (const D3DKMT_HANDLE *)(v9 + 40);
    if ( *(_BYTE *)(v9 + 37) )
      v22.pDiscarded = (BOOL *)v10 + 3;
    v17 = DxgkReclaimAllocations2(&v22, v7, v12);
    v11 = v17;
    if ( v17 >= 0 )
      goto LABEL_19;
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = v11;
    goto LABEL_18;
  }
  v16 = WdLogNewEntry5_WdLowResource(v14, v7, v12, v15);
  *(_QWORD *)(v16 + 24) = 1296LL;
  WdLogEvent5_WdLowResource(v16);
  LODWORD(v11) = -1073741801;
LABEL_19:
  *((_DWORD *)v10 + 2) = v11;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    *(_QWORD *)v10 = v22.PagingFenceValue;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v10, v13);
  if ( v10 != &v26 )
    operator delete[](v10);
  v5 = 1;
LABEL_24:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v5;
}
