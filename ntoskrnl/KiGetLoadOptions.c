/*
 * XREFs of KiGetLoadOptions @ 0x140B9272C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
