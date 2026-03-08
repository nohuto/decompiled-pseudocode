/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF0D0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C002C900 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C00AADC0 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00EF538 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v3; // edx
  VIDMM_GLOBAL *v4; // rbx
  int v5; // r15d
  char *v6; // r12
  _DWORD *v7; // rcx
  unsigned __int64 *v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  PVOID *v11; // r14
  void *CurrentPartitionHandle; // rax
  int v13; // eax
  PVOID v14; // rcx
  NTSTATUS inserted; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  NTSTATUS v20; // eax
  PMDL PagesForMdl; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  ADAPTER_RENDER *v28; // rcx
  _QWORD v29[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_DWORD *)a2 + 18);
  v4 = this;
  v5 = 0;
  if ( (v3 & 0x2000) == 0 )
  {
    v6 = (char *)a2 + 536;
    if ( (v3 & 0x40000) == 0 && (**(_DWORD **)v6 & 0x20008) == 0 )
    {
LABEL_18:
      v17 = *((_DWORD *)a2 + 17);
      *((_DWORD *)a2 + 19) |= 0x20u;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(1616LL * (v17 & 0x3F) + *((_QWORD *)v4 + 5028) + 1584),
        *((_QWORD *)a2 + 1));
      v18 = *((_DWORD *)a2 + 18);
      if ( (v18 & 0x400000) != 0 )
      {
        v27 = *((_QWORD *)a2 + 49);
        if ( v27 )
        {
          if ( (v18 & 0x800000) == 0 )
          {
            v29[0] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
            v28 = (ADAPTER_RENDER *)*((_QWORD *)v4 + 2);
            v29[1] = v27;
            v5 = ADAPTER_RENDER::DdiSetAllocationBackingStore(
                   v28,
                   (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v29);
          }
        }
      }
LABEL_19:
      *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (*((_DWORD *)a2 + 18) >> 14)) & 8;
      return (unsigned int)v5;
    }
    v7 = *(_DWORD **)v6;
    v31 = 0LL;
    if ( (*v7 & 0x400000) != 0 )
    {
      v11 = (PVOID *)((char *)a2 + 384);
      ObfReferenceObject(*((PVOID *)a2 + 48));
      v8 = (unsigned __int64 *)((char *)a2 + 8);
    }
    else
    {
      v8 = (unsigned __int64 *)((char *)a2 + 8);
      v9 = *((_QWORD *)a2 + 1);
      v31 = v9;
      v10 = ~(*v7 << 28) & 0x40000000 | 0x8040000u;
      if ( (v3 & 0x100) != 0 )
      {
        LODWORD(v10) = ~(*v7 << 28) & 0x40000000 | 0x80C0000;
        v31 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v11 = (PVOID *)((char *)a2 + 384);
      CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
      v13 = MmCreateSection((char *)a2 + 384, 0LL, 0LL, &v31, 4, v10, CurrentPartitionHandle, 0LL);
      v5 = v13;
      if ( v13 < 0 )
      {
        _InterlockedIncrement(&dword_1C00768EC);
        WdLogSingleEntry4(6LL, a2, v31, v10, v13);
        DxgkLogInternalTriageEvent(v23, 262145LL);
        v4 = this;
      }
      if ( (**(_DWORD **)v6 & 0x20000000) != 0 && *v11 )
      {
        ObfReferenceObject(*v11);
        v14 = *v11;
        Handle = 0LL;
        inserted = ObInsertObject(v14, 0LL, 0, 0, 0LL, &Handle);
        v5 = inserted;
        if ( inserted < 0 )
        {
          WdLogSingleEntry2(1LL, a2, inserted);
          v25 = 0x40000LL;
LABEL_34:
          DxgkLogInternalTriageEvent(v24, v25);
          goto LABEL_35;
        }
        ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
      }
      else if ( v5 < 0 )
      {
        goto LABEL_35;
      }
    }
    v16 = *((_DWORD *)a2 + 18);
    if ( (v16 & 0x4000) != 0 )
    {
      v26 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
              *((VIDMM_PROCESS **)a2 + 68),
              *v11,
              *v8,
              0,
              4u,
              (void **)a2 + 70,
              (unsigned __int64 *)a2 + 71,
              (void **)a2 + 69);
      v5 = v26;
      if ( v26 < 0 )
      {
        _InterlockedIncrement(&dword_1C00768F0);
        WdLogSingleEntry4(6LL, a2, *v11, v26, 29642LL);
LABEL_33:
        v25 = 262145LL;
        goto LABEL_34;
      }
      if ( (*((_DWORD *)a2 + 18) & 0x400000) == 0 )
        goto LABEL_17;
    }
    else if ( (**(_DWORD **)v6 & 0x20008) == 0 && (v16 & 0x400000) == 0 )
    {
LABEL_17:
      if ( v5 >= 0 )
        goto LABEL_18;
LABEL_35:
      if ( *v11 )
        ObfDereferenceObject(*v11);
      goto LABEL_19;
    }
    v20 = MmMapViewInSystemSpace(*v11, (PVOID *)a2 + 49, v8);
    v5 = v20;
    if ( v20 >= 0 )
    {
      *((_DWORD *)a2 + 18) |= 0x1000000u;
      goto LABEL_18;
    }
    _InterlockedIncrement(&dword_1C00768F0);
    WdLogSingleEntry3(6LL, a2, *v11, v20);
    goto LABEL_33;
  }
  if ( *((_QWORD *)a2 + 69)
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        gs_PhysicalAddressZero,
                        (PHYSICAL_ADDRESS)-1LL,
                        gs_PhysicalAddressZero,
                        *((_QWORD *)a2 + 1),
                        (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 67) & 4) != 0)),
                        4u),
        (*((_QWORD *)a2 + 69) = PagesForMdl) != 0LL) )
  {
    *((_DWORD *)a2 + 19) |= 0x20u;
    v6 = (char *)a2 + 536;
    goto LABEL_18;
  }
  WdLogSingleEntry1(1LL, 29505LL);
  DxgkLogInternalTriageEvent(v22, 0x40000LL);
  return 3221225495LL;
}
