/*
 * XREFs of ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1C01CFD60
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C00112B4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ @ 0x1C01CFD80 (-_GetEdidBaseBlockPtr@EdidMonitorDescriptor@DxgMonitor@@AEBAPEBEXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetNumericManufacturerIds(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  const unsigned __int8 *EdidBaseBlockPtr; // rax
  unsigned __int16 *v4; // rdx
  unsigned __int16 *v5; // r8

  EdidBaseBlockPtr = DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_FillProductIdManufacturerName(EdidBaseBlockPtr, v4, v5);
}
