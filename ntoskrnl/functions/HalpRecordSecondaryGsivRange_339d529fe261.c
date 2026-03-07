__int64 HalpRecordSecondaryGsivRange()
{
  NTSTATUS v0; // ebx
  _QWORD v2[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v3[2]; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp+7h] BYREF
  UNICODE_STRING v5; // [rsp+70h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+27h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ValueName.Buffer = L"SecondaryGsivBase";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v5.Buffer = L"SecondaryGsivSize";
  v2[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\HAL";
  v3[1] = L"SecondaryInterrupts";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  *(_QWORD *)&ValueName.Length = 2359330LL;
  *(_QWORD *)&v5.Length = 2359330LL;
  v2[0] = 7209068LL;
  v3[0] = 2621478LL;
  ObjectAttributes.Attributes = 576;
  v0 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 2u, &ObjectAttributes) >= 0
      || (v0 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, 0LL, 1u, 0LL), v0 >= 0) )
    {
      v0 = ZwSetValueKey(Handle, &ValueName, 0, 4u, &SecondaryGsivRangeStart, 4u);
      if ( v0 >= 0 )
        v0 = ZwSetValueKey(Handle, &v5, 0, 4u, &SecondaryGsivRangeSize, 4u);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
