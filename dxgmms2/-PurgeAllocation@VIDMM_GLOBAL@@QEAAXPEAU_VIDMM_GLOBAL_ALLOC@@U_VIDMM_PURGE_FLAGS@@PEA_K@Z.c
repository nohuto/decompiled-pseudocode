/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E6A38
 * Callers:
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B59CC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE9F4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2B54 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v5; // r14
  char v6; // bl
  char v9; // si

  result = *(_QWORD *)&g_IsInternalReleaseOrDbg;
  v5 = a4;
  v6 = a3;
  v9 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    result = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(result + 24) = a2;
  }
  if ( !*(_DWORD *)(a2 + 144) )
  {
    if ( *(_QWORD *)(a2 + 120) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(a1);
      if ( (v6 & 2) != 0 || (v6 & 4) != 0 || (LOBYTE(a4) = 0, (v6 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = v6 & 1;
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, _BYTE, _QWORD))(**(_QWORD **)(a2 + 120)
                                                                                            + 48LL))(
                 *(_QWORD *)(a2 + 120),
                 a2,
                 a3,
                 a4,
                 0,
                 0LL);
      v9 = 1;
    }
    if ( *(_QWORD *)(a2 + 240) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(a1);
      if ( v9 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(a1, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    }
    else if ( v9 != 1 )
    {
      return result;
    }
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
    result = *(_QWORD *)(a2 + 16);
    *v5 += result;
  }
  return result;
}
