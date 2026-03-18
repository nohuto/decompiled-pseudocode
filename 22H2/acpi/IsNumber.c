/*
 * XREFs of IsNumber @ 0x1C004E1F4
 * Callers:
 *     DebugExpr @ 0x1C004D850 (DebugExpr.c)
 *     DebugInPort @ 0x1C004DA30 (DebugInPort.c)
 *     DebugNotify @ 0x1C004DB30 (DebugNotify.c)
 *     DebugOutPort @ 0x1C004DD00 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C004DE30 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0001A79 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
