/*
 * XREFs of ?bAllowDDICall@PDEVOBJ@@QEAAHXZ @ 0x1C002B304
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C002B5B0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bAllowDDICall(PDEVOBJ *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x8000) == 0 )
    return 1;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 48LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v1 = 0;
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( v3 == CurrentProcessWin32Process && !KeAreApcsDisabled() )
    return 1;
  return v1;
}
