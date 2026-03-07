int __fastcall PiRegStateOpenClassKey(
        const _GUID *DeviceClassGuid,
        unsigned int CreateIfNotPresent,
        unsigned int Disposition,
        unsigned int *ClassKeyHandle,
        void **DeviceClassGuid_0)
{
  int result; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  void *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  int v13; // edi
  unsigned int createDisposition; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v15; // [rsp+74h] [rbp-5Dh]
  void *classBranchKey; // [rsp+78h] [rbp-59h] BYREF
  void *classKey[2]; // [rsp+80h] [rbp-51h] BYREF
  wchar_t classGuidString[40]; // [rsp+90h] [rbp-41h] BYREF

  v15 = Disposition;
  classBranchKey = 0LL;
  classKey[0] = 0LL;
  *DeviceClassGuid_0 = 0LL;
  createDisposition = 0;
  if ( ClassKeyHandle )
    *ClassKeyHandle = 0;
  result = CmRegUtilOpenExistingWstrKey(
             0LL,
             (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
             0x20019u,
             &classBranchKey);
  if ( result >= 0 )
  {
    _snwprintf(
      classGuidString,
      0x27uLL,
      L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
      DeviceClassGuid->Data1,
      DeviceClassGuid->Data2,
      DeviceClassGuid->Data3,
      DeviceClassGuid->Data4[0],
      DeviceClassGuid->Data4[1],
      DeviceClassGuid->Data4[2],
      DeviceClassGuid->Data4[3],
      DeviceClassGuid->Data4[4],
      DeviceClassGuid->Data4[5],
      DeviceClassGuid->Data4[6],
      DeviceClassGuid->Data4[7]);
    v10 = classBranchKey;
    classGuidString[38] = 0;
    if ( v15 )
    {
      v11 = CmRegUtilCreateWstrKey(classBranchKey, classGuidString, v8, v9, 0LL, &createDisposition, classKey);
      v12 = createDisposition;
    }
    else
    {
      v11 = CmRegUtilOpenExistingWstrKey(classBranchKey, classGuidString, 0xF003Fu, classKey);
      v12 = 2;
    }
    v13 = v11;
    ZwClose(v10);
    if ( v13 >= 0 )
    {
      *DeviceClassGuid_0 = classKey[0];
      if ( ClassKeyHandle )
        *ClassKeyHandle = v12;
    }
    return v13;
  }
  return result;
}
