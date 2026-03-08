/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0096BE0
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0096528 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00A2F30 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012020 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0086210 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     FastZeroMemory @ 0x1C0096CC0 (FastZeroMemory.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00B3A24 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v1; // rsi
  __int64 v2; // rdx
  unsigned __int8 v3; // r14
  char *v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  int v8; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v10; // rcx
  size_t v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  int v15; // eax
  struct _EPROCESS *CurrentProcess; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF
  void *v19; // [rsp+78h] [rbp+10h] BYREF
  void *v20; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0LL;
  v1 = 0LL;
  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 4);
  v6 = *((_QWORD *)this + 5);
  v20 = 0LL;
  v7 = v6 - (_QWORD)v4;
  v18 = 0;
  v8 = **(_DWORD **)(v2 + 32);
  if ( (unsigned int)(v8 - 3) <= 3 && (unsigned int)(v8 - 5) > 1 )
  {
    v15 = VidMmRecycleHeapMapSection(*(PVOID *)(v2 + 56), (__int64)v4, v7, v8 == 4, &v19, &v20, 0, &v18);
    if ( v15 < 0 )
    {
      WdLogSingleEntry5(
        3LL,
        v7,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 10),
        v15,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
      return;
    }
    v4 = (char *)v19;
    v1 = v20;
    v3 = v18;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 20) == 3 && *((_BYTE *)i + 84) )
    {
      v10 = *((_QWORD *)i + 4);
      v11 = *((_QWORD *)i + 5) - v10;
      v12 = &v4[v10 - *((_QWORD *)this + 4)];
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v13 + 208) += v11;
      FastZeroMemory(v12, v11);
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v14 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  if ( (unsigned int)(*(_DWORD *)v14 - 3) <= 3 && (unsigned int)(*(_DWORD *)v14 - 5) > 1 )
  {
    if ( v3 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    if ( v7 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v14, 0) )
    {
      if ( CurrentProcess )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(CurrentProcess, v1);
      }
      else
      {
        MmUnmapViewInSystemSpace(v1);
      }
    }
    else
    {
      VidMmUnmapViewAsync(CurrentProcess, *(void **)(*((_QWORD *)this + 10) + 56LL), v1);
    }
  }
}
