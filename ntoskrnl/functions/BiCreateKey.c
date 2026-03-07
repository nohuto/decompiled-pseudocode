__int64 __fastcall BiCreateKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, unsigned int a4, _QWORD *a5, bool *a6)
{
  const WCHAR *v7; // rax
  unsigned int i; // r14d
  int v10; // ebx
  ACCESS_MASK v11; // r12d
  char v12; // r15
  ULONG v13; // ebx
  void *KeySecurityDescriptor; // rax
  __int64 v15; // r9
  void *v16; // rsi
  __int64 v17; // rdx
  NTSTATUS v18; // ebx
  int v20; // [rsp+20h] [rbp-B8h]
  ULONG v21; // [rsp+44h] [rbp-94h] BYREF
  int v22[2]; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v25[2]; // [rsp+68h] [rbp-70h] BYREF
  void *v26; // [rsp+E0h] [rbp+8h]

  v7 = a2;
  v21 = 0;
  v23 = 0LL;
  DestinationString = 0LL;
  memset(v25, 0, 44);
  for ( i = 0; ; ++i )
  {
    *(_QWORD *)v22 = 0LL;
    RtlInitUnicodeString(&DestinationString, v7);
    v26 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v10 = 64;
    v11 = a3;
    v12 = 0;
    if ( (a4 & 1) != 0 )
    {
      v10 = 192;
      if ( (a3 & 0x60019) != a3 )
      {
        v11 = 0x40000;
        v12 = 1;
      }
    }
    v13 = v10 | 0x200;
    KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
    v16 = KeySecurityDescriptor;
    if ( KeySecurityDescriptor )
    {
      v25[0].Length = 48;
      v25[0].RootDirectory = v26;
      v25[0].Attributes = v13;
      v25[0].ObjectName = &DestinationString;
      v25[0].SecurityDescriptor = KeySecurityDescriptor;
      v25[0].SecurityQualityOfService = 0LL;
      v18 = BiZwCreateKey((HANDLE *)v22, v11, v25, v15, v20, (a4 >> 1) & 1, &v21);
      if ( v18 < 0 )
        goto LABEL_14;
      if ( v12 )
      {
        v18 = BiZwSetSecurityObject(*(void **)v22, v17, v16);
        if ( v18 < 0 )
          goto LABEL_14;
        v18 = BiZwOpenKey(&v23, a3, v25);
        if ( v18 < 0 )
          goto LABEL_14;
        CmSiCloseSection(*(void **)v22);
        *(_QWORD *)v22 = v23;
      }
      if ( a6 )
        *a6 = v21 == 1;
      *a5 = *(_QWORD *)v22;
LABEL_14:
      if ( v18 >= 0 )
        goto LABEL_15;
      goto LABEL_20;
    }
    v18 = -1073741703;
LABEL_20:
    if ( *(_QWORD *)v22 )
      CmSiCloseSection(*(void **)v22);
LABEL_15:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v18 != -1073741443 )
      break;
    __debugbreak();
    a1 = (__int64)v26;
    if ( i >= 5 )
      break;
    v7 = a2;
  }
  return (unsigned int)v18;
}
