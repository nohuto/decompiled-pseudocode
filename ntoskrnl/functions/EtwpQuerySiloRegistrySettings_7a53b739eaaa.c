void __fastcall EtwpQuerySiloRegistrySettings(__int64 a1)
{
  _WORD *v2; // rbx
  HANDLE v3; // rcx
  _WORD *Pool2; // rax
  unsigned __int64 v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+88h] [rbp-78h]
  _QWORD v11[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v12; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+138h] [rbp+38h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v12 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v2 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(v11, 0, 0x70uLL);
    LODWORD(v11[4]) = 1;
    v11[0] = &EtwpQueryRegistryCallback;
    v9 = 1;
    v11[3] = &v9;
    v11[2] = L"RTBacklogRoot";
    v11[5] = &v12;
    p_UnicodeString = &UnicodeString;
    if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v11, 0LL, 0LL) >= 0 )
    {
      if ( UnicodeString.Buffer )
      {
        if ( UnicodeString.Length >= 4u )
        {
          Pool2 = (_WORD *)ExAllocatePool2(256LL, UnicodeString.MaximumLength + 2LL, 1350005829LL);
          v2 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, UnicodeString.Buffer, UnicodeString.MaximumLength);
            v5 = (unsigned __int64)UnicodeString.Length >> 1;
            if ( v2[v5 - 1] != 92 )
            {
              v2[v5] = 92;
              v2[((unsigned __int64)UnicodeString.Length >> 1) + 1] = 0;
            }
          }
        }
      }
    }
  }
  v3 = KeyHandle;
  *(_QWORD *)(a1 + 4112) = v2;
  if ( v3 )
    ZwClose(v3);
  RtlFreeUnicodeString(&UnicodeString);
}
