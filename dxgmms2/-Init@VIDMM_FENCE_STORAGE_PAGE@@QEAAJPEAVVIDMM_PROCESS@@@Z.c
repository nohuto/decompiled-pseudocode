/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00A8414
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0011860 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00121E4 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019A78 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0019AAC (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0095578 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C00AADC0 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C00B30D8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00EF3A4 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  __int64 v4; // rbx
  int v5; // r14d
  void *CurrentPartitionHandle; // rcx
  _QWORD *v7; // rsi
  int v8; // r14d
  struct _MDL *Mdl; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  VIDMM_PROCESS *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v31[80]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0LL;
  v33 = 0LL;
  v32 = 4096LL;
  v5 = 0x8000000;
  CurrentPartitionHandle = 0LL;
  if ( *((PVOID *)this + 21) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v5 = 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  }
  v7 = (_QWORD *)((char *)this + 104);
  v8 = MmCreateSection((char *)this + 104, 0LL, 0LL, &v32, 4, v5, CurrentPartitionHandle, 0LL);
  if ( v8 < 0 )
  {
    *v7 = 0LL;
    goto LABEL_14;
  }
  v30 = 4096LL;
  v8 = MmMapViewInSystemSpaceEx(*v7, (char *)this + 112, &v30, &v33, 0LL);
  if ( v8 >= 0 )
  {
    Mdl = VidMmiAllocateMdl(*((_QWORD *)this + 14), 0x1000uLL);
    *((_QWORD *)this + 15) = Mdl;
    if ( !Mdl )
    {
      _InterlockedAdd((volatile signed __int32 *)&gVidMmLowResourceAccumulated, 1u);
      WdLogSingleEntry1(6LL, 302LL);
      DxgkLogInternalTriageEvent(v12, 262145LL);
      v8 = -1073741801;
      goto LABEL_14;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    *((_BYTE *)this + 136) = 1;
    v10 = *((_QWORD *)this + 21);
    if ( *(_BYTE *)(v10 + 64) )
    {
      if ( !a2 )
      {
        v15 = *(VIDMM_PROCESS **)v10;
LABEL_24:
        *((_QWORD *)this + 4) = v15;
        v8 = VIDMM_PROCESS::MapHostAddressesToGuest(
               v15,
               *((struct _MDL **)this + 15),
               0x1000uLL,
               (void **)this + 19,
               (unsigned __int64 *)this + 18);
        if ( v8 >= 0 )
        {
          v21 = *((_QWORD *)this + 21);
          if ( !*(_BYTE *)(v21 + 64) )
          {
            if ( *(_QWORD *)v21 )
            {
              WdLogSingleEntry1(1LL, 379LL);
              DxgkLogInternalTriageEvent(v22, 262146LL);
            }
            *(_BYTE *)(*((_QWORD *)this + 21) + 65LL) = 1;
            *((_BYTE *)this + 160) = 1;
            v23 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
            v24 = *(_DWORD *)(v23 + 424);
            if ( (v24 & 0x100) != 0 )
              v25 = *(_QWORD *)(v23 + 608);
            else
              v25 = v23 & -(__int64)((v24 & 0x80u) != 0);
            v26 = *(_QWORD *)(v25 + 64);
            if ( v26 )
              v4 = *(_QWORD *)(v26 + 8);
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
              (struct _KTHREAD **)(v4 + 64));
            v27 = (_QWORD *)((char *)this + 16);
            v28 = (__int64 *)(v4 + 48);
            v29 = *v28;
            if ( *(__int64 **)(*v28 + 8) != v28 )
              __fastfail(3u);
            *v27 = v29;
            v27[1] = v28;
            *(_QWORD *)(v29 + 8) = v27;
            *v28 = (__int64)v27;
            DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v31);
          }
          return 0LL;
        }
        WdLogSingleEntry1(1LL, 367LL);
        DxgkLogInternalTriageEvent(v20, 0x40000LL);
        goto LABEL_14;
      }
    }
    else if ( !a2 )
    {
      if ( *((_QWORD *)this + 19) )
      {
        WdLogSingleEntry1(1LL, 392LL);
        DxgkLogInternalTriageEvent(v13, 262146LL);
      }
      if ( *((_QWORD *)this + 18) )
      {
        WdLogSingleEntry1(1LL, 393LL);
        DxgkLogInternalTriageEvent(v14, 262146LL);
      }
      return 0LL;
    }
    v16 = *((_QWORD *)a2 + 4);
    v17 = *(_DWORD *)(v16 + 424);
    if ( (v17 & 0x100) != 0 )
      v18 = *(_QWORD *)(v16 + 608);
    else
      v18 = v16 & -(__int64)((v17 & 0x80u) != 0);
    v19 = *(_QWORD *)(v18 + 64);
    if ( v19 )
      v15 = *(VIDMM_PROCESS **)(v19 + 8);
    else
      v15 = 0LL;
    goto LABEL_24;
  }
LABEL_14:
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v8;
}
