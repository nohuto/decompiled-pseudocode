/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14041EC80
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x14020B5BC (CmSiPrefetchVirtualMemoryRange.c)
 *     RtlDisableXfgOnTarget @ 0x1405EEA98 (RtlDisableXfgOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
