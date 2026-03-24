/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403FCE20
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140361F7C (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406FCA38 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
