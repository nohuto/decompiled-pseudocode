void BapdpMarshallBootDataToRegistry()
{
  __int64 *v0; // rbx
  __int64 *v1; // rcx
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // r14d
  _QWORD *Pool2; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  UNICODE_STRING **v11; // r15
  UNICODE_STRING *v12; // rax
  UNICODE_STRING v13; // xmm0
  ULONG v14; // r13d
  __int64 v15; // r12
  char *v16; // r14
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  ULONG v19; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  char v28; // [rsp+C8h] [rbp-40h] BYREF

  v0 = (__int64 *)qword_140D15DF0;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v1 = (__int64 *)qword_140D15DF0;
  v2 = 0;
  v25 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  if ( qword_140D15DF0 )
  {
    do
    {
      if ( v1 == &qword_140D15DF0 )
        break;
      v3 = v1[2];
      v1 = (__int64 *)*v1;
      if ( (unsigned int)(*(_DWORD *)(v3 + 32) - 1) <= 1 )
      {
        v4 = *(_QWORD *)(v3 + 16) - (_QWORD)Handle;
        if ( !v4 )
          v4 = *(_QWORD *)(v3 + 24) - v25;
        if ( !v4 )
          ++v2;
      }
    }
    while ( v1 );
    if ( v2 )
    {
      v5 = 0;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v2, 1682989378LL);
      if ( Pool2 )
      {
        while ( v0 != &qword_140D15DF0 )
        {
          v7 = v0[2];
          v0 = (__int64 *)*v0;
          if ( (unsigned int)(*(_DWORD *)(v7 + 32) - 1) <= 1 )
          {
            v8 = *(_QWORD *)(v7 + 16) - (_QWORD)Handle;
            if ( !v8 )
              v8 = *(_QWORD *)(v7 + 24) - v25;
            if ( !v8 )
            {
              v9 = v5++;
              Pool2[v9] = v7;
            }
          }
        }
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
        {
          KeyHandle = 0LL;
LABEL_39:
          if ( v21 )
            ZwClose(v21);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x64506142u);
          return;
        }
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"BootApplicationPersistentData");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&v21, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
        {
          v10 = 0;
          v11 = (UNICODE_STRING **)Pool2;
          do
          {
            v12 = *v11;
            Handle = 0LL;
            if ( v12 )
            {
              v13 = *v12;
              v22[0] = 5111808LL;
              DestinationString = v13;
              v22[1] = &v28;
              memset(&ObjectAttributes, 0, 44);
              if ( (int)RtlStringFromGUIDEx(&DestinationString, v22, 0LL) >= 0 )
              {
                ObjectAttributes.RootDirectory = v21;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
                {
                  v14 = 0;
                  v15 = v2 - v10;
                  v16 = (char *)&Pool2[v10];
                  do
                  {
                    v17 = *(_QWORD **)v16;
                    *(_QWORD *)&String.Length = 1572864LL;
                    String.Buffer = (wchar_t *)&ObjectAttributes;
                    if ( v17 )
                    {
                      v18 = *v17 - *(_QWORD *)&DestinationString.Length;
                      if ( *v17 == *(_QWORD *)&DestinationString.Length )
                        v18 = v17[1] - (unsigned __int64)DestinationString.Buffer;
                      if ( !v18 )
                      {
                        v19 = v14++;
                        if ( RtlIntegerToUnicodeString(v19, 0xAu, &String) >= 0 )
                        {
                          ZwSetValueKey(
                            Handle,
                            &String,
                            0,
                            3u,
                            (PVOID)(*(_QWORD *)v16 + *(unsigned int *)(*(_QWORD *)v16 + 40LL)),
                            *(_DWORD *)(*(_QWORD *)v16 + 36LL));
                          *(_QWORD *)v16 = 0LL;
                        }
                      }
                    }
                    v16 += 8;
                    --v15;
                  }
                  while ( v15 );
                  ZwClose(Handle);
                }
              }
            }
            ++v10;
            ++v11;
          }
          while ( v10 < v2 );
        }
        else
        {
          v21 = 0LL;
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_39;
    }
  }
}
