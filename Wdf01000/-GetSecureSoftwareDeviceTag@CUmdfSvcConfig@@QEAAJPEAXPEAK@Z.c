__int64 __fastcall CUmdfSvcConfig::GetSecureSoftwareDeviceTag(
        CUmdfSvcConfig *this,
        void *DeviceKey,
        unsigned int *SoftwareDeviceTag,
        unsigned int a4)
{
  int v5; // ebx
  unsigned int swDeviceTag; // [rsp+30h] [rbp-29h] BYREF
  void *hWudfKey; // [rsp+38h] [rbp-21h] BYREF
  _UNICODE_STRING wudfKeyName; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING softwareDeviceTagKeyName; // [rsp+50h] [rbp-9h] BYREF
  wchar_t wudfKeyName_buffer[8]; // [rsp+60h] [rbp+7h] BYREF
  wchar_t softwareDeviceTagKeyName_buffer[20]; // [rsp+70h] [rbp+17h] BYREF

  swDeviceTag = 0;
  hWudfKey = 0LL;
  wudfKeyName.Buffer = wudfKeyName_buffer;
  wcscpy(wudfKeyName_buffer, L"WUDF");
  softwareDeviceTagKeyName.Buffer = softwareDeviceTagKeyName_buffer;
  *(_QWORD *)&wudfKeyName.Length = 655368LL;
  wcscpy(softwareDeviceTagKeyName_buffer, L"SoftwareDeviceTag");
  *(_QWORD *)&softwareDeviceTagKeyName.Length = 2359330LL;
  v5 = CUmdfSvcConfig::OpenKeyHelper(this, DeviceKey, &wudfKeyName, a4, 0, &hWudfKey);
  if ( v5 >= 0 )
  {
    v5 = CUmdfSvcConfig::_QueryULong(hWudfKey, &softwareDeviceTagKeyName, &swDeviceTag);
    if ( v5 >= 0 )
      *SoftwareDeviceTag = swDeviceTag;
  }
  if ( hWudfKey )
    ZwClose(hWudfKey);
  return (unsigned int)v5;
}
