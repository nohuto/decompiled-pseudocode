/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C007383C
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0074D40 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00F4E24 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  CCursorSizes *v2; // rdi
  struct tagCURSOR *v3; // rbp
  int v4; // r14d
  CPushLock *v5; // rbx
  int v6; // edi
  __int64 v7; // r9
  signed int v8; // r8d
  int v9; // eax
  struct tagCURSOR *v10; // rcx
  signed int v11; // eax
  struct tagCURSOR *result; // rax

  if ( !a1 )
    return a1;
  v2 = gpCursorSizes;
  v3 = 0LL;
  v4 = 0x7FFFFFFF;
  v5 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v6 = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v5);
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 )
    return a1;
  do
  {
    v8 = v4;
    v9 = *(_DWORD *)(v7 + 76) - v6;
    v10 = (struct tagCURSOR *)v7;
    v7 = *(_QWORD *)(v7 + 40);
    v11 = abs32(v9);
    if ( v11 < v4 )
      v4 = v11;
    if ( v11 >= v8 )
      v10 = v3;
    v3 = v10;
  }
  while ( v7 );
  result = v10;
  if ( !v10 )
    return a1;
  return result;
}
