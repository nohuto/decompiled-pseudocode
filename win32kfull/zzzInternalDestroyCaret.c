/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00E8694
 * Callers:
 *     zzzDestroyCaret @ 0x1C0005EAC (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C000F3B4 (xxxCreateCaret.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     zzzInternalHideCaret @ 0x1C00E877C (zzzInternalHideCaret.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  void **v2; // rdi
  struct tagWND *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v8[2] = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  v2 = (void **)(v1 + 304);
  if ( *(_QWORD *)(v1 + 352) )
  {
    result = FindTimer(*v2, (void *)0xFFFF, 2u, 1, 0LL);
    *(_QWORD *)(v1 + 352) = 0LL;
  }
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 316) = 0;
  v3 = (struct tagWND *)*v2;
  if ( *v2 )
  {
    v4 = *v2;
    v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v8;
    v8[1] = v3;
    HMLockObject(v4);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, v3, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v6, v5, v7);
  }
  return result;
}
