/*
 * XREFs of ACPICMSleepButtonStart @ 0x1C0082310
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C0082104 (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMSleepButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, -2147483646);
}
