/*
 * XREFs of HalpBlkIdleMonitorMWait @ 0x140B11090
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B13530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpBlkIdleMonitorMWait(const void *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  _mm_monitor(a1, a2, a3);
  result = a3;
  _enable();
  _mm_mwait(a2, a3);
  _disable();
  return result;
}
