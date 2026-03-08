/*
 * XREFs of NtGdiSetUMPDSandboxState @ 0x1C02CFDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetUMPDSandboxState(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
    *(_DWORD *)(CurrentProcessWin32Process + 264) = v1;
  return 0LL;
}
