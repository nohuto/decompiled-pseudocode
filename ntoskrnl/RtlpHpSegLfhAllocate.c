/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x1402E2850
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1402E28AC (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(int a1, int a2, char a3, int a4, __int64 a5)
{
  return RtlpHpSegSubAllocate(a1, a2, a3 & 1 | 0x8000000u, a4, a5);
}
