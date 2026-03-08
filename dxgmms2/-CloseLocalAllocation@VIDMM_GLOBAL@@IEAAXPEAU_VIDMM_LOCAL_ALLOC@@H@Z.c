/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00E0FA0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00B0BA4 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  struct _VIDMM_LOCAL_ALLOC **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8

  v4 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *((unsigned int *)a2 + 9);
  if ( !a3 )
  {
    *(_DWORD *)(v4 + 76) |= 1u;
    ++*((_DWORD *)a2 + 18);
    ++*(_DWORD *)(v4 + 404);
  }
  if ( (*((_DWORD *)a2 + 9))-- == 1 )
  {
    if ( *((int *)a2 + 19) > 0 )
    {
      v8 = -*((_DWORD *)a2 + 19);
      if ( (int)(v8 + _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 360), v8)) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 76) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3 != 0);
    --*(_DWORD *)(v4 + 288);
    v9 = *((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v9 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
      || (v10 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8), *v10 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v10 = (struct _VIDMM_LOCAL_ALLOC *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( *(_DWORD *)(v4 + 112) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                      + 48LL)
          + 296LL * (*(_DWORD *)(v4 + 68) & 0x3F);
      v12 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 120) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v11 + 240) -= v12;
      else
        *(_QWORD *)(v11 + 232) -= v12;
    }
    v13 = *(_QWORD *)a2;
    if ( (**(_DWORD **)(*(_QWORD *)a2 + 536LL) & 0x20000000) != 0
      && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v13 + 88)
      && (*(_DWORD *)(v13 + 76) & 4) == 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 26LL, a2, 0LL, 0LL);
    }
    if ( a3 )
    {
      *((_BYTE *)a2 + 32) |= 4u;
      operator delete(a2);
    }
  }
}
