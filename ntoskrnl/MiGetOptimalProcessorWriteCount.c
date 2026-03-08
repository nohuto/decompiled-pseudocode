/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x140303004
 * Callers:
 *     MiInitializeZeroEngines @ 0x140729A34 (MiInitializeZeroEngines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1, int a2)
{
  return *(unsigned int *)(*(_QWORD *)(376LL * a1 + qword_140C65720 + 368) + 96LL * a2 + 108);
}
