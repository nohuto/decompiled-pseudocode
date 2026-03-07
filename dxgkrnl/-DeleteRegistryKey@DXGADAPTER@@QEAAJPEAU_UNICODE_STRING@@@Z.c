__int64 __fastcall DXGADAPTER::DeleteRegistryKey(DXGADAPTER *this, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  int appended; // eax
  int inserted; // eax
  const wchar_t *v8; // r9
  int v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v14; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v16[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+C0h] [rbp-40h] BYREF
  char v20; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&v14.Length = 34078720LL;
  v2 = 0;
  v15[1] = v15;
  v15[0] = v15;
  v16[1] = v16;
  v16[0] = v16;
  v14.Buffer = (wchar_t *)&v20;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry1(4LL, 12557LL);
  }
  else
  {
    RtlUnicodeStringCopy(&v14, a2);
    LODWORD(v3) = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v15, &v14);
    while ( (_QWORD *)v15[0] != v15 )
    {
      DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v15, &v14);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v14;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v3 = v4;
      if ( v4 < 0 )
      {
LABEL_15:
        WdLogSingleEntry1(2LL, v3);
        v8 = L"Failed to open Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_25;
      }
      ResultLength = 0;
      v5 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
      v3 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(2LL, v5);
        v8 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
        goto LABEL_25;
      }
      appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys((DXG_REGISTRY_KEY_LIST *)v15, KeyHandle, &KeyInformation, &v14);
      v3 = appended;
      if ( appended < 0 )
      {
        WdLogSingleEntry1(2LL, appended);
        v8 = L"Failed to append sub keys for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_25;
      }
      inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v16, &v14);
      v3 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry1(2LL, inserted);
        v8 = L"Failed to insert RegPath to RegKeyList for DeleteRegistryKeys (status = 0x%I64x).";
LABEL_25:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v3, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_26;
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    while ( (_QWORD *)v16[0] != v16 )
    {
      v9 = DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v16, &v14);
      v3 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        v8 = L"Failed to read next registry path for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_25;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v14;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v3 = v10;
      if ( v10 < 0 )
        goto LABEL_15;
      v11 = ZwDeleteKey(KeyHandle);
      v3 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        v8 = L"Failed to delete Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_25;
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
LABEL_26:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    v2 = v3;
  }
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v16);
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v15);
  return v2;
}
