/*
 * XREFs of xxxCreateCaret @ 0x1C000F3B4
 * Callers:
 *     NtUserCreateCaret @ 0x1C000F2D0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int ThreadId; // eax
  int v11; // ecx
  int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) != v8 || (unsigned int)IsWindowBeingDestroyed() )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 304) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v14[1] = a1;
  v14[0] = v8 + 304;
  HMAssignmentLock(v14, 0LL);
  v9 = *(_DWORD *)(v8 + 312) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 316) = 1;
  *(_DWORD *)(v8 + 312) = v9 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 344) = a2;
  *(_DWORD *)(v8 + 360) = ThreadId;
  v11 = 1;
  v12 = 1;
  if ( a4 )
    v12 = a4;
  if ( a3 )
    v11 = a3;
  if ( a2 > 1 )
  {
    GreExtGetObjectW(a2);
    v12 = DWORD2(v15);
    v11 = DWORD1(v15);
  }
  *(_QWORD *)(v8 + 352) = 0LL;
  *(_DWORD *)(v8 + 332) = v12;
  *(_DWORD *)(v8 + 336) = v11;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, 0);
  return 1LL;
}
