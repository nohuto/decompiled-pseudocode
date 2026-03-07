__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  struct _WmiMonitorBasicDisplayParams *v3; // rdx

  EdidBaseBlockPtr = (unsigned __int8 *)DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(this);
  return EDIDV1_ObtainMonitorBasicDisplayParams(EdidBaseBlockPtr, v3);
}
