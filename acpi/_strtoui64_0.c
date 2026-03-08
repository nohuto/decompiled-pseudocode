/*
 * XREFs of _strtoui64_0 @ 0x1C0001A79
 * Callers:
 *     DebugExpr @ 0x1C004D830 (DebugExpr.c)
 *     DebugInPort @ 0x1C004DA10 (DebugInPort.c)
 *     DebugOutPort @ 0x1C004DCE0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     IsNumber @ 0x1C004E1D4 (IsNumber.c)
 *     ConvertToInteger @ 0x1C0059A54 (ConvertToInteger.c)
 *     DbgParseOneArg @ 0x1C0059EC4 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
