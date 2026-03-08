/*
 * XREFs of CmpCreateHardwareProfiles @ 0x140B50B04
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x140813CE0 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140814380 (CmpOpenDevicesControlSet.c)
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x140B50F94 (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x140B94C88 (CmpAddAliasEntry.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  char v2; // r12
  int v3; // eax
  HANDLE v4; // rdi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // r15
  __int64 v10; // r8
  ULONG Length; // [rsp+28h] [rbp-E0h]
  ULONG Disposition; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int Data; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v20; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v21; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v22; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v26; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v28[256]; // [rsp+168h] [rbp+60h] BYREF
  int v29[64]; // [rsp+268h] [rbp+160h] BYREF

  v21 = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes_8, 0, 44);
  Disposition = 0;
  v26 = 0LL;
  String1 = 0LL;
  KeyHandle = 0LL;
  DestinationString_8 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  Data = 0;
  v2 = 0;
  v3 = CmpOpenDevicesControlSet(a1, &v26, &String1);
  v4 = v26;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_26;
  ObjectAttributes_8.RootDirectory = v26;
  ObjectAttributes_8.Attributes = 576;
  ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes_8.Length = 48;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes_8);
  v5 = v6;
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_26;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&CmpControlString;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v21, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_26;
    ZwClose(v21);
    v21 = 0LL;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_26;
    ObjectAttributes_8.RootDirectory = KeyHandle;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v21, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_26;
    DestinationString_8.MaximumLength = 256;
    DestinationString_8.Buffer = (wchar_t *)v28;
    RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", 0LL);
    ObjectAttributes_8.RootDirectory = v21;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v20, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    ZwClose(v21);
    v21 = 0LL;
    if ( v5 < 0 )
      goto LABEL_26;
    ZwClose(v20);
    v20 = 0LL;
    v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
    if ( v5 < 0 )
      goto LABEL_26;
  }
  else
  {
    if ( v6 < 0 )
      goto LABEL_26;
    v5 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v5 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_26;
    Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  ObjectAttributes_8.Length = 48;
  ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes_8.RootDirectory = v4;
  ObjectAttributes_8.Attributes = 576;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v22, 0x20019u, &ObjectAttributes_8);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_26;
    v5 = ZwCreateKey(&v22, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_26;
  *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
  DestinationString_8.Buffer = (wchar_t *)v28;
  RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", Data);
  ObjectAttributes_8.RootDirectory = v22;
  ObjectAttributes_8.Length = 48;
  ObjectAttributes_8.ObjectName = &DestinationString_8;
  ObjectAttributes_8.Attributes = 576;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v20, 0x2001Fu, &ObjectAttributes_8);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_26;
    v5 = ZwCreateKey(&v20, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_26;
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_WORD *)(v7 + 8);
  v9 = (_WORD *)(v7 + 4);
  if ( v8 == 3 )
  {
    v8 = 1;
    *(_WORD *)(v7 + 8) = 1;
  }
  if ( *v9 == 1 )
    goto LABEL_52;
  if ( *v9 == 2 )
  {
LABEL_15:
    ObjectAttributes_8.RootDirectory = KeyHandle;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&DestinationString, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 1u, &Disposition) >= 0 )
    {
      CmpAddDockingInfo((int)DestinationString);
      ZwClose(DestinationString);
      DestinationString = 0LL;
    }
    if ( *(_WORD *)(v7 + 8) == 1 )
      v2 = 1;
    goto LABEL_19;
  }
  if ( *v9 != 3 )
  {
LABEL_19:
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&DestinationString, 0xF003Fu, &ObjectAttributes_8) >= 0 )
    {
      CmDeleteKeyRecursive(DestinationString, 0LL, (__int64)v29, 256, Length);
      ZwClose(DestinationString);
      DestinationString = 0LL;
    }
    v5 = ZwCreateKey(&DestinationString, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
    if ( v5 >= 0 )
    {
      *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
      DestinationString_8.Buffer = (wchar_t *)v28;
      RtlUnicodeStringPrintf(
        &DestinationString_8,
        L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
        &String1,
        Data);
      v5 = ZwSetValueKey(
             DestinationString,
             &CmSymbolicLinkValueName,
             0,
             6u,
             DestinationString_8.Buffer,
             DestinationString_8.Length);
      if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
      {
        ZwClose(DestinationString);
        DestinationString = 0LL;
        *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
        DestinationString_8.Buffer = (wchar_t *)v28;
        RtlUnicodeStringPrintf(
          &DestinationString_8,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
          &CmpSystemHiveNameString,
          L"24");
        ObjectAttributes_8.Length = 48;
        ObjectAttributes_8.ObjectName = &DestinationString_8;
        ObjectAttributes_8.RootDirectory = 0LL;
        ObjectAttributes_8.Attributes = 576;
        *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&DestinationString, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
        if ( v5 >= 0 )
        {
          *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
          DestinationString_8.Buffer = (wchar_t *)v28;
          RtlUnicodeStringPrintf(
            &DestinationString_8,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
            &String1,
            L"24");
          v5 = ZwSetValueKey(
                 DestinationString,
                 &CmSymbolicLinkValueName,
                 0,
                 6u,
                 DestinationString_8.Buffer,
                 DestinationString_8.Length);
        }
      }
    }
    if ( v2 )
    {
      Handle = 0LL;
      LOBYTE(v15) = 0;
      LODWORD(v26) = 131073;
      WORD2(v26) = 0;
      v5 = CmSetAcpiHwProfile(
             (unsigned __int16 *)&v26,
             (__int64 (__fastcall *)(PVOID, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
             v10,
             &Handle,
             &v15);
      if ( v5 >= 0 )
        ZwClose(Handle);
    }
    goto LABEL_26;
  }
  v5 = CmpCloneHwProfile(KeyHandle, v22, v20, Data, v8, &v20, &Data);
  if ( v5 < 0 )
  {
    v20 = 0LL;
    goto LABEL_26;
  }
  v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
  if ( v5 >= 0 )
  {
LABEL_52:
    CmpAddAliasEntry(KeyHandle, v7 + 4, Data);
    goto LABEL_15;
  }
LABEL_26:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v20 )
    ZwClose(v20);
  if ( v22 )
    ZwClose(v22);
  if ( DestinationString )
    ZwClose(DestinationString);
  return (unsigned int)v5;
}
