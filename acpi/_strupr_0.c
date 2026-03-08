/*
 * XREFs of _strupr_0 @ 0x1C0001A8B
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C004B2F4 (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C004D830 (DebugExpr.c)
 *     DebugNotify @ 0x1C004DB10 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
