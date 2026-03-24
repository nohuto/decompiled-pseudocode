/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403FD7A0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1403628AC (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x140712408 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
