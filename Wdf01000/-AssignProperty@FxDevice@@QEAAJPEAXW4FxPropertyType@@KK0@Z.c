__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        void *PropertyData_0)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rcx
  LCID v8; // r8d
  DEVPROPTYPE v9; // r9d
  const DEVPROPKEY *v10; // r10
  ULONG v11; // r11d
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v13; // r9
  NTSTATUS v14; // edi
  unsigned int v15; // r8d

  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v13 = 21;
    v14 = -1073741436;
    v15 = 18;
LABEL_5:
    WPP_IFR_SF_qd(this->m_Globals, 2u, v15, v13, WPP_FxDeviceKm_cpp_Traceguids, ObjectHandleUnchecked, v14);
    return (unsigned int)v14;
  }
  v14 = IoSetDevicePropertyData(SafePhysicalDevice, v10, v8, v11, v9, PropertyBuffer, PropertyData_0);
  if ( v14 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v13 = 22;
    v15 = 12;
    goto LABEL_5;
  }
  return (unsigned int)v14;
}
