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
