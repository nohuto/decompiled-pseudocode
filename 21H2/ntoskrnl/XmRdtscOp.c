/*
 * XREFs of XmRdtscOp @ 0x1405369A0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall XmRdtscOp(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(a1 + 24) = PerformanceCounter.LowPart;
  result = HIDWORD(PerformanceCounter.QuadPart);
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
