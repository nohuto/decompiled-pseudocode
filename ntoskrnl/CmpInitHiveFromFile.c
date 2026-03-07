__int64 __fastcall CmpInitHiveFromFile(
        const UNICODE_STRING *a1,
        int a2,
        _QWORD *a3,
        _BYTE *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  char UnloadRundown; // r15
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ebx
  char v18; // r13
  int v19; // r14d
  int Hive; // eax
  ULONG_PTR v21; // rcx
  int v22; // ebx
  __int64 i; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  _BYTE v25[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v30; // [rsp+80h] [rbp-80h]
  HANDLE Handle[2]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v32[2]; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _QWORD *v35; // [rsp+B8h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-40h] BYREF
  __int128 FileInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+15Ch] [rbp+5Ch]
  wchar_t *Buffer; // [rsp+160h] [rbp+60h]
  _DWORD v46[2]; // [rsp+168h] [rbp+68h] BYREF

  v28 = 0;
  v26 = 0LL;
  UnloadRundown = 0;
  v33 = a9;
  v30 = a4;
  v35 = a3;
  v27 = a2;
  v34 = a6;
  FileInformation = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v32 = 0LL;
  if ( (unsigned int)dword_140C04328 > 4 && tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
  {
    v44 = 0;
    v46[1] = 0;
    v42 = v46;
    Buffer = a1->Buffer;
    v46[0] = a1->Length;
    v43 = 2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_140037A25, 0LL, 0LL, 4u, v41);
  }
  v14 = a2;
  v24 = (__int64)a10;
  v25[0] = *a4;
  for ( i = a6; ; i = v34 )
  {
    v29 = 0LL;
    v15 = CmpOpenHiveFiles(a1, v14, a5, &v28, v25, Handle, i, (__int64)&v29, v24);
    v16 = v15;
    if ( v15 < 0 )
    {
      SetFailureLocation((__int64)a10, 0, 28, v15, 16);
      goto LABEL_7;
    }
    if ( !UnloadRundown )
      break;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
      v16 = -1073741431;
LABEL_8:
      CmpReleaseHiveLoadUnloadRundown();
      goto LABEL_9;
    }
LABEL_21:
    v18 = v25[0];
    v19 = v25[0] == 0 ? 5 : 0;
    memset(a10, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v26,
             v19,
             v27,
             v28,
             0LL,
             (__int64)Handle,
             (__int64)a1,
             a5,
             0LL,
             0LL,
             v33,
             (__int64)a10);
    v16 = Hive;
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, Hive, 32);
      }
      else
      {
        if ( v19 )
        {
          if ( (*(_DWORD *)(v26 + 4112) & 0x800) != 0 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v22 = CmpFlushHive(v26, 0xCu);
            CmpDetachFromRegistryProcess(&ApcState);
            if ( v22 < 0 )
              SetFailureLocation((__int64)a10, 1, 28, v22, 48);
          }
        }
        *(_QWORD *)(v26 + 1848) = CmSiAllocateMemory(a1->Length, 0x624E4D43u);
        v21 = v26;
        if ( *(_QWORD *)(v26 + 1848) )
        {
          *(_WORD *)(v26 + 1840) = a1->Length;
          *(_WORD *)(v26 + 1842) = a1->Length;
          memmove(*(void **)(v26 + 1848), a1->Buffer, a1->Length);
          v21 = v26;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v21 + 64) + 4088LL) & 4) != 0 )
          CmpLogEvent(&REG_EVENT_SELFHEAL);
        if ( ZwQueryInformationFile(Handle[0], &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
          *(_QWORD *)(v26 + 4184) = v38;
        v16 = 0;
        *(_DWORD *)(v26 + 188) = HIDWORD(v29);
        *v35 = v26;
        *v30 = v18;
      }
LABEL_7:
      if ( !UnloadRundown )
        goto LABEL_9;
      goto LABEL_8;
    }
    ZwClose(Handle[0]);
    if ( Handle[1] )
      ZwClose(Handle[1]);
    if ( v32[0] )
      ZwClose(v32[0]);
    v14 = v27;
    v24 = (__int64)a10;
    v25[0] = *v30;
  }
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
    goto LABEL_21;
  v16 = -1073741431;
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( v32[0] )
    ZwClose(v32[0]);
  if ( (unsigned int)dword_140C04328 > 4 && tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
  {
    v44 = 0;
    v42 = &v27;
    v27 = v16;
    v43 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)qword_140037A50, 0LL, 0LL, 3u, v41);
  }
  return v16;
}
