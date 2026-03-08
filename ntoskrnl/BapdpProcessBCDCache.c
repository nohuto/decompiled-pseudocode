/*
 * XREFs of BapdpProcessBCDCache @ 0x140B44668
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BcdOpenStoreFromFile @ 0x140A59704 (BcdOpenStoreFromFile.c)
 *     BcdSetSystemStore @ 0x140A5972C (BcdSetSystemStore.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessBCDCache(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *v2; // rbx
  void *v3; // rax
  __int64 v4; // rcx
  __int64 Pool2; // rax
  bool IsStateSeparationEnabled; // al
  WCHAR *v7; // rcx
  __int64 v8; // r8
  WCHAR v9; // ax
  WCHAR v10; // ax
  bool v11; // zf
  WCHAR *v12; // rax
  __int64 v13; // r8
  WCHAR *v14; // rax
  __int64 v15; // r9
  char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  signed __int64 v19; // r8
  __int16 v20; // r9
  char *v21; // rax
  int v22; // eax
  HANDLE FileHandle; // [rsp+68h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+27h] BYREF
  _DWORD v28[4]; // [rsp+C8h] [rbp+37h] BYREF

  v28[0] = 1171520182;
  v28[1] = 1334597971;
  v28[2] = 74817688;
  v28[3] = 1582782914;
  FileHandle = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( !ExpBcdCacheDataBuffer )
      return;
    Pool2 = ExAllocatePool2(256LL, 0x208uLL, 0x64506142u);
    v2 = (WCHAR *)Pool2;
    if ( Pool2 )
    {
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v7 = v2;
      v8 = 260LL;
      if ( IsStateSeparationEnabled )
      {
        do
        {
          if ( v8 == -2147483386 )
            break;
          v9 = *(WCHAR *)((char *)v7 + (char *)L"\\OSDataRoot\\Windows\\" - (char *)v2);
          if ( !v9 )
            break;
          *v7++ = v9;
          --v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          if ( v8 == -2147483386 )
            break;
          v10 = *(WCHAR *)((char *)v7 + (char *)L"\\SystemRoot\\" - (char *)v2);
          if ( !v10 )
            break;
          *v7++ = v10;
          --v8;
        }
        while ( v8 );
      }
      v11 = v8 == 0;
      v12 = v7 - 1;
      v13 = 260LL;
      if ( !v11 )
        v12 = v7;
      *v12 = 0;
      v14 = v2;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v15 = (260 - v13) & -(__int64)(v13 != 0);
      if ( v13 )
      {
        v16 = (char *)&v2[v15];
        v17 = 260 - v15;
        if ( 260 != v15 )
        {
          v18 = 2147483646LL;
          v19 = (char *)L"system32\\config\\BootBCD" - v16;
          do
          {
            if ( !v18 )
              break;
            v20 = *(_WORD *)&v16[v19];
            if ( !v20 )
              break;
            *(_WORD *)v16 = v20;
            --v18;
            v16 += 2;
            --v17;
          }
          while ( v17 );
        }
        v21 = v16 - 2;
        if ( v17 )
          v21 = v16;
        *(_WORD *)v21 = 0;
      }
      RtlInitUnicodeStringEx(&DestinationString, v2);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x40100000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x60u, 0LL, 0) >= 0 )
      {
        ZwWriteFile(
          FileHandle,
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          ExpBcdCacheDataBuffer,
          ExpBcdCacheDataBufferSize,
          0LL,
          0LL);
        ZwClose(FileHandle);
        FileHandle = 0LL;
        v22 = BcdOpenStoreFromFile(&DestinationString.Length, &v24);
        v1 = v24;
        if ( v22 >= 0 )
          BcdSetSystemStore(v24);
      }
    }
    goto LABEL_3;
  }
  if ( (unsigned int)BapdpQueryData(a1, v28, 0LL, 0LL, &ExpBcdCacheDataBufferSize) != -1073741789 )
  {
LABEL_3:
    if ( ExpBcdCacheDataBuffer )
    {
      ExFreePoolWithTag(ExpBcdCacheDataBuffer, 0);
      ExpBcdCacheDataBuffer = 0LL;
      ExpBcdCacheDataBufferSize = 0;
    }
    if ( v1 )
      BcdCloseStore(v1);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    return;
  }
  v3 = (void *)ExAllocatePool2(256LL, ExpBcdCacheDataBufferSize, 0x64506142u);
  ExpBcdCacheDataBuffer = v3;
  if ( v3 )
    BapdpQueryData(v4, v28, 0LL, v3, &ExpBcdCacheDataBufferSize);
}
