__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetAnalogVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorAnalogVideoInputParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorAnalogVideoInputParams(EdidBaseBlockPtr, v3);
}
