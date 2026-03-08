/*
 * XREFs of NtIsOneCoreTransformMode @ 0x1C00ADFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtIsOneCoreTransformMode(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  return (*(_DWORD *)(CurrentProcessWin32Process + 812) >> 23) & 1;
}
