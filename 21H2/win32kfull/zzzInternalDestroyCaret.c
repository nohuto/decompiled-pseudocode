/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C00C32D8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C00C32AC (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C00C6204 (xxxCreateCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[2] = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v1 + 344) )
  {
    result = FindTimer(*(_QWORD *)(v1 + 296), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v1 + 344) = 0LL;
  }
  v2 = v1 + 296;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_DWORD *)(v1 + 308) = 0;
  v3 = *(struct tagWND **)(v1 + 296);
  if ( v3 )
  {
    v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v7;
    v7[1] = v3;
    HMLockObject(v3);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, v3, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v5, v4, v6);
  }
  return result;
}
