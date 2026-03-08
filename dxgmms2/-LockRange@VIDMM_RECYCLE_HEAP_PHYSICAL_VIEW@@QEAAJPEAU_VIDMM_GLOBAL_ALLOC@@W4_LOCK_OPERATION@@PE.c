/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0097D10
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0096430 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012020 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x1C0017C20 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0086210 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0097F90 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00B3A24 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rbp
  void *v7; // rbx
  struct _EPROCESS *CurrentProcess; // r12
  int v10; // r8d
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v11; // rax
  char *i; // rdi
  __int64 *v13; // rax
  enum _LOCK_OPERATION v14; // r8d
  VIDMM_MDL_RANGE *v15; // rsi
  void *v16; // rbp
  __int64 v17; // rdx
  __int64 *v18; // r14
  char v19; // r15
  int *v20; // rax
  int v21; // ecx
  int v22; // ebx
  int v23; // eax
  VIDMM_RECYCLE_HEAP_MGR *v24; // rcx
  __int64 **v25; // rdi
  __int64 v26; // rax
  int v28; // eax
  __int64 v29; // rbp
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v31; // rcx
  char *v32; // [rsp+50h] [rbp-58h]
  unsigned __int64 v33; // [rsp+B0h] [rbp+8h]
  enum _LOCK_OPERATION v35; // [rsp+C0h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = a6;
  v7 = a5;
  CurrentProcess = 0LL;
  v32 = 0LL;
  v33 = a6 - a5;
  v10 = -1;
  v11 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  for ( i = 0LL;
        v11 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
        v11 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v11 )
  {
    if ( v10 >= 0 )
      break;
    if ( *((_QWORD *)v11 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v11 - 2) < (unsigned __int64)a6 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        v32 = (char *)v11 - 24;
      }
    }
    else
    {
      v10 = -1;
      i = (char *)v11 - 24;
    }
  }
  v13 = (__int64 *)operator new(48LL, 0x32316956u, 258LL);
  v15 = (VIDMM_MDL_RANGE *)v13;
  if ( v13 )
  {
    v13[2] = (__int64)v6;
    v16 = 0LL;
    *v13 = 0LL;
    v13[1] = (__int64)v7;
    v13[5] = (__int64)this;
    v13[4] = 0LL;
    v13[3] = 0LL;
    v17 = *(_QWORD *)this;
    v18 = v13 + 3;
    v19 = 0;
    a6 = 0LL;
    v20 = *(int **)(v17 + 32);
    a5 = 0LL;
    LOBYTE(v35) = 0;
    v21 = *v20;
    if ( (unsigned int)(*v20 - 3) <= 3 && (unsigned int)(v21 - 5) > 1 )
    {
      v28 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v17 + 56),
              (__int64)v7,
              v33,
              v21 == 4,
              (void **)&a6,
              (void **)&a5,
              0,
              (unsigned __int8 *)&v35);
      v29 = v28;
      if ( v28 < 0 )
      {
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v15);
        WdLogSingleEntry5(
          3LL,
          v33,
          v7,
          *(_QWORD *)this,
          v29,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL));
        return (unsigned int)v29;
      }
      v7 = a6;
      v16 = a5;
      v19 = v35;
    }
    v22 = VIDMM_MDL_RANGE::Lock(v15, v7, v14, v36, a2);
    v23 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v23 - 3) <= 3 )
    {
      v24 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v23 - 5);
      if ( (unsigned int)v24 > 1 )
      {
        if ( !v19 )
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
        if ( v33 > VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v24, 0) )
        {
          VidMmUnmapViewAsync(CurrentProcess, *(void **)(*(_QWORD *)this + 56LL), v16);
        }
        else if ( CurrentProcess )
        {
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(CurrentProcess, v16);
        }
        else
        {
          MmUnmapViewInSystemSpace(v16);
        }
      }
    }
    if ( v22 < 0 )
    {
      VIDMM_MDL_RANGE::`scalar deleting destructor'(v15);
    }
    else
    {
      if ( i )
        v25 = (__int64 **)(i + 24);
      else
        v25 = (__int64 **)(*((_QWORD *)v15 + 5) + 8LL);
      if ( v32 )
        v26 = (__int64)(v32 + 24);
      else
        v26 = *((_QWORD *)v15 + 5) + 8LL;
      *v25 = v18;
      *(_QWORD *)(v26 + 8) = v18;
      *((_QWORD *)v15 + 4) = v25;
      *v18 = v26;
    }
    return (unsigned int)v22;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0076864);
    WdLogSingleEntry1(6LL, 6171LL);
    DxgkLogInternalTriageEvent(v31, 262145LL);
    return 3221225495LL;
  }
}
