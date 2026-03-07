__int64 __fastcall CmSetAcpiHwProfile(
        unsigned __int16 *a1,
        __int64 (__fastcall *a2)(PVOID, unsigned int *, _QWORD),
        __int64 a3,
        HANDLE *a4,
        _BYTE *a5)
{
  void *Pool2; // rdi
  int AcpiProfileInformation; // ebx
  void *v9; // r12
  int v10; // ebx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r14d
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rax
  HANDLE v25; // rcx
  NTSTATUS v26; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-8Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v39; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v40; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v41; // [rsp+C8h] [rbp-38h] BYREF
  void *v42; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE *v43; // [rsp+D8h] [rbp-28h]
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  int KeyValueInformation; // [rsp+F0h] [rbp-10h] BYREF
  int v46; // [rsp+F4h] [rbp-Ch]
  unsigned int v47; // [rsp+F8h] [rbp-8h]
  size_t Size; // [rsp+FCh] [rbp-4h]
  wchar_t Dst[128]; // [rsp+1F0h] [rbp+F0h] BYREF

  v42 = 0LL;
  KeyHandle = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  Data = 0;
  v35 = 0;
  v28 = 0;
  Disposition = 0;
  v40 = 0LL;
  P = 0LL;
  *a5 = 0;
  v43 = a4;
  v44 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  AcpiProfileInformation = CmpOpenDevicesControlSet(a1, &v42, &v44);
  if ( AcpiProfileInformation >= 0 )
  {
    v9 = v42;
    ObjectAttributes.RootDirectory = v42;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      KeyHandle = 0LL;
      goto LABEL_68;
    }
    AcpiProfileInformation = CmpGetAcpiProfileInformation(
                               KeyHandle,
                               (__int64 *)&P,
                               (__int64 *)&v40,
                               (__int64)Dst,
                               (unsigned __int16 *)&KeyValueInformation);
    if ( AcpiProfileInformation < 0 )
      goto LABEL_68;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&v33, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      v33 = 0LL;
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      Handle = 0LL;
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"DockingState");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || v46 != 4 )
    {
      goto LABEL_67;
    }
    v10 = *(int *)((char *)&KeyValueInformation + v47);
    RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && v46 == 3 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 538987843LL);
      if ( !Pool2 )
      {
        AcpiProfileInformation = -1073741670;
        goto LABEL_68;
      }
      memmove(Pool2, (char *)&KeyValueInformation + v47, (unsigned int)Size);
    }
    RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || v46 != 4 )
    {
LABEL_67:
      AcpiProfileInformation = -1073741492;
      goto LABEL_68;
    }
    v11 = *(int *)((char *)&KeyValueInformation + v47);
    AcpiProfileInformation = CmpFilterAcpiDockingState((_DWORD)a1, v10, (_DWORD)Pool2, v11, (__int64)P, (__int64)v40);
    if ( AcpiProfileInformation < 0 )
      goto LABEL_68;
    v12 = a2(P, &v35, 0LL);
    AcpiProfileInformation = v12;
    if ( v35 != -1 )
    {
      if ( v12 < 0 )
        goto LABEL_68;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&v39, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        v39 = 0LL;
        goto LABEL_68;
      }
      v13 = 32LL * v35;
      v14 = *(_DWORD *)((char *)P + v13 + 32);
      v15 = *(_DWORD *)((char *)P + v13 + 28);
      v28 = v15;
      if ( (v14 & 8) != 0 )
      {
        AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v11, v15, Dst);
        if ( AcpiProfileInformation < 0 )
          goto LABEL_68;
        v15 = v28;
      }
      if ( (v14 & 4) != 0 || v15 != v11 )
      {
        v25 = Handle;
        *a5 = 1;
        ZwClose(v25);
        Handle = 0LL;
        if ( (v14 & 4) != 0 )
        {
          LOWORD(Length) = *a1;
          v26 = CmpCloneHwProfile(KeyHandle, v39, v33, v28, Length, &v33, &v28);
        }
        else
        {
          ZwClose(v33);
          swprintf_s(Dst, 0x80uLL, L"%04d", v28);
          RtlInitUnicodeString(&DestinationString, Dst);
          ObjectAttributes.RootDirectory = v39;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v26 = ZwOpenKey(&v33, 0x20019u, &ObjectAttributes);
        }
        AcpiProfileInformation = v26;
        if ( v26 < 0 )
        {
          v33 = 0LL;
          goto LABEL_68;
        }
        RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        AcpiProfileInformation = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        if ( AcpiProfileInformation < 0 )
        {
          Handle = 0LL;
          goto LABEL_68;
        }
        RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
        if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v28, 4u) < 0 )
          goto LABEL_67;
      }
      Data = *a1;
      RtlInitUnicodeString(&DestinationString, L"DockingState");
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
      if ( (v14 & 2) == 0 )
        AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, v28, Dst);
      if ( v28 != v11 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
        ObjectAttributes.RootDirectory = v9;
        ObjectAttributes.Attributes = 832;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ZwCreateKey(&v41, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = Dst;
        RtlUnicodeStringPrintf(
          &DestinationString,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
          &v44,
          v28);
        AcpiProfileInformation = ZwSetValueKey(
                                   v41,
                                   &CmSymbolicLinkValueName,
                                   0,
                                   6u,
                                   DestinationString.Buffer,
                                   DestinationString.Length);
      }
    }
    if ( AcpiProfileInformation >= 0 )
    {
      *v43 = v33;
      goto LABEL_24;
    }
  }
LABEL_68:
  if ( v33 )
    ZwClose(v33);
LABEL_24:
  if ( v41 )
    ZwClose(v41);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    ZwClose(v39);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v16 = P;
  if ( P )
  {
    v17 = 0;
    Data = 0;
    if ( *((_DWORD *)P + 1) )
    {
      v18 = 0LL;
      do
      {
        v19 = 8 * v18;
        if ( *(_QWORD *)&v16[v19 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v16[v19 + 4], 0);
          v17 = Data;
          v16 = P;
        }
        Data = ++v17;
        v18 = v17;
      }
      while ( v17 < v16[1] );
    }
    ExFreePoolWithTag(v16, 0);
  }
  v20 = v40;
  if ( v40 )
  {
    v21 = 0;
    Data = 0;
    if ( *((_DWORD *)v40 + 1) )
    {
      v22 = 0LL;
      do
      {
        v23 = 3 * (v22 + 1);
        if ( *(_QWORD *)&v20[2 * v23] )
        {
          ExFreePoolWithTag(*(PVOID *)&v20[2 * v23], 0);
          v21 = Data;
          v20 = v40;
        }
        Data = ++v21;
        v22 = v21;
      }
      while ( v21 < v20[1] );
    }
    ExFreePoolWithTag(v20, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
