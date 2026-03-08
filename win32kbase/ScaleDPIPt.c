/*
 * XREFs of ScaleDPIPt @ 0x1C003B898
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C003B720 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00C1BB0 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 */

__int64 __fastcall ScaleDPIPt(_DWORD *a1, _DWORD *a2, unsigned __int16 a3, unsigned __int16 a4, __int64 a5, __int64 a6)
{
  INT v8; // ebp
  INT v9; // esi
  __int64 result; // rax

  v8 = a3;
  v9 = a4;
  *a1 = a5 + EngMulDiv(*a2 - a6, a3, a4);
  result = (unsigned int)(HIDWORD(a5) + EngMulDiv(a2[1] - HIDWORD(a6), v8, v9));
  a1[1] = result;
  return result;
}
