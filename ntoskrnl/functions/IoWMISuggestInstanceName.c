NTSTATUS __stdcall IoWMISuggestInstanceName(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PUNICODE_STRING SymbolicLinkName,
        BOOLEAN CombineNames,
        PUNICODE_STRING SuggestedInstanceName)
{
  int DeviceProperty; // ebx
  NTSTATUS result; // eax
  unsigned __int16 v10; // cx
  void *Pool2; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // r14
  const WCHAR *v14; // r15
  ULONG v15; // r12d
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-20h] BYREF
  ULONG Length; // [rsp+34h] [rbp-1Ch] BYREF
  HANDLE DeviceInterfaceRegKey; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF

  DeviceInterfaceRegKey = 0LL;
  Length = 0;
  DeviceProperty = -1073741776;
  ValueName = 0LL;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v10 = 0;
  Pool2 = 0LL;
  BufferLength = 0;
  if ( PhysicalDeviceObject )
  {
    result = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    DeviceProperty = result;
    if ( result == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 1885957463LL);
      if ( !Pool2 )
        return -1073741670;
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyDeviceDescription,
                         BufferLength,
                         Pool2,
                         &BufferLength);
      if ( DeviceProperty < 0 )
        goto LABEL_35;
    }
    else if ( result < 0 )
    {
      return result;
    }
    v10 = BufferLength;
  }
  if ( !SymbolicLinkName )
  {
    if ( Pool2 )
    {
      SuggestedInstanceName->Buffer = (wchar_t *)Pool2;
      SuggestedInstanceName->Length = v10 - 2;
      SuggestedInstanceName->MaximumLength = v10;
    }
    else
    {
      SuggestedInstanceName->Buffer = 0LL;
      *(_DWORD *)&SuggestedInstanceName->Length = 0;
    }
    return DeviceProperty;
  }
  DeviceProperty = IoOpenDeviceInterfaceRegistryKey(SymbolicLinkName, 0xF003Fu, &DeviceInterfaceRegKey);
  if ( DeviceProperty >= 0 )
  {
    v12 = ZwQueryValueKey(DeviceInterfaceRegKey, &ValueName, KeyValueFullInformation, 0LL, 0, &Length);
    DeviceProperty = v12;
    if ( v12 == -2147483643 || v12 == -1073741789 )
    {
      v13 = ExAllocatePool2(256LL, Length, 1885957463LL);
      if ( v13 )
      {
        DeviceProperty = ZwQueryValueKey(
                           DeviceInterfaceRegKey,
                           &ValueName,
                           KeyValueFullInformation,
                           (PVOID)v13,
                           Length,
                           &Length);
        if ( DeviceProperty >= 0 )
        {
          v14 = (const WCHAR *)(v13 + *(unsigned int *)(v13 + 8));
          if ( CombineNames )
          {
            v15 = *(_DWORD *)(v13 + 12) + BufferLength + 2;
            v16 = (wchar_t *)ExAllocatePool2(256LL, v15, 1885957463LL);
            if ( v16 )
            {
              SuggestedInstanceName->Buffer = v16;
              SuggestedInstanceName->Length = 0;
              SuggestedInstanceName->MaximumLength = v15;
              if ( Pool2 )
                RtlAppendUnicodeToString(SuggestedInstanceName, (PCWSTR)Pool2);
              RtlAppendUnicodeToString(SuggestedInstanceName, L"_");
              RtlAppendUnicodeToString(SuggestedInstanceName, v14);
            }
            else
            {
              DeviceProperty = -1073741670;
            }
            if ( Pool2 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = 0LL;
            }
          }
          else
          {
            if ( Pool2 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = 0LL;
            }
            v17 = (wchar_t *)ExAllocatePool2(256LL, *(unsigned int *)(v13 + 12), 1885957463LL);
            if ( v17 )
            {
              SuggestedInstanceName->Buffer = v17;
              SuggestedInstanceName->Length = 0;
              SuggestedInstanceName->MaximumLength = *(_WORD *)(v13 + 12);
              RtlAppendUnicodeToString(SuggestedInstanceName, v14);
            }
            else
            {
              DeviceProperty = -1073741670;
            }
          }
        }
        ExFreePoolWithTag((PVOID)v13, 0);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    ZwClose(DeviceInterfaceRegKey);
  }
  if ( !Pool2 || DeviceProperty >= 0 )
    return DeviceProperty;
LABEL_35:
  ExFreePoolWithTag(Pool2, 0);
  return DeviceProperty;
}
