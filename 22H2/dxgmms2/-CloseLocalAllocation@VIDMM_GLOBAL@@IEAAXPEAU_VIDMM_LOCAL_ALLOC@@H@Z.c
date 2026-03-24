/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00ACF64
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00765B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0088EDC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v4; // rdi
  int v8; // ecx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  struct _VIDMM_LOCAL_ALLOC **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  v4 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *((unsigned int *)a2 + 9);
  if ( !a3 )
  {
    *(_DWORD *)(v4 + 84) |= 1u;
    ++*((_DWORD *)a2 + 18);
    ++*(_DWORD *)(v4 + 372);
  }
  if ( (*((_DWORD *)a2 + 9))-- == 1 )
  {
    v8 = *((_DWORD *)a2 + 19);
    if ( v8 )
    {
      v9 = (unsigned int)-v8;
      if ( (int)v9 + _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 336), v9) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2);
          v10[5] = 0LL;
          v10[6] = 0LL;
          v10[7] = 0LL;
          v10[3] = 270LL;
          v10[4] = 9LL;
          WdLogEvent5_WdCriticalError(v10);
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 84) & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3 != 0);
    --*(_DWORD *)(v4 + 304);
    v11 = *((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
      || (v12 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8), *v12 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v12 = (struct _VIDMM_LOCAL_ALLOC *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( *(_DWORD *)(v4 + 120) )
    {
      v12 = *(struct _VIDMM_LOCAL_ALLOC ***)(*((_QWORD *)a2 + 1) + 16LL);
      v13 = *((_QWORD *)v12[*(unsigned int *)(*((_QWORD *)this + 3) + 232LL)] + 6)
          + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F);
      v14 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 128) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v13 + 240) -= v14;
      else
        *(_QWORD *)(v13 + 232) -= v14;
    }
    v15 = *(_QWORD *)a2;
    if ( (**(_DWORD **)(*(_QWORD *)a2 + 496LL) & 0x20000000) != 0
      && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v15 + 96)
      && (*(_DWORD *)(v15 + 84) & 4) == 0 )
    {
      v16 = WdLogNewEntry5_WdCriticalError(v12, v15);
      *(_QWORD *)(v16 + 24) = 270LL;
      *(_QWORD *)(v16 + 32) = 26LL;
      *(_QWORD *)(v16 + 40) = a2;
      *(_OWORD *)(v16 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( a3 )
    {
      *((_BYTE *)a2 + 32) |= 4u;
      operator delete(a2);
    }
  }
}
