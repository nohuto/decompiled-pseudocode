/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF0D0
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF02C (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C002F01C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x1C002F2DC (McTemplateK0puu_EtwWriteTransfer.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094C0C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A1AB0 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF5B8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00B0BA4 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E36E0 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E3790 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 v7; // rbx
  int v8; // eax
  int v9; // ecx
  bool v10; // r12
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // r13d
  bool v24; // r15
  enum _D3DDDI_RECLAIM_RESULT *v25; // r12
  int v26; // r15d
  unsigned __int64 v27; // r12
  VIDMM_GLOBAL *v28; // rdi
  enum _D3DDDI_RECLAIM_RESULT *v31; // rcx
  enum _D3DDDI_RECLAIM_RESULT *v32; // rbx
  VIDMM_GLOBAL *v33; // rsi
  enum _D3DDDI_RECLAIM_RESULT *v34; // rdi
  enum _D3DDDI_RECLAIM_RESULT *v35; // r12
  struct VIDMM_PAGING_QUEUE *v36; // rbx
  enum _D3DDDI_RECLAIM_RESULT *v37; // r15
  int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // r12
  PRKPROCESS *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r15
  VIDMM_GLOBAL *v49; // rsi
  PRKPROCESS *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v55; // eax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // [rsp+20h] [rbp-E0h]
  __int64 v62; // [rsp+28h] [rbp-D8h]
  __int64 v63; // [rsp+30h] [rbp-D0h]
  __int64 v64; // [rsp+38h] [rbp-C8h]
  char v65; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v66[7]; // [rsp+51h] [rbp-AFh] BYREF
  VIDMM_GLOBAL *v67; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+68h] [rbp-98h] BYREF
  enum _D3DDDI_RECLAIM_RESULT *v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h]
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  _QWORD v75[12]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE v77; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE v78; // [rsp+160h] [rbp+60h] BYREF

  v73 = (unsigned __int64)a4;
  v68 = (unsigned __int64)a3;
  v72 = a2;
  v67 = this;
  v70 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
  v7 = **a3;
  v8 = *(_DWORD *)(v7 + 76);
  if ( (v8 & 0x40) != 0 && !a5 )
  {
    WdLogSingleEntry1(1LL, a3);
    DxgkLogInternalTriageEvent(v39, 0x40000LL);
    VidSchMarkDeviceAsError(a3[1][4]);
    return 3221225485LL;
  }
  v9 = *((_DWORD *)this + 1764);
  v10 = (v8 & 0x40) != 0 && (v9 & 0x10000) != 0;
  if ( (v9 & 8) != 0 )
  {
    v11 = 1;
    v71 = 1LL;
  }
  else
  {
    v11 = 0;
    v71 = 0LL;
  }
  LODWORD(v69) = v11;
  if ( v10 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( v11 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v65 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39976, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *((_DWORD *)this + 10000);
      if ( v38 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventBlockThread, v13, v38);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39976, 0LL);
  }
  *((_QWORD *)this + 4998) = KeGetCurrentThread();
  v14 = (_QWORD *)(v7 + 424);
  v15 = *(_QWORD *)(v7 + 424);
  if ( v15 )
  {
    if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = *(_QWORD **)(v7 + 432), (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    *v14 = 0LL;
  }
  if ( *(_QWORD *)(v7 + 440) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    v65 = 1;
  }
  *((_QWORD *)this + 4998) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39976, 0LL);
  KeLeaveCriticalRegion();
  v17 = v7 + 296;
  v74 = v7 + 296;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v7 + 320) == KeGetCurrentThread() )
  {
    if ( *(int *)(v7 + 328) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      v64 = 0LL;
      v63 = 0LL;
      v62 = 0LL;
      v61 = 491LL;
      DxgkLogInternalTriageEvent(v40, 262146LL);
    }
    ++*(_DWORD *)(v7 + 328);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v41 = *(_DWORD *)(v7 + 332);
        if ( v41 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v18, v41);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 312));
      ExAcquirePushLockExclusiveEx(v7 + 304, 0LL);
    }
    if ( *(_QWORD *)(v7 + 320) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      v64 = 0LL;
      v63 = 0LL;
      v62 = 0LL;
      v61 = 515LL;
      DxgkLogInternalTriageEvent(v42, 262146LL);
    }
    if ( *(_DWORD *)(v7 + 328) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      v64 = 0LL;
      v63 = 0LL;
      v62 = 0LL;
      v61 = 516LL;
      DxgkLogInternalTriageEvent(v43, 262146LL);
    }
    *(_QWORD *)(v7 + 320) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 328) = 1;
  }
  v20 = a3[12];
  v21 = *((unsigned __int16 *)v20 + 2);
  *((_WORD *)v20 + 2) = 0;
  v22 = (__int16)v21;
  if ( (_WORD)v21 )
  {
    v23 = 0;
    v24 = (*(_DWORD *)(v7 + 76) & 0x20) != 0;
    if ( v65 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v21 + 32) + 456LL), -*(_QWORD *)(v7 + 8));
    }
    if ( v24 )
    {
LABEL_27:
      *(_DWORD *)(v7 + 76) &= ~0x40u;
      v25 = v70;
      if ( !v70 )
      {
        v26 = v69;
        *(_BYTE *)(v7 + 82) = 0;
LABEL_34:
        v27 = v68;
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        {
          LOBYTE(v62) = v22;
          LOBYTE(v61) = *(_BYTE *)(**(_QWORD **)v68 + 456LL);
          McTemplateK0puu_EtwWriteTransfer(**(_QWORD **)v68, &EventReclaimAllocation, v18, v68, v61, v62);
        }
        v68 = 0LL;
        if ( v26 || (_DWORD)v22 == 3 || (_DWORD)v22 == 2 && (*(_DWORD *)(v7 + 72) & 0x40) != 0 || !*(_DWORD *)(v7 + 112) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
            v58[4] = v71;
            v58[3] = v27;
            v58[5] = v22;
            v59 = (*(_DWORD *)(v7 + 72) >> 6) & 1;
            v58[7] = 0LL;
            v58[6] = v59;
          }
          v31 = (enum _D3DDDI_RECLAIM_RESULT *)(v7 + 272);
          v32 = *(enum _D3DDDI_RECLAIM_RESULT **)(v7 + 272);
          v70 = v31;
          v71 = (__int64)v32;
          if ( v32 != v31 )
          {
            v33 = v67;
            do
            {
              v34 = (enum _D3DDDI_RECLAIM_RESULT *)*((_QWORD *)v32 - 2);
              v35 = v32 - 4;
              if ( v34 != v32 - 4 )
              {
                v36 = v72;
                do
                {
                  v37 = v34 - 10;
                  if ( (*(v34 - 2) & 1) == 0 )
                  {
                    if ( ((*((_BYTE *)v37 + 25) & 1) != 0) | *((_DWORD *)v37 + 38) )
                    {
                      memset(v75, 0, 0x58uLL);
                      LODWORD(v75[0]) = 210;
                      v75[2] = v34 - 10;
                      v23 = VIDMM_GLOBAL::QueueDeferredCommand(v33, v36, (struct _VIDMM_DEFERRED_COMMAND *)v75, 0, &v68);
                      if ( (v37[7] & 0x20) != 0 )
                      {
                        *((_QWORD *)v37 + 35) = v68;
                        *((_QWORD *)v37 + 32) = v36;
                      }
                    }
                  }
                  v34 = *(enum _D3DDDI_RECLAIM_RESULT **)v34;
                }
                while ( v34 != v35 );
                v32 = (enum _D3DDDI_RECLAIM_RESULT *)v71;
                v31 = v70;
              }
              v32 = *(enum _D3DDDI_RECLAIM_RESULT **)v32;
              v71 = (__int64)v32;
            }
            while ( v32 != v31 );
          }
          v17 = v74;
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
          v56[3] = v27;
          v56[4] = 0LL;
          v56[5] = v22;
          v57 = (*(_DWORD *)(v7 + 72) >> 6) & 1;
          v56[7] = 1LL;
          v56[6] = v57;
        }
        v28 = v67;
        goto LABEL_45;
      }
      if ( (_DWORD)v22 == 1 )
      {
        *v70 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v22 == 3 )
          *v70 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v24
          && !*(_QWORD *)(v7 + 120)
          && *(_BYTE *)(v7 + 82)
          && !*(_BYTE *)(v7 + 83)
          && (*(_DWORD *)(v7 + 76) & 8) != 0 )
        {
          v26 = v69;
          if ( !(_DWORD)v69 )
          {
            v52 = *(_QWORD *)(v7 + 88);
            if ( v52 )
            {
              v21 = *(_QWORD *)(v52 + 8);
              if ( v21 )
              {
                memset(&v78, 0, sizeof(v78));
                KeStackAttachProcess(*(PRKPROCESS *)v21, &v78);
                v53 = *(_QWORD **)(v7 + 88);
                if ( (**(_DWORD **)(v7 + 536) & 0x20000000) != 0 )
                {
                  v69 = v53[2];
                  v70 = *(enum _D3DDDI_RECLAIM_RESULT **)(v7 + 8);
                  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                  LODWORD(v62) = 4;
                  LODWORD(v61) = 0x1000000;
                  v55 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, enum _D3DDDI_RECLAIM_RESULT **, __int64, __int64, __int64, __int64))VirtualMemoryInterface)(
                          -1LL,
                          &v69,
                          0LL,
                          &v70,
                          v61,
                          v62,
                          v63,
                          v64);
                }
                else
                {
                  v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v53[1] + 24LL) + 128LL))(
                          *(_QWORD *)(v53[1] + 24LL),
                          v53[3]);
                }
                v23 = v55;
                KeUnstackDetachProcess(&v78);
                if ( v23 < 0 )
                {
                  *(_BYTE *)(v7 + 82) = 0;
                  WdLogSingleEntry1(4LL, v23);
                  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
                  {
                    LODWORD(v63) = 0;
                    LODWORD(v62) = *(_QWORD *)(v7 + 8) >> 12;
                    LODWORD(v61) = 0;
                    McTemplateK0pqqt_EtwWriteTransfer(v21, &EventUnreset, v18, v7, v61, v62, v63);
                  }
                  v23 = 0;
                }
                else
                {
                  *v25 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v7 + 464) = 0LL;
                  WdLogSingleEntry1(4LL, v7);
                  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
                  {
                    LODWORD(v63) = 1;
                    LODWORD(v62) = *(_QWORD *)(v7 + 8) >> 12;
                    LODWORD(v61) = 0;
                    McTemplateK0pqqt_EtwWriteTransfer(v21, &EventUnreset, v18, v7, v61, v62, v63);
                  }
                }
                *(_DWORD *)(v7 + 76) &= ~8u;
              }
            }
            goto LABEL_34;
          }
LABEL_124:
          *v25 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_34;
        }
      }
      v26 = v69;
      if ( !(_DWORD)v69 )
        goto LABEL_34;
      goto LABEL_124;
    }
    if ( v10
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL) + 112LL) & 4) != 0
      || (v23 = VIDMM_GLOBAL::CommitGlobalBackingStore(v67, (struct _VIDMM_GLOBAL_ALLOC *)v7), v23 < 0) )
    {
      v28 = v67;
    }
    else
    {
      v45 = *(_QWORD **)(v7 + 272);
      if ( v45 == (_QWORD *)(v7 + 272) )
      {
LABEL_100:
        *(_BYTE *)(v7 + 82) = 0;
        goto LABEL_27;
      }
      while ( 1 )
      {
        v46 = (PRKPROCESS *)*(v45 - 6);
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v46, &ApcState);
        v66[0] = 1;
        v23 = VIDMM_GLOBAL::CommitLocalBackingStore(v67, (struct _VIDMM_LOCAL_ALLOC *)(v45 - 7), v66, 0LL);
        KeUnstackDetachProcess(&ApcState);
        if ( v23 < 0 )
          break;
        v45 = (_QWORD *)*v45;
        if ( v45 == (_QWORD *)(v7 + 272) )
          goto LABEL_100;
      }
      WdLogSingleEntry1(1LL, v45 - 7);
      DxgkLogInternalTriageEvent(v47, 0x40000LL);
      v48 = v45[1];
      if ( v48 != v7 + 272 )
      {
        v49 = v67;
        do
        {
          v50 = *(PRKPROCESS **)(v48 - 48);
          memset(&v77, 0, sizeof(v77));
          KeStackAttachProcess(*v50, &v77);
          VIDMM_GLOBAL::UncommitLocalBackingStore(v49, (struct _VIDMM_LOCAL_ALLOC *)(v48 - 56), 1);
          KeUnstackDetachProcess(&v77);
          v48 = *(_QWORD *)(v48 + 8);
        }
        while ( v48 != v7 + 272 );
        v17 = v7 + 296;
      }
      v28 = v67;
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v67, (struct _VIDMM_GLOBAL_ALLOC *)v7, 0);
    }
    v23 = 0;
    *(_WORD *)(*(_QWORD *)(v68 + 96) + 4LL) = 3;
    *v70 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C00768C4);
    WdLogSingleEntry1(6LL, v7);
    DxgkLogInternalTriageEvent(v51, 262145LL);
LABEL_45:
    if ( *(struct _KTHREAD **)(v17 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v17, 0LL, 0LL);
    if ( *(int *)(v17 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v60, 262146LL);
    }
    if ( (*(_DWORD *)(v17 + 32))-- == 1 )
    {
      *(_QWORD *)(v17 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v23 == 259 )
    {
      if ( v73 )
      {
        *(_QWORD *)v73 = v68;
      }
      else
      {
        v72 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v72 + 11);
        v73 = v68;
        VIDMM_GLOBAL::WaitForFences(v28, &v72, &v73, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v23;
  }
  WdLogSingleEntry1(1LL, a3);
  DxgkLogInternalTriageEvent(v44, 0x40000LL);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 296));
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
