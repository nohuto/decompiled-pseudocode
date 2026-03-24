/*
 * XREFs of ValidateHwnd @ 0x1C0039A70
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0122640 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0122ED0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0039A90 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL, 0LL);
}
