__int64 __fastcall GetImageName(_FX_DRIVER_GLOBALS *DriverGlobals, _UNICODE_STRING *ImageName)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  signed int _a1; // eax
  unsigned int v6; // edi
  wchar_t *Buffer; // r14
  signed int v8; // eax
  unsigned __int16 v9; // di
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  _UNICODE_STRING imagePath; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-20h] BYREF
  __m128i v16; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+18h]
  unsigned __int16 size; // [rsp+80h] [rbp+20h] BYREF

  *ImageName = 0LL;
  m_DriverObject = DriverGlobals->DriverObject.m_DriverObject;
  imagePath = 0LL;
  size = 0;
  Name = 0LL;
  _a1 = IoQueryFullDriverPath(m_DriverObject, &imagePath);
  v6 = _a1;
  if ( _a1 >= 0 )
  {
    Buffer = imagePath.Buffer;
    GetNameFromPath(&imagePath, &Name);
    if ( Name.Length )
    {
      v8 = RtlUShortAdd(Name.Length, 2u, &size);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = size;
        Tag = DriverGlobals->Tag;
        v11 = retaddr;
        v16.m128i_i64[0] = 0LL;
        v16.m128i_i64[1] = 256LL;
        if ( !DriverGlobals->FxPoolTrackingOn )
          v11 = 0LL;
        v12 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v16, size, Tag, v11);
        ImageName->Buffer = (wchar_t *)v12;
        if ( v12 )
        {
          ImageName->Length = 0;
          ImageName->MaximumLength = v9;
          v6 = RtlUnicodeStringCopy(ImageName, &Name);
        }
        else
        {
          v6 = -1073741670;
          WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, 0x17u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000009A);
        }
      }
      else
      {
        WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, 0x16u, WPP_FxTelemetryKm_cpp_Traceguids, v8);
      }
    }
    else
    {
      v6 = -1073741811;
      WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, 0x15u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000000D);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, 0x14u, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
  }
  return v6;
}
