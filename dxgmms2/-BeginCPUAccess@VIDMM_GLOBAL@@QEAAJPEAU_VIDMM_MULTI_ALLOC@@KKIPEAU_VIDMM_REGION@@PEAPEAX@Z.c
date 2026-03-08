/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00B188C
 * Callers:
 *     VidMmBeginCPUAccess @ 0x1C0016F30 (VidMmBeginCPUAccess.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C002EB80 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB984 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00E4A28 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00E7B54 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00EEE00 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  char v24; // bl
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  void *v29; // rax
  __int64 *v30; // rax
  void **v31; // rcx
  __int64 v32; // rcx
  bool v33; // zf
  __int64 *v34; // rax
  __int64 v35; // r9
  __int64 v37; // rcx
  unsigned int v38; // r8d
  unsigned __int8 v39; // r9
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+20h] [rbp-68h]
  __int64 *v42; // [rsp+98h] [rbp+10h]
  int v43; // [rsp+A0h] [rbp+18h]

  v7 = *a2;
  v8 = 0LL;
  v9 = a4;
  v43 = 0;
  LODWORD(v12) = 0;
  v42 = *a2;
  v13 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13 + 504, 0LL);
  if ( *((_WORD *)a2[12] + 2) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, 2LL);
LABEL_4:
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
LABEL_5:
      LODWORD(v12) = -1073741811;
      goto LABEL_70;
    }
    WdLogSingleEntry2(2LL, a2, 2LL);
  }
  if ( *(_BYTE *)(v13 + 80) )
  {
    WdLogSingleEntry1(1LL, 8218LL);
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    goto LABEL_70;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = WdLogNewEntry5_WdTrace(v15);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = v9;
  }
  v21 = v9 & 0xFFFFFFA7;
  *a7 = 0LL;
  if ( (v21 & 0xFFFFFC58) != 0 )
  {
    WdLogSingleEntry1(1LL, v21);
    goto LABEL_4;
  }
  v22 = **(unsigned int **)(v13 + 536);
  if ( (v22 & 1) == 0 )
  {
    WdLogSingleEntry1(2LL, 8258LL);
    goto LABEL_5;
  }
  if ( (v22 & 8) == 0 )
  {
    v23 = (_QWORD *)v7[1];
    if ( *v23 != PsGetCurrentProcess(v22, v14, v16, v17) && (*(_DWORD *)(v13 + 72) & 0x1000) == 0 )
    {
      WdLogSingleEntry1(1LL, 8273LL);
      goto LABEL_4;
    }
  }
  v24 = 0;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v25 = **a2;
    v24 = *(_BYTE *)(v25 + 68) >> 7;
  }
  v27 = **(unsigned int **)(v13 + 536);
  if ( (v27 & 0x20000000) != 0 && !v24 && (v27 & 0x40000000) == 0 && v42 != *(__int64 **)(v13 + 88) )
  {
    v25 = *(unsigned int *)(*((_QWORD *)this + 3) + 436LL);
    if ( (v25 & 0x10) == 0 && (v25 & 8) == 0 )
    {
      WdLogSingleEntry1(1LL, 8297LL);
      goto LABEL_4;
    }
  }
  if ( (v21 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 68) & 0x40) == 0 && (*(_DWORD *)(v13 + 72) & 0x100000) == 0 )
    {
      WdLogSingleEntry1(1LL, 8323LL);
      goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 7089) && (v27 & 4) != 0 )
    {
      WdLogSingleEntry1(1LL, 8334LL);
      goto LABEL_4;
    }
  }
  if ( (v21 & 0x81) != 0 )
  {
    if ( (v21 & 0x100) != 0 )
    {
      LODWORD(v12) = -1071775484;
      WdLogSingleEntry2(4LL, a2, -1071775484LL);
      goto LABEL_70;
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v25, (struct VIDMM_ALLOC *)a2);
    v43 = 4;
LABEL_39:
    if ( v42[3] )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v42[1] + 24) + 152LL))(*(_QWORD *)(v42[1] + 24), v42[3]);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
    }
    _InterlockedAdd((volatile signed __int32 *)(v13 + 360), 1u);
    v28 = *(_DWORD *)(v13 + 72);
    if ( (v28 & 0x4000) != 0 )
    {
      v29 = *(void **)(v13 + 568);
LABEL_57:
      v31 = a7;
      *a7 = v29;
      goto LABEL_58;
    }
    if ( (v28 & 0x2000) != 0 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
      v12 = (int)LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a2, a7);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
      if ( (int)v12 >= 0 )
      {
LABEL_58:
        v33 = bTracingEnabled == 0;
        *(_BYTE *)(v13 + 82) = 1;
        if ( !v33 )
        {
          v34 = a2[1];
          v35 = 0LL;
          if ( v34 )
            v35 = v34[3];
          if ( (byte_1C00769C1 & 1) != 0 )
            McTemplateK0ppqq_EtwWriteTransfer((__int64)v31, v27, v26, v35, a2, v21, v43);
        }
        ++*((_DWORD *)this + 1904);
        if ( (v21 & 1) != 0 )
          ++*((_DWORD *)this + 1905);
        if ( (v21 & 2) != 0 )
          ++*((_DWORD *)this + 1907);
        if ( (v21 & 0x80u) != 0 )
          ++*((_DWORD *)this + 1908);
        LODWORD(v12) = 0;
        goto LABEL_70;
      }
      WdLogSingleEntry1(1LL, v12);
      DxgkLogInternalTriageEvent(v32, 0x40000LL);
LABEL_89:
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 360));
      goto LABEL_70;
    }
    if ( (**(_DWORD **)(v13 + 536) & 0x40000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v25);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 68) & 0x80u) == 0 )
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
        if ( (*(_DWORD *)(v13 + 68) & 0x200000) != 0 )
        {
          WdLogSingleEntry1(3LL, v13);
        }
        else if ( (*((_DWORD *)this + 1764) & 0x20) != 0 || *((_BYTE *)this + 7088) )
        {
          LODWORD(v12) = -1073741823;
        }
        else
        {
          v40 = *(_QWORD *)(v13 + 120);
          if ( v40 && (*(_DWORD *)(v40 + 80) & 0x1001) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v37);
            LODWORD(v12) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, (struct VIDMM_ALLOC *)a2, v38, v39, v41);
            if ( (int)v12 < 0 )
              WdLogSingleEntry1(3LL, a2);
          }
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
        if ( (int)v12 < 0 )
        {
          WdLogSingleEntry1(3LL, a2);
          goto LABEL_89;
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v25);
      }
      if ( (**(_DWORD **)(v13 + 536) & 8) != 0 )
      {
        v29 = *(void **)(v13 + 392);
        goto LABEL_57;
      }
    }
    v29 = (void *)v42[2];
    goto LABEL_57;
  }
  if ( (v21 & 2) != 0 )
    goto LABEL_39;
  if ( bTracingEnabled )
  {
    v30 = a2[1];
    if ( v30 )
      v8 = v30[3];
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0ppqq_EtwWriteTransfer(v25, v27, v26, v8, a2, v21, 2);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7184), v21, 2u, 0);
  LODWORD(v12) = -1071775486;
LABEL_70:
  ExReleasePushLockExclusiveEx(v13 + 504, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
