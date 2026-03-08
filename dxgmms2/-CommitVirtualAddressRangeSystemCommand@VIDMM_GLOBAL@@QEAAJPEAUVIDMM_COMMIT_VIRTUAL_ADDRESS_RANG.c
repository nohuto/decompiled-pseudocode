/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00B1F9C (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 * Callees:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0001340 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // r14
  struct VIDMM_MAPPED_VA_RANGE *v11; // rdx
  int v12; // ecx
  __int64 **v13; // rcx
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rdx
  VIDMM_MAPPED_VA_RANGE *v18; // rcx
  __int64 v20; // rbp
  unsigned __int64 LogicalAddress; // rdi
  struct _MDL *FullMDL; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 + 56LL;
  if ( *(_QWORD *)a2 != -56LL && *(struct _KTHREAD **)(*(_QWORD *)a2 + 64LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(v26, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *(_DWORD *)(v6 + 24);
      if ( v25 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventBlockThread, v8, v25);
    }
    ExAcquirePushLockExclusiveEx(v6, 0LL);
  }
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  v9 = *((_QWORD *)a2 + 4);
  v10 = (__int64 *)((char *)a2 + 8);
  if ( !v9 || **(_QWORD **)(v9 + 16) && *(_QWORD *)*v10 )
  {
    v11 = (struct VIDMM_MAPPED_VA_RANGE *)*v10;
    v12 = (int)(*(_DWORD *)(*v10 + 64) << 28) >> 28;
    if ( v12 == 1 )
    {
      v13 = (__int64 **)*((_QWORD *)v11 + 7);
      if ( (*((_DWORD *)v13 + 7) & 3) == 2 )
      {
        v20 = **v13;
        v29 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v20 + 120) + 80LL) & 0x1001) != 0 )
        {
          LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v20 + 528));
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v20, 0LL);
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v29, FullMDL, LogicalAddress);
          v23 = 0;
        }
        else
        {
          v28 = *(_QWORD *)(v20 + 128) >> 12;
          LODWORD(v29) = *(_DWORD *)(v20 + 16) >> 12;
          *((_QWORD *)&v29 + 1) = v28;
          DWORD1(v29) = 1;
          v23 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v20 + 120));
        }
        v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(_QWORD *)a2,
                *v10,
                *(_DWORD *)(v20 + 68) & 0x3F,
                v23,
                *(_QWORD *)(*v10 + 72),
                (struct _DXGK_ADL *)&v29,
                1,
                a3,
                0LL);
      }
      else
      {
        v14 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                v11,
                (struct VIDMM_ALLOC **)a3,
                1);
      }
      goto LABEL_11;
    }
    v24 = v12 - 2;
    if ( !v24 )
      goto LABEL_26;
    v27 = v24 - 4;
    if ( !v27 )
    {
      v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              (__int64)v11,
              0,
              -2,
              0LL,
              (struct _DXGK_ADL *)&xmmword_1C004F0A8,
              1,
              a3,
              0LL);
      goto LABEL_11;
    }
    if ( v27 == 1 )
    {
LABEL_26:
      v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              (__int64)v11,
              0,
              0,
              0LL,
              (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)((char *)a2 + 16),
              1,
              a3,
              0LL);
LABEL_11:
      v5 = v14;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  if ( v5 == -1073741267 && *((_BYTE *)a2 + 40) )
    goto LABEL_47;
  v15 = (__int64 *)*((_QWORD *)a2 + 4);
  if ( v15 )
  {
    v16 = *v15;
    if ( *v15 )
    {
      if ( *(__int64 **)(v16 + 8) != v15 || (v17 = (__int64 **)v15[1], *v17 != v15) )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      v15[1] = 0LL;
    }
    v18 = (VIDMM_MAPPED_VA_RANGE *)*v10;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v10 + 128), 0xFFFFFFFF) == 1 && v18 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(v18);
    operator delete(*((void **)a2 + 4));
    *((_QWORD *)a2 + 4) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *v10 = 0LL;
  }
  if ( v5 == -1073741267 )
  {
LABEL_47:
    if ( !*((_BYTE *)a2 + 40) )
      v5 = -1073741823;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
