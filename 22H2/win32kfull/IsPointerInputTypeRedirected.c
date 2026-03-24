/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01F1E30
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1C01F1D94 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1)
{
  int v1; // edi
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return IsPointerInputRedirected(CurrentProcessWin32Process, *(_QWORD *)(grpdeskRitInput + 8LL), v1, 0LL);
}
