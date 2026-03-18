/*
 * XREFs of KiGetLoadOptions @ 0x140B9693C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
