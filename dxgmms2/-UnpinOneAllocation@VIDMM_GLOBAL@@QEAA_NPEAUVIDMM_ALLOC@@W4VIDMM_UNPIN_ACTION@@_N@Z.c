/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B2444
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B2428 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1C00F15F4 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE9F4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C002C9FC (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B2528 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  ADAPTER_RENDER *v14; // rcx
  _BYTE v15[104]; // [rsp+20h] [rbp-88h] BYREF

  v5 = (int)a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 536LL) & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    return 0;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, a4 != 1);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v12 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v12 + 24) = a2;
        *(_QWORD *)(v12 + 32) = v5;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) + 12LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *(_QWORD *)(a2 + 16);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          if ( (*(_DWORD *)(v10 + 4) & 0x20) != 0 )
          {
            v13 = *(_QWORD *)(v10 + 16);
            v14 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
            *(_QWORD *)v15 = v13;
            ADAPTER_RENDER::DdiStopCapture(v14, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v15);
          }
        }
      }
      if ( !(*(_BYTE *)(a2 + 25) & 1 | *(_DWORD *)(a2 + 152)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a1 + 8LL) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (__int64 **)a2, a3);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 164));
          memset(&v15[16], 0, 0x58uLL);
          *(_DWORD *)&v15[16] = 205;
          *(_QWORD *)&v15[32] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)&v15[16], 1);
        }
      }
    }
    return v8;
  }
}
