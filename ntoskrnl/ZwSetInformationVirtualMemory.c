/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1404158B0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402B2C90 (CmSiPrefetchVirtualMemoryRange.c)
 *     RtlDisableXfgOnTarget @ 0x1405AF938 (RtlDisableXfgOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
