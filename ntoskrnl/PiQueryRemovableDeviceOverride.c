/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x140680570
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     PipFindDeviceOverrideEntry @ 0x14068092C (PipFindDeviceOverrideEntry.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140685094 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceLocationStrings @ 0x1407F8628 (PnpGetDeviceLocationStrings.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140955C68 (PnpOpenFirstMatchingSubKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  unsigned int v4; // r12d
  void *Pool2; // r14
  bool *v6; // r13
  NTSTATUS DeviceRegProp; // ebx
  char v11; // al
  const wchar_t *v12; // r9
  int v13; // edx
  char v14; // cl
  char v15; // r8
  int DeviceOverrideEntry; // eax
  __int64 v17; // rcx
  _DWORD *v18; // r13
  int v19; // edi
  unsigned int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h]
  HANDLE v29[2]; // [rsp+78h] [rbp-88h]
  unsigned int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v35[2]; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  bool *v37; // [rsp+E0h] [rbp-20h]
  char KeyValueInformation[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v39; // [rsp+ECh] [rbp-14h]
  int v40; // [rsp+F0h] [rbp-10h]
  unsigned int v41; // [rsp+F4h] [rbp-Ch]

  Handle = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  P = 0LL;
  v31 = 0;
  v6 = a4;
  v24 = 0;
  v27 = 0;
  v37 = a4;
  DeviceRegProp = -1073741772;
  v30 = 0;
  ValueName = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)DeviceRegProp;
  v11 = *(_BYTE *)(a1 + 680);
  v12 = L"ChildLocationPaths";
  v13 = -1073741772;
  v14 = v11;
  v28 = 0LL;
  *(_OWORD *)v29 = 0LL;
  if ( (v11 & 1) == 0 )
  {
    LODWORD(v28) = 2490404;
    v15 = v11;
    *((_QWORD *)&v28 + 1) = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v14 = *(_BYTE *)(a1 + 680);
      v13 = DeviceOverrideEntry;
      v15 = v14;
    }
    v11 = v15;
    if ( v13 >= 0 )
      goto LABEL_37;
    if ( a3 )
    {
      v13 = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v14 = v11;
    }
    if ( v13 >= 0 )
    {
LABEL_37:
      ZwClose(v29[0]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v11 = *(_BYTE *)(a1 + 680);
      v14 = v11;
    }
  }
  if ( (v11 & 1) == 0 || (v11 & 2) != 0 )
  {
    LODWORD(v28) = 1835034;
    *((_QWORD *)&v28 + 1) = L"LocationPaths";
    if ( a2 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a2);
      v11 = *(_BYTE *)(a1 + 680);
      v14 = v11;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_40;
    if ( a3 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v14 = v11;
    }
    if ( DeviceRegProp >= 0 )
LABEL_40:
      v11 = v14 | 2;
  }
  *(_BYTE *)(a1 + 680) = v11 | 1;
  if ( DeviceRegProp >= 0 )
    goto LABEL_47;
  v17 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v17 + 680) & 5) == 1 )
    return (unsigned int)DeviceRegProp;
  LODWORD(v28) = 2490404;
  *((_QWORD *)&v28 + 1) = L"ChildLocationPaths";
  DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v17 + 32), &Handle, 131097LL, v12);
  if ( DeviceRegProp < 0 )
    return (unsigned int)DeviceRegProp;
  v35[0] = 2;
  v18 = v35;
  v19 = 256;
  v35[1] = 3;
  v24 = 256;
  v20 = 256;
  do
  {
    if ( !Pool2 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v20, 1852403792LL);
      if ( !Pool2 )
      {
        v20 = v24;
        DeviceRegProp = -1073741670;
        v19 = v24;
        goto LABEL_28;
      }
      v19 = v24;
    }
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                      (_DWORD)Handle,
                      *v18,
                      (__int64)&v27,
                      (__int64)Pool2,
                      (__int64)&v24,
                      0);
    if ( DeviceRegProp == -1073741789 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, v24, 1852403792LL);
      v20 = v24;
      v19 = v24;
      if ( !Pool2 )
        DeviceRegProp = -1073741670;
    }
    else
    {
      v20 = v19;
      if ( DeviceRegProp >= 0 )
      {
        if ( v27 != 7 )
        {
          DeviceRegProp = -1073741823;
          v24 = v19;
          goto LABEL_28;
        }
        DeviceRegProp = PipFindDeviceOverrideEntry(Pool2);
        v20 = v19;
      }
      v24 = v20;
      v19 = v20;
      if ( DeviceRegProp >= 0 )
        break;
    }
LABEL_28:
    ++v4;
    ++v18;
  }
  while ( v4 < 2 );
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  ZwClose(Handle);
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *(_BYTE *)(v21 + 680);
  if ( (v22 & 1) == 0 )
  {
    if ( DeviceRegProp >= 0 )
      *(_BYTE *)(v21 + 680) = v22 | 4;
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
  }
  if ( DeviceRegProp >= 0 )
  {
    v4 = v30;
    v6 = v37;
LABEL_47:
    KeyHandle = 0LL;
    if ( LODWORD(v29[1]) != 1 )
      goto LABEL_51;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = v29[0];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 262146;
    ValueName.Buffer = (wchar_t *)L"*";
    ObjectAttributes.Attributes = 576;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
    {
LABEL_51:
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v31, v12);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0),
                                                                               DeviceRegProp < 0) )
      {
        if ( LODWORD(v29[1]) > 1 )
        {
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          KeyHandle = 0LL;
          ObjectAttributes.RootDirectory = v29[0];
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &ValueName;
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          ObjectAttributes.Attributes = 576;
          DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
      }
    }
    ZwClose(v29[0]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceRegProp = ZwQueryValueKey(
                        KeyHandle,
                        &ValueName,
                        KeyValuePartialInformation,
                        KeyValueInformation,
                        0x14u,
                        &ResultLength);
      if ( DeviceRegProp >= 0 )
      {
        if ( v39 == 4 && v40 == 4 )
          v4 = v41;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceRegProp;
}
