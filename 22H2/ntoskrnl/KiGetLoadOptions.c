/*
 * XREFs of KiGetLoadOptions @ 0x140A7434C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A1B354 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
