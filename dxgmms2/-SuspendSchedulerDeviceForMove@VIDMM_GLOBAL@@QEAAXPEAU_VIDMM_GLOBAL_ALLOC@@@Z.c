/*
 * XREFs of ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8028
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00E77D0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00F9B1C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FDFA0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A90C4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 **v3; // rcx
  _QWORD **v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  _QWORD **v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 *v10; // rsi
  __int64 v11; // rax

  WdLogSingleEntry1(4LL, a2);
  v4 = (_QWORD **)((char *)a2 + 272);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    v7 = (_QWORD **)(v6 - 2);
    v8 = *v7;
    while ( v8 != v7 )
    {
      v9 = *(v8 - 4);
      v8 = (_QWORD *)*v8;
      if ( (*(_DWORD *)(v9 + 60) & 7) == 0 )
      {
        v10 = (__int64 *)(v9 + 304);
        if ( !*(_QWORD *)(v9 + 304) )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v3) + 24) = v9;
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v9);
          v11 = *(_QWORD *)v9 + 44712LL;
          v3 = *(__int64 ***)(*(_QWORD *)v9 + 44720LL);
          if ( *v3 != (__int64 *)v11 )
            __fastfail(3u);
          *v10 = v11;
          *(_QWORD *)(v9 + 312) = v3;
          *v3 = v10;
          *(_QWORD *)(v11 + 8) = v10;
        }
      }
    }
  }
}
