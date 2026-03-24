/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0080DE4
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002A440 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00803C0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0103A10 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  CCursorSizes *v2; // rdi
  struct tagCURSOR *v3; // rbp
  int v4; // r14d
  CPushLock *v5; // rbx
  int v6; // edi
  __int64 v7; // r8
  int v8; // eax
  struct tagCURSOR *v9; // rcx
  signed int v10; // eax
  struct tagCURSOR *result; // rax

  if ( !a1 )
    return a1;
  v2 = gpCursorSizes;
  v3 = 0LL;
  v4 = 0x7FFFFFFF;
  v5 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  v6 = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v5);
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 )
    return a1;
  do
  {
    v8 = *(_DWORD *)(v7 + 76);
    v9 = (struct tagCURSOR *)v7;
    v7 = *(_QWORD *)(v7 + 40);
    v10 = abs32(v8 - v6);
    if ( v10 >= v4 )
    {
      v9 = v3;
      v10 = v4;
    }
    v3 = v9;
    v4 = v10;
  }
  while ( v7 );
  result = v9;
  if ( !v9 )
    return a1;
  return result;
}
