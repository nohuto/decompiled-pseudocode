/*
 * XREFs of IsPciBusExtension @ 0x1C008A768
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C008A678 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 760));
}
