/*
 * XREFs of IsNumber @ 0x1C0066824
 * Callers:
 *     DebugExpr @ 0x1C0065E5C (DebugExpr.c)
 *     DebugInPort @ 0x1C0066040 (DebugInPort.c)
 *     DebugNotify @ 0x1C0066140 (DebugNotify.c)
 *     DebugOutPort @ 0x1C0066310 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0066440 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0031D29 (_strtoui64_0.c)
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
