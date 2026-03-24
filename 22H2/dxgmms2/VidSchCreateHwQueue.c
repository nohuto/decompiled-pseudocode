/*
 * XREFs of VidSchCreateHwQueue @ 0x1C0039AF0
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00967D0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007B20 (VidSchiInterlockedInsertTailList.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00179F8 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024F28 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037A00 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0037B34 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwQueue @ 0x1C003AB90 (VidSchTerminateHwQueue.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  __int64 v4; // r14
  __int64 v8; // r13
  int v9; // edi
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  bool v16; // al
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // r15d
  SIZE_T v24; // r12
  struct _VIDSCH_QUEUE_PACKET *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _VIDSCH_QUEUE_PACKET *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-60h] BYREF
  int v35; // [rsp+50h] [rbp-58h]
  int v36; // [rsp+54h] [rbp-54h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  __int128 v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+70h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v4 + 32);
  v9 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x108uLL, 0x64616956u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0x108uLL);
  *(_DWORD *)v13 = 1684105558;
  *((_QWORD *)v13 + 6) = a1;
  *((_QWORD *)v13 + 5) = a2;
  *((_QWORD *)v13 + 16) = KeGetCurrentThread();
  v16 = (*(_DWORD *)(a2 + 56) & 0x20) != 0 || (*(_DWORD *)(v4 + 48) & 4) != 0 || (*(_DWORD *)(a3 + 4) & 1) != 0;
  v13[144] = v16;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    v13[145] = (*(_DWORD *)(a3 + 4) & 8) != 0;
  *((_QWORD *)v13 + 21) = v13 + 160;
  *((_QWORD *)v13 + 20) = v13 + 160;
  *((_QWORD *)v13 + 26) = v13 + 160;
  *((_QWORD *)v13 + 28) = v13 + 216;
  *((_QWORD *)v13 + 27) = v13 + 216;
  *((_QWORD *)v13 + 31) = v13 + 240;
  *((_QWORD *)v13 + 30) = v13 + 240;
  if ( _InterlockedIncrement((volatile signed __int32 *)v13 + 30) == 1 )
    VidSchiIncrementHwContextReference(*((struct VIDSCH_HW_CONTEXT **)v13 + 5));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1712), &LockHandle);
  v17 = *(_QWORD **)(a2 + 232);
  v18 = v13 + 8;
  if ( *v17 != a2 + 224 )
    __fastfail(3u);
  *v18 = a2 + 224;
  *((_QWORD *)v13 + 2) = v17;
  *v17 = v18;
  *(_QWORD *)(a2 + 232) = v18;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *((_QWORD *)v13 + 14) = *(_QWORD *)(a1 + 32);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    *((_QWORD *)v13 + 14) = 0LL;
LABEL_20:
    v22 = *(_DWORD *)(v8 + 144) * ((*(_DWORD *)(v8 + 68) << 6) + ((8 * *(_DWORD *)(v8 + 68) + 199) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v8 + 68) + 108);
    if ( v22 <= 0x430 )
      v22 = 1072;
    v23 = 0;
    v24 = v22;
    do
    {
      v25 = (struct _VIDSCH_QUEUE_PACKET *)ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
      v28 = v25;
      if ( !v25 )
      {
        v32 = WdLogNewEntry5_WdWarning(v27, v26);
        WdLogEvent5_WdWarning(v32);
        v9 = -1073741801;
        goto LABEL_34;
      }
      memset(v25, 0, v24);
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v8 + 1720),
        (__int64)(v13 + 240),
        (_QWORD *)v28 + 1,
        (_DWORD *)v13 + 64);
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v13, v28);
      ++v23;
    }
    while ( v23 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v30 = *((_QWORD *)v13 + 5);
      v31 = *(_QWORD *)(v30 + 24);
      if ( !v31 || (*(_DWORD *)(v30 + 56) & 0x40) != 0 )
        v31 = *((_QWORD *)v13 + 5);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v30, &EventCreateHwQueue, v29, v31, 0LL, v13);
    }
    *a4 = v13;
    return (unsigned int)v9;
  }
  v19 = *(_DWORD *)(a3 + 4);
  v20 = *(_QWORD *)(a2 + 48);
  v21 = *(_QWORD *)(v8 + 8);
  v34 = 0LL;
  v35 = v19;
  v37 = *(_QWORD *)(a3 + 16);
  v36 = *(_DWORD *)(a3 + 8);
  v39 = *(_QWORD *)(a3 + 40);
  v38 = 0LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[19])(v21, v20, &v34);
  if ( v9 >= 0 )
  {
    *((_QWORD *)v13 + 14) = v34;
    goto LABEL_20;
  }
LABEL_34:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v13);
  *a4 = 0LL;
  return (unsigned int)v9;
}
