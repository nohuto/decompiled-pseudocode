__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned int *v4; // r14
  __int64 (__fastcall *v5)(__int64, HANDLE, __int64); // r13
  unsigned int v6; // r15d
  NTSTATUS v7; // eax
  unsigned int v8; // ecx
  const UNICODE_STRING **v9; // r12
  const UNICODE_STRING *v10; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int v14; // r10d
  const wchar_t **v15; // r13
  const wchar_t *v16; // rax
  unsigned int v17; // edi
  const wchar_t **v18; // r15
  unsigned int v19; // edi
  __int64 Pool2; // rdi
  __int64 *v22; // rax
  int v23; // eax
  wchar_t **v24; // rax
  _WORD *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // eax
  void *v28; // rax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+28h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-51h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  void *Src; // [rsp+48h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  const wchar_t *HashValue; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a1;
  LODWORD(HashValue) = 0;
  v4 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  Src = 0LL;
  DestinationString = 0LL;
  v32 = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v7 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
  v8 = (unsigned int)HashValue;
  if ( v7 < 0 )
    v8 = 0;
  v9 = (const UNICODE_STRING **)(*(_QWORD *)(v3 + 24) + 16LL * (v8 % 0x7F));
  v10 = *v9;
  if ( *v9 != (const UNICODE_STRING *)v9 )
  {
    v12 = 0;
    do
    {
      Pool2 = (__int64)v10;
      if ( RtlEqualUnicodeString(&DestinationString, v10 + 1, 1u) )
        break;
      v10 = *(const UNICODE_STRING **)&v10->Length;
      Pool2 = 0LL;
    }
    while ( v10 != (const UNICODE_STRING *)v9 );
    if ( Pool2 )
    {
      if ( *(_DWORD *)(Pool2 + 32) != -1 )
        goto LABEL_27;
      v12 = -1073741823;
      goto LABEL_18;
    }
    v3 = a1;
  }
  ObjectAttributes.RootDirectory = *(HANDLE *)(v3 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140A7D864, 0, &P);
    v4 = (unsigned int *)P;
    v12 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_28;
    if ( !PnpValidateRegistryString(P) )
    {
      v12 = -1073741823;
      goto LABEL_28;
    }
    v15 = (const wchar_t **)&off_140A77390;
    v16 = (const wchar_t *)((char *)v4 + v4[2]);
    v17 = v14;
    HashValue = v16;
    while ( wcsicmp(*v15, v16) )
    {
      v16 = HashValue;
      ++v17;
      v15 += 2;
      if ( v17 >= 8 )
        goto LABEL_11;
    }
    v5 = (__int64 (__fastcall *)(__int64, HANDLE, __int64))*(&funcs_14087846E + 2 * v17);
    if ( !v5 )
    {
LABEL_11:
      v12 = -1073741772;
      goto LABEL_28;
    }
LABEL_22:
    Pool2 = ExAllocatePool2(256LL, 48LL, 1667526736LL);
    if ( !Pool2 )
    {
      v12 = -1073741670;
      goto LABEL_28;
    }
    v22 = (__int64 *)v9[1];
    if ( (const UNICODE_STRING **)*v22 != v9 )
LABEL_56:
      __fastfail(3u);
    *(_QWORD *)Pool2 = v9;
    *(_QWORD *)(Pool2 + 8) = v22;
    *v22 = Pool2;
    v9[1] = (const UNICODE_STRING *)Pool2;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), a2) )
    {
      if ( v5 )
      {
        *(_DWORD *)(Pool2 + 32) = -1;
        v23 = v5(a1, KeyHandle, Pool2);
        v12 = v23;
        if ( v23 >= 0 )
        {
LABEL_27:
          *a3 = Pool2;
          goto LABEL_28;
        }
        if ( v23 == -1073741772 )
          v12 = -1073741823;
LABEL_53:
        v30 = *(_QWORD *)Pool2;
        if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) == Pool2 )
        {
          v31 = *(_QWORD **)(Pool2 + 8);
          if ( *v31 == Pool2 )
          {
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_28:
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            goto LABEL_18;
          }
        }
        goto LABEL_56;
      }
      v25 = Src;
      if ( Src )
      {
        *(_DWORD *)(Pool2 + 32) = 1;
        v26 = -1LL;
        do
          ++v26;
        while ( v25[v26] );
        v27 = 2 * v26 + 2;
        *(_DWORD *)(Pool2 + 36) = v27;
        v28 = (void *)ExAllocatePool2(256LL, v27, 1667526736LL);
        *(_QWORD *)(Pool2 + 40) = v28;
        if ( v28 )
        {
          memmove(v28, v25, *(unsigned int *)(Pool2 + 36));
          goto LABEL_27;
        }
      }
      else
      {
        *(_DWORD *)(Pool2 + 32) = 4;
        *(_DWORD *)(Pool2 + 36) = 4;
        v29 = (unsigned int *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
        *(_QWORD *)(Pool2 + 40) = v29;
        if ( v29 )
        {
          *v29 = v6;
          goto LABEL_27;
        }
      }
    }
    v12 = -1073741670;
    goto LABEL_53;
  }
  if ( v11 == -1073741772 )
  {
    v12 = 0;
    v18 = (const wchar_t **)&off_140A76DE0;
    v19 = 0;
    while ( wcsicmp(*v18, a2) )
    {
      ++v19;
      v18 += 3;
      if ( v19 >= 4 )
        goto LABEL_16;
    }
    v24 = &(&off_140A76DE0)[3 * v19];
    if ( v24 )
    {
      v6 = *((_DWORD *)v24 + 4);
      Src = v24[1];
      goto LABEL_22;
    }
LABEL_16:
    if ( PnpStringToDwordValue((__int64)a2, &v32) )
    {
      v6 = v32;
      goto LABEL_22;
    }
    v12 = -1073741772;
  }
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v12;
}
