/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C0113BB0
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C0113930 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C0113A44 (xxxCreateCaret.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     zzzInternalHideCaret @ 0x1C00674A0 (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  v5[2] = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v1 + 344) )
  {
    result = FindTimer(*(_QWORD *)(v1 + 296), 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v1 + 344) = 0LL;
  }
  v2 = v1 + 296;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_DWORD *)(v1 + 308) = 0;
  v3 = *(struct tagWND **)(v1 + 296);
  if ( v3 )
  {
    v5[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v5;
    v5[1] = v3;
    HMLockObject(v3);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, v3, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v4);
  }
  return result;
}
