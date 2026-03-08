/*
 * XREFs of ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0096A78 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0098D20 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C00B3284 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00F5B60 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  _QWORD *v3; // rcx
  __int64 v5; // rcx
  struct VIDMM_RECYCLE_RANGE *v6; // rdi
  struct VIDMM_RECYCLE_RANGE *v7; // rsi
  char v8; // r15
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    v14 = *v3 + 144LL * v3[1];
    *(_DWORD *)v14 = 3;
    *(_QWORD *)(v14 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v14 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)this + 17) + 8LL);
    v15 = *((_QWORD *)this + 17);
    if ( *(_QWORD *)(v15 + 8) == *(_QWORD *)(v15 + 48) )
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_BYTE *)(*((_QWORD *)this + 17) + 16LL) = 1;
    }
  }
  v5 = *((_QWORD *)a2 + 17);
  if ( !v5 || *(_QWORD *)(v5 + 64) == *(_QWORD *)(v5 + 72) )
  {
    v6 = a2;
    v7 = a2;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      while ( v8 )
      {
        if ( v9 )
        {
          if ( v6 != v7 )
            VIDMM_RECYCLE_BLOCK::CombineFreedRanges((VIDMM_RECYCLE_BLOCK *)v5, v6, v7, a2);
          return;
        }
LABEL_16:
        v12 = *((_QWORD *)v7 + 15);
        v13 = 0LL;
        v5 = *((_QWORD *)v7 + 9) + 72LL;
        if ( v12 != v5 )
          v13 = v12 - 120;
        if ( !v13 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = 0LL;
          goto LABEL_21;
        }
        if ( *(_DWORD *)(v13 + 64) )
        {
          if ( !g_IsInternalReleaseOrDbg )
            goto LABEL_21;
          v19 = WdLogNewEntry5_WdTrace(v5);
          *(_QWORD *)(v19 + 24) = v13;
          v5 = *(int *)(v13 + 64);
LABEL_49:
          *(_QWORD *)(v19 + 32) = v5;
          goto LABEL_21;
        }
        if ( *(_QWORD *)(v13 + 160) )
          goto LABEL_46;
        v5 = *(_QWORD *)(v13 + 136);
        if ( !v5 || *(_QWORD *)(v5 + 64) == *(_QWORD *)(v5 + 72) )
        {
          v7 = (struct VIDMM_RECYCLE_RANGE *)v13;
        }
        else
        {
          if ( *(_QWORD *)(v13 + 160) )
          {
LABEL_46:
            if ( !g_IsInternalReleaseOrDbg )
              goto LABEL_21;
            v19 = WdLogNewEntry5_WdTrace(v5);
            *(_QWORD *)(v19 + 24) = v13;
            v5 = *(_QWORD *)(v13 + 160);
            goto LABEL_49;
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
            v18[3] = v13;
            v18[4] = *(_QWORD *)(v13 + 136);
            v18[5] = *(_QWORD *)(*(_QWORD *)(v13 + 136) + 64LL);
            v5 = *(_QWORD *)(v13 + 136);
            v18[6] = *(_QWORD *)(v5 + 72);
          }
LABEL_21:
          v9 = 1;
        }
      }
      v10 = *((_QWORD *)v6 + 16);
      v11 = 0LL;
      v5 = *((_QWORD *)v6 + 9) + 72LL;
      if ( v10 != v5 )
        v11 = v10 - 120;
      if ( !v11 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = 0LL;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v11 + 64) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v17 = WdLogNewEntry5_WdTrace(v5);
          *(_QWORD *)(v17 + 24) = v11;
          v5 = *(int *)(v11 + 64);
          goto LABEL_38;
        }
      }
      else
      {
        if ( !*(_QWORD *)(v11 + 160) )
        {
          v5 = *(_QWORD *)(v11 + 136);
          if ( !v5 || *(_QWORD *)(v5 + 64) == *(_QWORD *)(v5 + 72) )
          {
            v6 = (struct VIDMM_RECYCLE_RANGE *)v11;
            goto LABEL_15;
          }
          if ( !*(_QWORD *)(v11 + 160) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
              v16[3] = v11;
              v16[4] = *(_QWORD *)(v11 + 136);
              v16[5] = *(_QWORD *)(*(_QWORD *)(v11 + 136) + 64LL);
              v5 = *(_QWORD *)(v11 + 136);
              v16[6] = *(_QWORD *)(v5 + 72);
            }
            goto LABEL_14;
          }
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          v17 = WdLogNewEntry5_WdTrace(v5);
          *(_QWORD *)(v17 + 24) = v11;
          v5 = *(_QWORD *)(v11 + 160);
LABEL_38:
          *(_QWORD *)(v17 + 32) = v5;
        }
      }
LABEL_14:
      v8 = 1;
LABEL_15:
      if ( !v9 )
        goto LABEL_16;
    }
  }
}
