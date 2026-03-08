/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x1C00D83A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 UserIsCurrentThreadGdiScaled()
{
  int CurrentThreadDpiAwarenessContext; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = 1;
  if ( (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*((_QWORD *)PtiCurrentShared(v2, v1, v3, v4) + 57)
     || (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v7, v6, v8, v9) + 57) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (CurrentThreadDpiAwarenessContext & 0x40000000) == 0)
    && (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*((_QWORD *)PtiCurrentShared(v11, v10, v12, v13) + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v15, v14, v16, v17) + 57) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x40) == 0) )
  {
    return 0;
  }
  return v5;
}
