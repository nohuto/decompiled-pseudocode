/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14041DC40
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140207E54 (CmSiPrefetchVirtualMemoryRange.c)
 *     RtlDisableXfgOnTarget @ 0x1405B1DE8 (RtlDisableXfgOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
