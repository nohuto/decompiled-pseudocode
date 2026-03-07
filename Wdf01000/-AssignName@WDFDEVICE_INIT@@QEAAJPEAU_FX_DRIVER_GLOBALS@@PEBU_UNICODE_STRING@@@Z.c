int __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name)
{
  FxString *DeviceName; // rax
  FxString *v7; // rax
  FxPoolTypeOrPoolFlags v9; // [rsp+40h] [rbp-18h] BYREF

  DeviceName = this->DeviceName;
  if ( DeviceName )
    return FxDuplicateUnicodeString(DeviceName->m_Globals, Name, &DeviceName->m_UnicodeString);
  *(_QWORD *)&v9.UsePoolType = 0LL;
  v9.u.PoolFlags = 64LL;
  v7 = (FxString *)FxObjectHandleAllocCommon(FxDriverGlobals, &v9, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v7 )
  {
    FxString::FxString(v7, FxDriverGlobals);
    this->DeviceName = DeviceName;
    if ( DeviceName )
    {
      this->Characteristics &= ~0x80u;
      return FxDuplicateUnicodeString(DeviceName->m_Globals, Name, &DeviceName->m_UnicodeString);
    }
  }
  else
  {
    this->DeviceName = 0LL;
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, 0xC000009A);
  return -1073741670;
}
