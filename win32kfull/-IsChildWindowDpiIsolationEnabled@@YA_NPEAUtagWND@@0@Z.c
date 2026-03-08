/*
 * XREFs of ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00DE2B0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

char __fastcall IsChildWindowDpiIsolationEnabled(struct tagWND *a1, struct tagWND *a2)
{
  char v4; // bl
  __int64 v5; // rcx
  int v7; // eax

  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8720LL)
    && a2
    && *(_DWORD *)(*((_QWORD *)a2 + 5) + 292LL) == 1 )
  {
    if ( a1 )
      v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    else
      LOBYTE(v7) = W32GetCurrentThreadDpiAwarenessContext(v5);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) & 0xF) == 2 || (v7 & 0xF) != 2 )
      return 1;
  }
  return v4;
}
