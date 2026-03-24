/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0075A94
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0074A44 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00158AC (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0062738 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0075C14 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0075C58 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C1304 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rdi
  void *v7; // rsi
  unsigned __int64 v9; // r15
  _QWORD **v10; // rcx
  int v11; // r10d
  char v12; // bp
  struct VIDMM_MDL_RANGE *v13; // r12
  struct VIDMM_MDL_RANGE *v14; // r13
  _QWORD *i; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  enum _LOCK_OPERATION v18; // r8d
  void *v19; // rbx
  __int64 v20; // rdx
  void *v21; // rdi
  int v22; // ecx
  int v23; // esi
  __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v35; // rcx
  enum _LOCK_OPERATION v37; // [rsp+90h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v6 = a6;
  v7 = a5;
  v9 = a6 - a5;
  v10 = (_QWORD **)((char *)this + 8);
  v11 = -1;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  for ( i = *v10; i != v10 && v11 < 0; i = (_QWORD *)*i )
  {
    if ( *(i - 1) > (unsigned __int64)a5 )
    {
      if ( *(i - 2) < (unsigned __int64)a6 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v14 = (struct VIDMM_MDL_RANGE *)(i - 3);
      }
    }
    else
    {
      v11 = -1;
      v13 = (struct VIDMM_MDL_RANGE *)(i - 3);
    }
  }
  v16 = operator new[](0x30uLL, 0x32316956u, PagedPool);
  v19 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = v7;
    v16[2] = v6;
    v16[5] = this;
    v16[3] = 0LL;
    v16[4] = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C0050744);
    v28 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v28 + 24) = 6147LL;
    WdLogEvent5_WdLowResource(v28);
    return 3221225495LL;
  }
  v20 = *(_QWORD *)this;
  v21 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  LOBYTE(v37) = 0;
  v22 = **(_DWORD **)(v20 + 32);
  if ( (unsigned int)(v22 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
  {
    v29 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v20 + 56),
            (unsigned __int64)v7,
            v9,
            v22 == 4,
            (void **)&a6,
            (void **)&a5,
            0,
            (unsigned __int8 *)&v37);
    v30 = v29;
    if ( v29 < 0 )
    {
      operator delete(v19);
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31);
      v33[3] = v9;
      v33[4] = v7;
      v33[5] = *(_QWORD *)this;
      v33[6] = v30;
      v33[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v33);
      return (unsigned int)v30;
    }
    v7 = a6;
    v21 = a5;
    v12 = v37;
  }
  v23 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v19, v7, v18, v38, a2);
  v25 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(*v25 - 3) <= 3 )
  {
    v26 = (unsigned int)(*v25 - 5);
    if ( (unsigned int)v26 > 1 )
    {
      if ( v12 )
        CurrentProcess = 0LL;
      else
        CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v26, v25, v24);
      if ( v9 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
      {
        if ( v35 )
          MmUnmapViewOfSection(v35, v21);
        else
          MmUnmapViewInSystemSpace(v21);
      }
      else
      {
        VidMmUnmapViewAsync(v35, *(PVOID *)(*(_QWORD *)this + 56LL), v21);
      }
    }
  }
  if ( v23 < 0 )
    operator delete(v19);
  else
    VIDMM_MDL_RANGE::InsertBetween((VIDMM_MDL_RANGE *)v19, v13, v14);
  return (unsigned int)v23;
}
