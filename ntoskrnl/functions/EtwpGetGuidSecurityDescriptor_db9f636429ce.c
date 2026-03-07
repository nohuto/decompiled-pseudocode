__int64 __fastcall EtwpGetGuidSecurityDescriptor(PUNICODE_STRING ValueName, _QWORD *a2)
{
  void *ValueData; // rdi
  ULONG v3; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v7; // esi
  unsigned int v8; // ebx
  ULONG v10; // ebx
  void *Pool2; // rax
  ULONG Length; // [rsp+68h] [rbp+10h] BYREF
  ULONG ValueType; // [rsp+70h] [rbp+18h] BYREF

  ValueData = 0LL;
  v3 = 512;
  ValueType = 0;
  *a2 = 0LL;
  for ( Length = 512; ; v3 = Length )
  {
    if ( ValueData )
      ExFreePoolWithTag(ValueData, 0);
    ValueData = (void *)ExAllocatePool2(256LL, v3, 1350005829LL);
    if ( !ValueData )
      return (unsigned int)-1073741670;
    v6 = RtlQueryRegistryValueWithFallback(
           EtwpMutableSecurityKeyHandle,
           EtwpSecurityKeyHandle,
           ValueName,
           v3,
           &ValueType,
           ValueData,
           &Length);
    v7 = v6;
    if ( v6 != -2147483643 && v6 != -1073741789 )
      break;
  }
  v8 = v6;
  if ( v6 >= 0 && ValueType == 3 )
  {
    if ( SeValidSecurityDescriptor(Length, ValueData) )
    {
      v10 = Length;
      Pool2 = (void *)ExAllocatePool2(256LL, Length, 1350005829LL);
      *a2 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, ValueData, v10);
        v8 = v7;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741703;
    }
  }
  ExFreePoolWithTag(ValueData, 0);
  return v8;
}
