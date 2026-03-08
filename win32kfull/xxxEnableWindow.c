/*
 * XREFs of xxxEnableWindow @ 0x1C000AE3C
 * Callers:
 *     NtUserEnableWindow @ 0x1C000AD60 (NtUserEnableWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00D4CD0 (xxxEnableScrollBar.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000AEB8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B4350 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx

  v4 = 0;
  if ( (unsigned int)IsNonImmersiveBand() )
    goto LABEL_2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v7)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
LABEL_2:
    LOBYTE(v4) = a2 != 0;
    return xxxEnableWindowWorker(a1, v4);
  }
  else
  {
    UserSetLastError(5LL);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
