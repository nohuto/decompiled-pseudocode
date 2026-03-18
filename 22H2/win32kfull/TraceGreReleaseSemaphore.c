/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C013E084
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00932EC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1)
{
  return EtwTraceGreLockReleaseSemaphore(a1);
}
