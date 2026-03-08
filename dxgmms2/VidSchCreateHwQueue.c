/*
 * XREFs of VidSchCreateHwQueue @ 0x1C0044060
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C26EC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CDBE (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F600 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042A7C (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwQueue @ 0x1C0045300 (VidSchTerminateHwQueue.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r12
  int v8; // edi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  _BYTE *v12; // rsi
  bool v13; // al
  int v14; // ecx
  __int64 v15; // r12
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r14d
  __int64 v23; // rax
  struct _VIDSCH_QUEUE_PACKET *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+50h] [rbp-30h]
  int v31; // [rsp+54h] [rbp-2Ch]
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+60h] [rbp-20h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+C8h] [rbp+48h]
  __int64 v36; // [rsp+C8h] [rbp+48h]

  v4 = *(_QWORD *)(a2 + 8);
  v8 = 0;
  v35 = *(_QWORD *)(v4 + 32);
  Pool2 = ExAllocatePool2(64LL, 280LL, 1684105558LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  *(_DWORD *)Pool2 = 1684105558;
  *(_QWORD *)(Pool2 + 48) = a1;
  v12 = (_BYTE *)(a3 + 4);
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 128) = KeGetCurrentThread();
  v13 = (*(_DWORD *)(a2 + 56) & 0x20) != 0 || (*(_BYTE *)(v4 + 48) & 4) != 0 || (*v12 & 1) != 0;
  v14 = *(_DWORD *)v12;
  *(_BYTE *)(v10 + 144) = v13;
  *(_BYTE *)(v10 + 145) = (v14 & 8) != 0;
  *(_BYTE *)(v10 + 272) = (v14 & 0x10) != 0;
  *(_QWORD *)(v10 + 168) = v10 + 160;
  *(_QWORD *)(v10 + 160) = v10 + 160;
  *(_QWORD *)(v10 + 208) = v10 + 160;
  *(_QWORD *)(v10 + 224) = v10 + 216;
  *(_QWORD *)(v10 + 216) = v10 + 216;
  *(_QWORD *)(v10 + 248) = v10 + 240;
  *(_QWORD *)(v10 + 240) = v10 + 240;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 120)) == 1 )
    VidSchiIncrementHwContextReference(*(struct VIDSCH_HW_CONTEXT **)(v10 + 40));
  v15 = v35;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 1728), &LockHandle);
  v16 = *(_QWORD **)(a2 + 232);
  v17 = (_QWORD *)(v10 + 8);
  if ( *v16 != a2 + 224 )
    __fastfail(3u);
  *v17 = a2 + 224;
  *(_QWORD *)(v10 + 16) = v16;
  *v16 = v17;
  *(_QWORD *)(a2 + 232) = v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 32);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    *(_QWORD *)(v10 + 112) = 0LL;
LABEL_17:
    v21 = *(_DWORD *)(v35 + 152) * ((*(_DWORD *)(v35 + 76) << 6) + ((8 * *(_DWORD *)(v35 + 76) + 231) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v35 + 76) + 111);
    if ( (unsigned int)v21 <= 0x460 )
      v21 = 1120LL;
    v22 = 0;
    v36 = v21;
    do
    {
      v23 = ExAllocatePool2(64LL, v21, 895576406LL);
      v24 = (struct _VIDSCH_QUEUE_PACKET *)v23;
      if ( !v23 )
      {
        WdLogSingleEntry0(3LL);
        v8 = -1073741801;
        goto LABEL_31;
      }
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v15 + 1736),
        v10 + 240,
        (_QWORD *)(v23 + 8),
        (_DWORD *)(v10 + 256));
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v10, v24);
      v21 = v36;
      ++v22;
    }
    while ( v22 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v26 = *(_QWORD *)(v10 + 40);
      v27 = *(_QWORD *)(v26 + 24);
      if ( !v27 || (*(_DWORD *)(v26 + 56) & 0x40) != 0 )
        v27 = *(_QWORD *)(v10 + 40);
      if ( (byte_1C00769C1 & 4) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v26, &EventCreateHwQueue, v25, v27, 0LL, v10);
    }
    *a4 = v10;
    return (unsigned int)v8;
  }
  v18 = *(_DWORD *)v12;
  v19 = *(_QWORD *)(v35 + 8);
  v20 = *(_QWORD *)(a2 + 48);
  v29 = 0LL;
  v30 = v18;
  v32 = *(_QWORD *)(a3 + 16);
  v31 = *(_DWORD *)(a3 + 8);
  v34 = *(_QWORD *)(a3 + 40);
  v33 = 0LL;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[19])(v19, v20, &v29);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(v10 + 112) = v29;
    goto LABEL_17;
  }
LABEL_31:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v10);
  *a4 = 0LL;
  return (unsigned int)v8;
}
