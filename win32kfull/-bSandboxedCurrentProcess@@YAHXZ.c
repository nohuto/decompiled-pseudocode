/*
 * XREFs of ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C029C37C
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C029C0E4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CFA80 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSandboxedCurrentProcess(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
    return *(_DWORD *)(CurrentProcessWin32Process + 264) | *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u;
  else
    return 0LL;
}
