__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  int v9; // ebx
  __int64 v11; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  __int64 i; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  _DWORD *v18; // rax
  unsigned __int16 Length; // ax
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  int v22; // eax
  int v23; // [rsp+34h] [rbp-8Dh]
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-89h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-79h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int16 v29[20]; // [rsp+98h] [rbp-29h] BYREF

  FileHandle = 0LL;
  v26 = 0LL;
  Destination = 0LL;
  v9 = a2;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v23 = HIDWORD(a2);
  IoStatusBlock = 0LL;
  if ( !KeGetCurrentIrql() )
  {
    if ( !a1
      || (v13 = *(_QWORD *)(a1 + 64)) == 0
      || *(_DWORD *)(v13 + 16) != 1953656900
      || (unsigned int)(*(_DWORD *)(v13 + 20) - 2) > 1 )
    {
      WdLogSingleEntry1(3LL, a1);
      return 3221225711LL;
    }
    v14 = *(_DWORD **)(v13 + 1288);
    if ( !v14 )
    {
LABEL_39:
      WdLogSingleEntry1(3LL, v23);
      return 3221225712LL;
    }
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
LABEL_10:
      if ( (unsigned int)i >= *v14 )
        goto LABEL_39;
      v16 = 0;
      v17 = v14[9 * i + 4];
      if ( v17 )
        break;
    }
    v18 = &v14[9 * i + 8];
    while ( *((_BYTE *)v18 - 12) != 0x84 || *(v18 - 1) != v9 || *v18 != v23 )
    {
      ++v16;
      v18 += 5;
      if ( v16 >= v17 )
      {
        i = (unsigned int)(i + 1);
        goto LABEL_10;
      }
    }
    if ( a3 )
      Length = a3->Length;
    else
      Length = 0;
    Destination.MaximumLength = Length + 80;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(Length + 80), 1953656900LL);
    if ( !Destination.Buffer )
    {
      LODWORD(v11) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      return (unsigned int)v11;
    }
    LODWORD(v11) = RESOURCE_HUB_STRING_PRINTF(v29, 0x22uLL, L"%0*I64x");
    if ( (int)v11 >= 0 )
      LODWORD(v11) = RESOURCE_HUB_UNICODE_STRING_PRINTF(
                       (__int64)&Destination,
                       L"%s%s",
                       L"\\Device\\RESOURCE_HUB\\",
                       v29);
    if ( (int)v11 >= 0 )
    {
      if ( a3 )
      {
        if ( *a3->Buffer != 92 )
          RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, a3);
      }
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
      v11 = v21;
      if ( v21 >= 0 )
      {
        v22 = DpiCreateSpbResourceRecord(v13, FileHandle, &v26);
        v11 = v22;
        if ( v22 >= 0 )
        {
          *a7 = v26;
LABEL_37:
          if ( Destination.Buffer )
            ExFreePoolWithTag(Destination.Buffer, 0);
          return (unsigned int)v11;
        }
      }
      v20 = v11;
    }
    else
    {
      v20 = (int)v11;
    }
    WdLogSingleEntry1(2LL, v20);
    goto LABEL_37;
  }
  LODWORD(v11) = -1073741811;
  WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
  return (unsigned int)v11;
}
