/*
 * XREFs of ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C0023634
 * Callers:
 *     NtUserCreateEmptyCursorObject @ 0x1C00235F0 (NtUserCreateEmptyCursorObject.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _CreateEmptyCursorObject(char a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi

  LOBYTE(a3) = 3;
  v4 = 0LL;
  v5 = HMAllocObject(gptiCurrent, 0LL, a3);
  if ( v5 )
  {
    if ( !a1 || PsGetCurrentProcess() != gpepCSRSS )
      v4 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 53);
    *(_QWORD *)(v5 + 24) = v4;
    v4 = *(_QWORD *)v5;
    *(_DWORD *)(v5 + 80) = 2048;
    *(_QWORD *)(v5 + 48) = v5;
  }
  return v4;
}
