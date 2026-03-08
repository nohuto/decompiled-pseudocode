/*
 * XREFs of NtEnableOneCoreTransformMode @ 0x1C0169910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnableOneCoreTransformMode(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x800000u;
  return 1LL;
}
