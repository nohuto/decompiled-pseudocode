/*
 * XREFs of ValidateHwnd @ 0x1C0038600
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0122370 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0122C00 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0038620 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL, 0LL);
}
