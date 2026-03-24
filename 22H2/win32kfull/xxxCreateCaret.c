/*
 * XREFs of xxxCreateCaret @ 0x1C0113A44
 * Callers:
 *     NtUserCreateCaret @ 0x1C0113960 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     zzzInternalDestroyCaret @ 0x1C0113BB0 (zzzInternalDestroyCaret.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HSURF a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int ThreadId; // eax
  int v11; // ecx
  int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v15[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 296) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v14[1] = a1;
  v14[0] = v8 + 296;
  HMAssignmentLock(v14);
  v9 = *(_DWORD *)(v8 + 304) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 308) = 1;
  *(_DWORD *)(v8 + 304) = v9 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 336) = a2;
  *(_DWORD *)(v8 + 352) = ThreadId;
  v11 = 1;
  v12 = 1;
  if ( a4 )
    v12 = a4;
  if ( a3 )
    v11 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (char *)v15);
    v12 = v15[2];
    v11 = v15[1];
  }
  *(_QWORD *)(v8 + 344) = 0LL;
  *(_DWORD *)(v8 + 324) = v12;
  *(_DWORD *)(v8 + 328) = v11;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, (struct tagWND *)a1, -8, 0, 0);
  return 1LL;
}
