/*
 * XREFs of InitQEntryLookaside @ 0x1C031FF8C
 * Callers:
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00C6824 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitQEntryLookaside(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  __int64 PagedLookasideList; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         a1,
                         0xA0uLL,
                         0x616C7355u,
                         0x6D717355u,
                         0x10u);
  *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 16872) = PagedLookasideList;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 16872) )
    return 3221225495LL;
  v11 = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
          v10,
          0x1F0uLL,
          0x616C7355u,
          0x75717355u,
          0x10u);
  *(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 16864) = v11;
  return *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 16864) == 0LL ? 0xC0000017 : 0;
}
