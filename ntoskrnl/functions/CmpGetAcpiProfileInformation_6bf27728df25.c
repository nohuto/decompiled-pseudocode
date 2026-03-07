__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  NTSTATUS v8; // ebx
  _DWORD *Pool2; // rax
  ULONG v10; // r13d
  _DWORD *v11; // rsi
  ULONG v12; // r14d
  void *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  char *v16; // rdx
  ULONG v17; // ebx
  _DWORD *v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG v27; // r14d
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  _DWORD *v31; // rcx
  _DWORD *v33; // rcx
  unsigned int v34; // edi
  void *v35; // rcx
  _DWORD *v36; // rcx
  unsigned int v37; // edi
  void *v38; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v42; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v44; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  void *v47; // [rsp+B0h] [rbp-39h]
  __int128 v48; // [rsp+B8h] [rbp-31h] BYREF
  __int128 KeyInformation; // [rsp+C8h] [rbp-21h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-11h]
  __int128 v51; // [rsp+E8h] [rbp-1h]

  *a2 = 0LL;
  v47 = a1;
  v42 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  *a3 = 0LL;
  KeyInformation = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_48;
  }
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_48;
  ResultLength = 32 * (DWORD1(v50) - 1) + 40;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 538987843LL);
  *a2 = (__int64)Pool2;
  if ( !Pool2 )
    goto LABEL_55;
  *Pool2 = DWORD1(v50);
  v10 = 0;
  for ( *(_DWORD *)(*a2 + 4) = 0; v10 < DWORD1(v50); ++v10 )
  {
    DWORD1(v44) = 0;
    *(_QWORD *)Value = 0LL;
    if ( ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
      break;
    KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
    DestinationString.Length = KeyValueInformation[6];
    DestinationString.MaximumLength = DestinationString.Length + 2;
    DestinationString.Buffer = KeyValueInformation + 8;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      break;
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value[1]);
    RtlInitUnicodeString(&DestinationString, L"PreferenceOrder");
    v11 = KeyValueInformation + 2;
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *v11 == 4 )
    {
      v12 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    }
    else
    {
      v12 = -1;
    }
    Value[0] = v12;
    RtlInitUnicodeString(&DestinationString, L"FriendlyName");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *v11 == 1 )
    {
      v13 = (void *)ExAllocatePool2(256LL, *((unsigned int *)KeyValueInformation + 3), 538987843LL);
      v14 = *((_DWORD *)KeyValueInformation + 3);
      LODWORD(v44) = v14;
      *((_QWORD *)&v44 + 1) = v13;
      if ( !v13 )
        goto LABEL_62;
      v15 = v14;
      v16 = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
    }
    else
    {
      v48 = *(_OWORD *)L"-------";
      v13 = (void *)ExAllocatePool2(256LL, 16LL, 538987843LL);
      LODWORD(v44) = 16;
      *((_QWORD *)&v44 + 1) = v13;
      if ( !v13 )
      {
LABEL_62:
        v8 = -1073741670;
LABEL_64:
        ZwClose(Handle);
        goto LABEL_48;
      }
      v15 = *((unsigned int *)KeyValueInformation + 3);
      v16 = (char *)&v48;
    }
    memmove(v13, v16, v15);
    v17 = 0;
    Value[2] = 0;
    RtlInitUnicodeString(&DestinationString, L"Aliasable");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || *v11 != 4
      || *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
    {
      v17 = 1;
      Value[2] = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"Pristine");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && *v11 == 4 )
    {
      if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
        v17 = 4;
      Value[2] = v17;
    }
    if ( !Value[1] )
    {
      v12 = -1;
      Value[2] = 4;
      Value[0] = -1;
    }
    v18 = (_DWORD *)*a2;
    v19 = 0;
    v20 = *(_DWORD *)(*a2 + 4);
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = v19 + 1;
        v22 = 8LL * v19;
        if ( v18[v22 + 6] >= v12 )
          break;
        ++v19;
        if ( v21 >= v20 )
          goto LABEL_27;
      }
      memmove(&v18[8 * v21 + 2], &v18[v22 + 2], 32LL * (*v18 - v19 - 1));
    }
LABEL_27:
    v23 = *a2;
    v24 = *(_OWORD *)Value;
    v25 = 32LL * v19;
    *(_OWORD *)(v25 + v23 + 8) = v44;
    *(_OWORD *)(v25 + v23 + 24) = v24;
    ++*(_DWORD *)(*a2 + 4);
    ZwClose(Handle);
  }
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.RootDirectory = v47;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v42, 0x20019u, &ObjectAttributes) < 0 )
  {
    v8 = 0;
    v42 = 0LL;
    goto LABEL_50;
  }
  v8 = ZwQueryKey(v42, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  if ( v8 >= 0 )
  {
    v26 = ExAllocatePool2(256LL, 32LL * (unsigned int)(DWORD1(v50) - 1) + 40, 538987843LL);
    *a3 = v26;
    if ( v26 )
    {
      v27 = 0;
      *(_DWORD *)(v26 + 4) = DWORD1(v50);
      *(_DWORD *)*a3 = DWORD1(v50);
      if ( DWORD1(v50) )
      {
        while ( 1 )
        {
          v8 = ZwEnumerateKey(v42, v27, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
          if ( v8 < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = v42;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v8 < 0 )
            break;
          RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4 )
          {
            v8 = -1073741492;
            ZwClose(Handle);
            goto LABEL_48;
          }
          *(_DWORD *)(*a3 + 24LL * v27 + 8) = *(_DWORD *)((char *)KeyValueInformation
                                                        + *((unsigned int *)KeyValueInformation + 2));
          RtlInitUnicodeString(&DestinationString, L"DockingState");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || (*(_DWORD *)(*a3 + 24LL * v27 + 12) = *(_DWORD *)((char *)KeyValueInformation
                                                               + *((unsigned int *)KeyValueInformation + 2)),
                RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                v8 = ZwQueryValueKey(
                       Handle,
                       &DestinationString,
                       KeyValueFullInformation,
                       KeyValueInformation,
                       0x100u,
                       &ResultLength),
                v8 < 0)
            || *((_DWORD *)KeyValueInformation + 1) != 3 )
          {
            v8 = -1073741492;
            goto LABEL_64;
          }
          *(_DWORD *)(*a3 + 24LL * v27 + 16) = *((_DWORD *)KeyValueInformation + 3);
          v28 = *((_DWORD *)KeyValueInformation + 3);
          if ( v28 )
            v29 = ExAllocatePool2(256LL, v28, 538987843LL);
          else
            v29 = 0LL;
          *(_QWORD *)(*a3 + 24LL * v27 + 24) = v29;
          v30 = *((_DWORD *)KeyValueInformation + 3);
          v31 = (_DWORD *)*a3;
          if ( v30 )
          {
            if ( !*(_QWORD *)&v31[6 * v27 + 6] )
              goto LABEL_62;
            memmove(
              *(void **)&v31[6 * v27 + 6],
              (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2),
              v30);
          }
          ZwClose(Handle);
          if ( ++v27 >= DWORD1(v50) )
            goto LABEL_48;
        }
      }
      goto LABEL_48;
    }
LABEL_55:
    v8 = -1073741670;
  }
LABEL_48:
  if ( v42 )
    ZwClose(v42);
LABEL_50:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 < 0 )
  {
    v33 = (_DWORD *)*a2;
    if ( *a2 )
    {
      v34 = 0;
      if ( v33[1] )
      {
        do
        {
          v35 = *(void **)&v33[8 * v34 + 4];
          if ( v35 )
            ExFreePoolWithTag(v35, 0);
          v33 = (_DWORD *)*a2;
          ++v34;
        }
        while ( v34 < *(_DWORD *)(*a2 + 4) );
      }
      ExFreePoolWithTag(v33, 0);
      *a2 = 0LL;
    }
    v36 = (_DWORD *)*a3;
    if ( *a3 )
    {
      v37 = 0;
      if ( v36[1] )
      {
        do
        {
          v38 = *(void **)&v36[6 * v37 + 6];
          if ( v38 )
            ExFreePoolWithTag(v38, 0);
          v36 = (_DWORD *)*a3;
          ++v37;
        }
        while ( v37 < *(_DWORD *)(*a3 + 4) );
      }
      ExFreePoolWithTag(v36, 0);
      *a3 = 0LL;
    }
  }
  return (unsigned int)v8;
}
