__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2, unsigned int *a3)
{
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // r15
  volatile signed __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r8
  char v9; // al
  int v10; // r12d
  int v11; // eax
  bool v12; // r12
  int v13; // eax
  HANDLE v14; // rsi
  NTSTATUS updated; // r15d
  bool v16; // r15
  __int64 v17; // rdx
  bool v18; // zf
  void *v19; // r12
  unsigned int v20; // r13d
  __int128 v22; // xmm1
  char v23; // al
  UNICODE_STRING v24; // xmm1
  bool v25; // [rsp+40h] [rbp-79h]
  char v26; // [rsp+41h] [rbp-78h]
  unsigned int v27; // [rsp+44h] [rbp-75h]
  HANDLE FileHandle; // [rsp+48h] [rbp-71h] BYREF
  int v29; // [rsp+50h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_CLIENT_CONTEXT *v31; // [rsp+68h] [rbp-51h]
  unsigned int *v32; // [rsp+70h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK v34; // [rsp+88h] [rbp-31h] BYREF
  __int128 FileInformation; // [rsp+98h] [rbp-21h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-11h]
  __int64 v37; // [rsp+B8h] [rbp-1h]
  __int128 FsInformation; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+17h]

  v32 = a3;
  FileHandle = 0LL;
  v26 = 0;
  v31 = 0LL;
  v37 = 0LL;
  v27 = 0;
  ClientContext = 0LL;
  FileInformation = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) == 0 )
    return 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFC);
  if ( !*(_QWORD *)(a1 + 160) && !*(_QWORD *)(a1 + 192) )
    return 0LL;
  v6 = (volatile signed __int64 *)(a1 + 688);
  v7 = a1 + (*(_QWORD *)(a1 + 192) != 0LL ? 184LL : 152LL);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v8 = *(unsigned int *)(a1 + 296);
  else
    v8 = 0LL;
  EtwpExpandFileName(0LL, v7, v8, a1 + 136, *(_QWORD *)(a1 + 1096) == EtwpHostSiloState);
  v9 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
  v10 = *(_DWORD *)(a1 + 12);
  v25 = (v10 & 4) != 0;
  v11 = *(_DWORD *)(a1 + 816) >> 1;
  LOBYTE(v11) = (*(_DWORD *)(a1 + 816) & 2) != 0;
  v29 = v11;
  if ( a2 && *(_QWORD *)(a1 + 720) )
  {
    ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
    v31 = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
  }
  v12 = (v10 & 0x4000000) == 0;
  while ( 1 )
  {
    v39 = 0LL;
    FsInformation = 0LL;
    IoStatusBlock = 0LL;
    v13 = EtwpDelayCreate((__int64)&FileHandle, 0, v11, ClientContext);
    v14 = FileHandle;
    updated = v13;
    if ( v13 < 0 )
      goto LABEL_41;
    updated = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( updated < 0 )
      goto LABEL_41;
    v16 = v25;
    v27 = HIDWORD(v39);
    if ( !v25 && v12 && ((HIDWORD(v39) - 1) & *(_DWORD *)(a1 + 4)) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 && (*(_DWORD *)(a1 + 816) & 2) == 0 )
      {
        updated = -1073741306;
LABEL_41:
        v20 = v27;
LABEL_32:
        if ( v14 )
        {
          ZwClose(v14);
          if ( *(_QWORD *)(a1 + 800) && DestinationString.Buffer )
          {
            ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
            v24 = DestinationString;
            *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
            *(UNICODE_STRING *)(a1 + 152) = v24;
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
            KeAbPostRelease(a1 + 688);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
        goto LABEL_21;
      }
      v12 = 0;
      ZwClose(v14);
      v14 = 0LL;
      FileHandle = 0LL;
    }
    if ( v14 )
      break;
    LOBYTE(v11) = v29;
    ClientContext = v31;
  }
  v37 = 0x2000LL;
  FileInformation = 0LL;
  v36 = 0LL;
  ZwSetInformationFile(v14, &v34, &FileInformation, 0x28u, FileBasicInformation);
  if ( *(_QWORD *)(a1 + 800) )
    EtwpFinalizeHeader(a1, 0);
  else
    v26 = 1;
  v18 = *(_QWORD *)(a1 + 192) == 0LL;
  v19 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 800) = v14;
  if ( !v18 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
    v22 = *(_OWORD *)(a1 + 184);
    DestinationString = *(UNICODE_STRING *)(a1 + 152);
    *(_OWORD *)(a1 + 152) = v22;
    v23 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
    RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
    v16 = v25;
    v14 = FileHandle;
  }
  v20 = v27;
  LOBYTE(v17) = v16;
  updated = EtwpUpdateFileHeader(a1, v17, v27);
  if ( updated < 0 )
  {
    *(_QWORD *)(a1 + 800) = v19;
    goto LABEL_32;
  }
  if ( !v26 )
    EtwpSendSessionNotification(a1, 1u, 0);
  v14 = 0LL;
  FileHandle = 0LL;
  if ( v19 )
  {
    ZwClose(v19);
    goto LABEL_32;
  }
LABEL_21:
  if ( v32 )
    *v32 = v20;
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 184));
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)updated;
}
