/*
 * XREFs of DuplicateCompositionInputSinkHelper @ 0x18001A00C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DuplicateCompositionInputSinkHelper(HANDLE hSourceHandle, LPHANDLE lpTargetHandle)
{
  unsigned int v4; // ebp
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax

  v4 = -1073741816;
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( DuplicateHandle(v6, hSourceHandle, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
    return 0;
  return v4;
}
