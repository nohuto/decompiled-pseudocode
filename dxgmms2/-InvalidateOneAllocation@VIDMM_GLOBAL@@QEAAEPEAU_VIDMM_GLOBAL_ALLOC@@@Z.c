/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086508
 * Callers:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00864F0 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE9F4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086358 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087B28 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v6; // eax
  bool v7; // r8
  signed __int32 v8[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v9[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 81) == 1 )
  {
    WdLogSingleEntry1(4LL, a2);
  }
  else
  {
    DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
    *((_BYTE *)a2 + 81) = 1;
    _InterlockedOr(v8, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
    if ( (**((_DWORD **)a2 + 67) & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, a2);
      memset(v9, 0, 0x58uLL);
      v6 = *((_DWORD *)a2 + 17) & 0x3F;
      LODWORD(v9[0]) = 103;
      HIDWORD(v9[0]) = v6;
      v9[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v9, v7);
    }
  }
  return 0;
}
