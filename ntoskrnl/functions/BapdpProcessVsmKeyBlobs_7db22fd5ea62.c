void __fastcall BapdpProcessVsmKeyBlobs(int a1)
{
  ULONG *Pool2; // rbx
  WCHAR *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // rcx
  unsigned int v6; // r15d
  PCWSTR *v7; // r14
  NTSTATUS v8; // eax
  int Data; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  bool IsStateSeparationEnabled; // al
  __int64 v13; // rdx
  WCHAR *v14; // rcx
  WCHAR v15; // ax
  WCHAR v16; // ax
  WCHAR *v17; // rax
  ULONG DataSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE DestinationString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v24[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v25[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v26; // [rsp+F8h] [rbp-10h]
  int v27; // [rsp+FCh] [rbp-Ch]
  int v28; // [rsp+100h] [rbp-8h]
  int v29; // [rsp+104h] [rbp-4h]
  const wchar_t *v30; // [rsp+108h] [rbp+0h]
  const wchar_t *v31; // [rsp+110h] [rbp+8h]
  int v32; // [rsp+118h] [rbp+10h]
  int v33; // [rsp+11Ch] [rbp+14h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v36; // [rsp+128h] [rbp+20h]
  const wchar_t *v37; // [rsp+130h] [rbp+28h]

  v24[0] = -937207777;
  DataSize[0] = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v25[0] = L"VsmIdkBlob";
  v24[1] = 1254716583;
  v25[1] = L"system32\\config\\VSMIDK";
  v24[2] = -1274918465;
  v30 = L"VsmHbkBlob";
  Pool2 = 0LL;
  v24[3] = 1271024649;
  v31 = L"system32\\config\\VSMHBK";
  v3 = 0LL;
  v26 = 1759588193;
  v36 = L"VsmLKeyBlob";
  v4 = 0;
  v27 = 1265287039;
  v37 = L"system32\\config\\VSMLKEY";
  IoStatusBlock = 0LL;
  v28 = 1264598702;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v29 = 1186665675;
  v32 = 646995484;
  v33 = 1215474106;
  DestinationString_8 = 0LL;
  v34 = -1787939400;
  v35 = -970048220;
  if ( (int)BapdGetISRegistryKey(&KeyHandle) < 0 )
    goto LABEL_13;
  v6 = 0;
  v7 = (PCWSTR *)v25;
  while ( 1 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    DataSize[0] = 0;
    if ( !a1 )
    {
      Data = BapdpQueryData(v5, &v24[8 * v6], 0LL, 0LL, DataSize);
      if ( Data == -1073741789 )
      {
        Pool2 = (ULONG *)ExAllocatePool2(64LL, DataSize[0], 0x64506142u);
        if ( Pool2 )
        {
LABEL_20:
          if ( (int)BapdpQueryData(v5, &v24[8 * v6], 0LL, Pool2, DataSize) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString_8, *v7);
            ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 3u, Pool2, DataSize[0]);
          }
          goto LABEL_8;
        }
      }
      else if ( Data >= 0 )
      {
        goto LABEL_20;
      }
      goto LABEL_8;
    }
    RtlInitUnicodeString(&DestinationString_8, *v7);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString_8, KeyValuePartialInformation, 0LL, 0, DataSize);
    if ( v8 == -1073741789 )
      break;
    if ( v8 >= 0 )
      goto LABEL_23;
LABEL_8:
    ++v6;
    v7 += 4;
    if ( v6 >= 3 )
      goto LABEL_9;
  }
  Pool2 = (ULONG *)ExAllocatePool2(64LL, DataSize[0], 0x64506142u);
  if ( !Pool2 )
    goto LABEL_8;
LABEL_23:
  if ( ZwQueryValueKey(KeyHandle, &DestinationString_8, KeyValuePartialInformation, Pool2, DataSize[0], DataSize) < 0 )
    goto LABEL_8;
  ZwDeleteValueKey(KeyHandle, &DestinationString_8);
  if ( v3 )
  {
    v3[v4] = 0;
LABEL_40:
    if ( RtlStringCchCatW(v3, 0x104uLL, v7[1]) >= 0 )
    {
      RtlInitUnicodeStringEx(&DestinationString_8, v3);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString_8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(
             &DestinationString,
             0x40100000u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             0,
             0,
             0x60u,
             0LL,
             0) >= 0 )
      {
        ZwWriteFile(DestinationString, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2 + 3, Pool2[2], 0LL, 0LL);
        ZwClose(DestinationString);
        DestinationString = 0LL;
      }
    }
    goto LABEL_8;
  }
  v10 = ExAllocatePool2(64LL, 0x208uLL, 0x64506142u);
  v3 = (WCHAR *)v10;
  if ( v10 )
  {
    v11 = -v10;
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v13 = 260LL;
    v14 = v3;
    if ( IsStateSeparationEnabled )
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v15 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\OSDataRoot\\Windows\\" + v11);
        if ( !v15 )
          break;
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v4 = 20;
    }
    else
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v16 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\SystemRoot\\" + v11);
        if ( !v16 )
          break;
        *v14++ = v16;
        --v13;
      }
      while ( v13 );
      v4 = 12;
    }
    v17 = v14 - 1;
    if ( v13 )
      v17 = v14;
    *v17 = 0;
    if ( v13 )
      goto LABEL_40;
  }
LABEL_9:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
