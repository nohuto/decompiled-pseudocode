int HalpPutAcpiHacksInRegistry()
{
  int result; // eax
  NTSTATUS v1; // ebx
  _QWORD v2[2]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v3[2]; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING v5; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING v6; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING v7; // [rsp+90h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+17h] BYREF
  ULONG Data; // [rsp+F0h] [rbp+67h] BYREF
  ULONG Disposition; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Disposition = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v2[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\HAL";
  v3[1] = L"CStateHacks";
  ValueName.Buffer = L"Piix4";
  v5.Buffer = L"440BX";
  v6.Buffer = L"Piix4Slot";
  v7.Buffer = L"Piix4DevActB";
  v2[0] = 7209068LL;
  v3[0] = 1572886LL;
  *(_QWORD *)&ValueName.Length = 786442LL;
  *(_QWORD *)&v5.Length = 786442LL;
  *(_QWORD *)&v6.Length = 1310738LL;
  *(_QWORD *)&v7.Length = 1703960LL;
  KeWaitForSingleObject(&HalpPiix4Detected, Executive, 0, 0, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.Length = 48;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      Data = (unsigned __int8)HalpPiix4;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &Data, 4u);
      Data = (unsigned __int8)HalpBroken440BX;
      ZwSetValueKey(Handle, &v5, 0, 4u, &Data, 4u);
      Data = HalpPiix4SlotNumber | (HalpPiix4BusNumber << 16);
      ZwSetValueKey(Handle, &v6, 0, 4u, &Data, 4u);
      Data = HalpPiix4DevActB;
      ZwSetValueKey(Handle, &v7, 0, 4u, &Data, 4u);
      return ZwClose(Handle);
    }
  }
  return result;
}
