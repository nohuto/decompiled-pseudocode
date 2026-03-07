__int64 __fastcall PiNormalizeDeviceText(const WCHAR *Src, wchar_t **a2)
{
  void *v3; // r14
  unsigned __int16 *v4; // r13
  wchar_t *v5; // rsi
  int inited; // ebx
  void *Pool2; // rax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  const wchar_t *v11; // r15
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  unsigned __int16 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  size_t v18; // rbx
  wchar_t *v19; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  size_t pcbRemaining; // [rsp+80h] [rbp-29h] BYREF
  __int64 v25; // [rsp+88h] [rbp-21h]
  wchar_t *v26; // [rsp+90h] [rbp-19h]
  PVOID P; // [rsp+98h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  EndPtr = 0LL;
  v3 = 0LL;
  Length = 0;
  DestinationString = 0LL;
  pcbRemaining = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v5 = 0LL;
  KeyHandle = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_4;
  if ( !RtlPrefixUnicodeString(&CmRegistryMachineName, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_4;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, String2.Length + 2LL, 538996816LL);
  P = Pool2;
  v9 = (const wchar_t *)Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_4;
  }
  memmove(Pool2, Src, String2.Length);
  v9[(unsigned __int64)String2.Length >> 1] = 0;
  v10 = wcschr(v9, 0x2Cu);
  if ( !v10 )
    goto LABEL_31;
  v11 = v10 + 1;
  *v10 = 0;
  v12 = wcschr(v10 + 1, 0x2Cu);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0;
    v13 = v12 + 1;
  }
  v25 = wcstoi64(v11, &EndPtr, 10);
  if ( *EndPtr )
    goto LABEL_31;
  RtlInitUnicodeString(&String2, v9);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &String2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v4 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 538996816LL);
      if ( !v4 )
        goto LABEL_39;
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v4, Length, &Length);
      if ( inited >= 0 )
      {
        String2.Length = v4[6];
        String2.MaximumLength = v4[6];
        String2.Buffer = v4 + 8;
        inited = IopBuildFullDriverPath(&String2, KeyHandle, &DestinationString);
        if ( inited >= 0 )
        {
          *(_DWORD *)&String2.Length = 1703960;
          String2.Buffer = L"\\SystemRoot\\";
          if ( RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
          {
            v14 = DestinationString.Length - 24;
            v26 = DestinationString.Buffer + 12;
            inited = PiGetDefaultMessageString(KeyHandle, v25, &v22);
            if ( inited < 0 )
            {
              v3 = v22;
              goto LABEL_32;
            }
            v15 = -1LL;
            v16 = -1LL;
            do
              ++v16;
            while ( v11[v16] );
            v3 = v22;
            v17 = -1LL;
            do
              ++v17;
            while ( *((_WORD *)v22 + v17) );
            v18 = v14 + 2 * (v16 + v17 + 5);
            if ( v13 )
            {
              do
                ++v15;
              while ( v13[v15] );
              v18 += 2 * v15 + 6;
            }
            v19 = (wchar_t *)ExAllocatePool2(256LL, v18, 538996816LL);
            v5 = v19;
            if ( v19 )
            {
              inited = RtlStringCbPrintfExW(v19, v18, &EndPtr, &pcbRemaining, 0, L"@%s,#%s;%s", v26, v11, v3);
              if ( inited < 0 )
                goto LABEL_32;
              if ( v13 )
              {
                inited = RtlStringCbPrintfW(EndPtr, pcbRemaining, L";(%s)", v13);
                if ( inited < 0 )
                  goto LABEL_32;
              }
              *a2 = v5;
LABEL_31:
              inited = 0;
              goto LABEL_32;
            }
LABEL_39:
            inited = -1073741670;
          }
        }
      }
    }
  }
LABEL_32:
  ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_4:
  RtlFreeUnicodeString(&DestinationString);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
