/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089160
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0001340 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001BC86 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C002FF60 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0089AAC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char v2; // r12
  char *v3; // r13
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  volatile signed __int32 **v8; // r15
  volatile signed __int32 *v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rdx
  volatile signed __int32 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rcx
  volatile signed __int32 **v18; // rax
  int v19; // ecx
  __int64 *v20; // rdx
  int v21; // ecx
  volatile signed __int32 *v22; // rax
  volatile signed __int32 **v23; // rcx
  __int64 *v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rcx
  __int64 **v27; // rax
  volatile signed __int32 **v28; // rax
  __int64 *v29; // r14
  __int64 *v30; // rdi
  int v31; // ebx
  __int64 *v32; // rsi
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rax
  __int64 **v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  int v43; // ecx
  __int64 *v44; // rsi
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 *v46; // rdx
  __int64 **v47; // rax
  __int64 v48; // [rsp+50h] [rbp-68h]
  __int64 *v49; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v50; // [rsp+78h] [rbp-40h]
  char *v52; // [rsp+D0h] [rbp+18h]

  v2 = 0;
  v50 = (volatile signed __int32 *)&v49;
  v3 = (char *)(this + 7);
  v52 = (char *)(this + 7);
  v49 = (__int64 *)&v49;
  if ( this[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v7 = *((_DWORD *)v3 + 6);
        if ( v7 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, &EventBlockThread, v6, v7);
      }
      ExAcquirePushLockExclusiveEx(v3, 0LL);
    }
    v2 = 1;
    *((_QWORD *)v3 + 1) = KeGetCurrentThread();
    v52 = v3;
  }
  v8 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (volatile signed __int32 *)v8 )
      break;
    if ( *((volatile signed __int32 ***)v9 + 1) != v8
      || (v10 = *(_QWORD *)v9, *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9) )
    {
      __fastfail(3u);
    }
    *v8 = (volatile signed __int32 *)v10;
    v11 = v9;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    _InterlockedIncrement(v9 + 26);
    if ( (byte_1C00769C2 & 0x20) != 0 )
    {
      v12 = *((_QWORD *)v9 + 4);
      v13 = (unsigned int)((int)(*((_DWORD *)v9 + 10) << 28) >> 28);
      if ( (int)v13 >= 1 )
      {
        v13 = (unsigned int)(v13 - 1);
        if ( !(_DWORD)v13 )
        {
LABEL_22:
          LODWORD(v48) = *((_DWORD *)v9 + 10);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            v13,
            &EndGpuVirtualAddressRangeMapping,
            (unsigned int)v48,
            this,
            v12,
            *((_QWORD *)v9 + 6),
            *((_QWORD *)v9 + 9),
            *((_QWORD *)v9 + 10),
            *((_QWORD *)v9 + 8),
            *((_QWORD *)v9 + 7),
            v48,
            *((_QWORD *)v9 + 11),
            *((_QWORD *)v9 + 12));
          goto LABEL_23;
        }
        v13 = (unsigned int)(v13 - 3);
        if ( !(_DWORD)v13 )
        {
          v12 = *(_QWORD *)(v12 + 64);
          goto LABEL_22;
        }
        if ( (_DWORD)v13 == 1 )
        {
          v12 = *(_QWORD *)(v12 + 24);
          goto LABEL_22;
        }
      }
      v12 = 0LL;
      goto LABEL_22;
    }
LABEL_23:
    v14 = v11 - 4;
    v15 = v11 - 6;
    v16 = *((_QWORD *)v11 - 3);
    if ( *(volatile signed __int32 **)(v16 + 24LL * ((*((_DWORD *)v11 + 10) >> 4) & 0x3F) + 112) == v11 - 4 )
      *(_QWORD *)(v16 + 24LL * ((*((_DWORD *)v11 + 10) >> 4) & 0x3F) + 112) = 0LL;
    v17 = *(_QWORD *)v14;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v14 + 8LL) != v14
      || (v18 = (volatile signed __int32 **)*((_QWORD *)v14 + 1), *v18 != v14) )
    {
      __fastfail(3u);
    }
    *v18 = (volatile signed __int32 *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = (int)(*((_DWORD *)v15 + 16) << 28) >> 28;
    *(_QWORD *)v14 = 0LL;
    v20 = (__int64 *)*((_QWORD *)v15 + 7);
    if ( v19 != 1 )
    {
      v21 = v19 - 4;
      if ( v21 )
      {
        if ( v21 != 1 )
          goto LABEL_42;
        v20 = (__int64 *)v20[3];
      }
      else
      {
        v20 = (__int64 *)v20[8];
      }
    }
    if ( v20 )
    {
      v22 = *(volatile signed __int32 **)v11;
      if ( *(_QWORD *)v11 )
      {
        if ( *((volatile signed __int32 **)v22 + 1) != v11
          || (v23 = (volatile signed __int32 **)*((_QWORD *)v11 + 1), *v23 != v11) )
        {
          __fastfail(3u);
        }
        *v23 = v22;
        *((_QWORD *)v22 + 1) = v23;
        *(_QWORD *)v11 = 0LL;
      }
      v24 = (__int64 *)(v15 + 10);
      if ( *((_QWORD *)v15 + 5) )
      {
        v25 = *(_QWORD *)*v20;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25 + 368, 0LL);
        v26 = (__int64 *)*v24;
        if ( *(__int64 **)(*v24 + 8) != v24 || (v27 = (__int64 **)*((_QWORD *)v15 + 6), *v27 != v24) )
          __fastfail(3u);
        *v27 = v26;
        v26[1] = (__int64)v27;
        *v24 = 0LL;
        ExReleasePushLockExclusiveEx(v25 + 368, 0LL);
        KeLeaveCriticalRegion();
      }
    }
LABEL_42:
    --*(_DWORD *)(v16 + 76);
    *(_QWORD *)v15 = 0LL;
    if ( _InterlockedExchangeAdd(v11 + 26, 0xFFFFFFFF) == 1 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)(v11 - 6));
    if ( (*(_BYTE *)(v16 + 72) & 0xF) == 3 && !*(_DWORD *)(v16 + 76) )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (CVirtualAddressAllocator *)this,
        (struct VIDMM_VAD *)v16);
    v28 = (volatile signed __int32 **)v50;
    if ( *(__int64 ***)v50 != &v49 )
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v50;
    *(_QWORD *)v11 = &v49;
    *v28 = v11;
    v50 = v11;
  }
  if ( v2 )
  {
    *((_QWORD *)v52 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v52, 0LL);
    KeLeaveCriticalRegion();
  }
  v29 = v49;
  if ( v49 != (__int64 *)&v49 )
  {
    while ( 1 )
    {
      v30 = v29 - 3;
      v31 = v29[5] & 0x1400;
      v32 = v29;
      if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
        break;
      if ( !v31 )
      {
        v33 = (v30[8] & 0x800) == 0;
LABEL_59:
        if ( v33 )
          goto LABEL_61;
      }
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        this[11],
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)v30,
        KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[11] + 8LL),
        0LL);
      *((_DWORD *)v30 + 16) &= 0xFFFFEBFF;
LABEL_61:
      v29 = (__int64 *)*v29;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 32, 0xFFFFFFFF) == 1 )
      {
        if ( v52 && *((struct _KTHREAD **)v52 + 1) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1453LL);
          DxgkLogInternalTriageEvent(v34, 262146LL);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v37 = *((_DWORD *)v52 + 6);
            if ( v37 != -1 && (byte_1C00769C1 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, v37);
          }
          ExAcquirePushLockExclusiveEx(v52, 0LL);
        }
        *((_QWORD *)v52 + 1) = KeGetCurrentThread();
        v38 = *v32;
        if ( *v32 )
        {
          if ( *(__int64 **)(v38 + 8) != v32 || (v39 = (__int64 **)v32[1], *v39 != v32) )
LABEL_87:
            __fastfail(3u);
          *v39 = (__int64 *)v38;
          *(_QWORD *)(v38 + 8) = v39;
          *v32 = 0LL;
        }
        v40 = v30[1];
        v41 = v30 + 1;
        if ( v40 )
        {
          if ( *(_QWORD **)(v40 + 8) != v41 )
            goto LABEL_87;
          v42 = (_QWORD *)v30[2];
          if ( (_QWORD *)*v42 != v41 )
            goto LABEL_87;
          *v42 = v40;
          *(_QWORD *)(v40 + 8) = v42;
          *v41 = 0LL;
        }
        v43 = *((_DWORD *)v30 + 16);
        if ( (v43 & 0x2000) == 0 )
        {
          v44 = v30 + 5;
          if ( v30[5] )
          {
            VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v43 << 28 >> 28, v30[7]);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
            v46 = (__int64 *)*v44;
            if ( *(__int64 **)(*v44 + 8) != v44 )
              goto LABEL_87;
            v47 = (__int64 **)v30[6];
            if ( *v47 != v44 )
              goto LABEL_87;
            *v47 = v46;
            v46[1] = (__int64)v47;
            *v44 = 0LL;
            ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        operator delete(v30);
        *((_QWORD *)v52 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v52, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v29 == (__int64 *)&v49 )
        return;
    }
    v33 = v31 == 0;
    goto LABEL_59;
  }
}
