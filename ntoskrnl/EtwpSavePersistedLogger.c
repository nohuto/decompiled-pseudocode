__int64 __fastcall EtwpSavePersistedLogger(unsigned int *a1, __int64 a2)
{
  unsigned int *v3; // rsi
  HANDLE v4; // r14
  int v5; // edi
  unsigned int v6; // r13d
  struct _MDL *v7; // r15
  __int64 v8; // r8
  __int64 Length; // r12
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  struct _MDL *v16; // rcx
  unsigned int v17; // esi
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  __int64 v20; // r11
  struct _MDL *v21; // r10
  unsigned int v22; // r13d
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // r9
  bool v26; // zf
  unsigned int v27; // eax
  _DWORD *v28; // rax
  _DWORD *v29; // rsi
  unsigned int v30; // eax
  unsigned int v31; // r11d
  __int64 v32; // rbx
  struct _MDL *v33; // r14
  _QWORD *v34; // rdx
  unsigned int v35; // r10d
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rcx
  _DWORD *Buffer; // rax
  void *v40; // rsi
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  char v43[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-A4h]
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v49; // [rsp+70h] [rbp-90h]
  PVOID v50; // [rsp+78h] [rbp-88h] BYREF
  PVOID MappingAddress; // [rsp+80h] [rbp-80h]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[8]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD FileInformation[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v60; // [rsp+120h] [rbp+20h]

  v56 = a2;
  v49 = a1;
  ByteOffset.QuadPart = 0LL;
  v3 = a1;
  v44 = 0;
  FileHandle = 0LL;
  v60 = 0LL;
  v42 = 0;
  v46 = 0;
  memset(FileInformation, 0, sizeof(FileInformation));
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  MappingAddress = 0LL;
  IoStatusBlock = 0LL;
  v50 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v58, 0, sizeof(v58));
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = v3[2];
  v53 = Length;
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_59;
  }
  MappingAddress = (PVOID)MmAllocateMappingAddressEx((unsigned int)Length, 0x4B777445u, 0);
  if ( !MappingAddress || (Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL), (v7 = Mdl) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_59;
  }
  Mdl->MdlFlags |= 2u;
  v10 = EtwpQueryPersistedMemory(v12, a2, &v50, &v44);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[3]));
    v14 = 0LL;
    v8 = 0LL;
    if ( v44 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)v50 + (unsigned int)v8) >> 40;
        if ( !v13 )
          break;
        v14 += v13;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v44 )
          goto LABEL_10;
      }
LABEL_25:
      v10 = -1072103376;
      goto LABEL_59;
    }
LABEL_10:
    if ( v14 << 12 != Length * v3[1] )
      goto LABEL_25;
    LOBYTE(v13) = 1;
    v43[0] = 0;
    v15 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v43, v13, 0, 1, 0LL);
    v4 = FileHandle;
    v10 = v15;
    if ( v15 < 0 )
      goto LABEL_59;
    LODWORD(v60) = 0x2000;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v10 = EtwpInitializeCompressedWriter((__int64)v58, Length, (__int64)v4);
    if ( v10 < 0 )
      goto LABEL_59;
    v16 = v7 + 1;
    v52 = 0;
    v17 = 0;
    v45 = 0;
    v18 = (unsigned int)Length >> 12;
    v44 = 0;
    v47 = (unsigned int)Length >> 12;
    if ( !v49[1] )
      goto LABEL_44;
    v19 = v52;
    while ( 1 )
    {
      if ( v18 )
      {
        v20 = v18;
        v21 = v16;
        v22 = v45;
        do
        {
          v23 = v50;
          v24 = v17 + 1;
          v21->Next = (struct _MDL *)(v17 + (*((_QWORD *)v50 + v22) & 0xFFFFFFFFFFLL));
          v17 = 0;
          v21 = (struct _MDL *)((char *)v21 + 8);
          v25 = v23[v22] >> 40;
          v26 = v24 == v25;
          if ( v24 != v25 )
            v17 = v24;
          v27 = v22 + 1;
          if ( !v26 )
            v27 = v22;
          v22 = v27;
          --v20;
        }
        while ( v20 );
        LODWORD(Length) = v53;
        v18 = v47;
        v45 = v27;
        v44 = v17;
      }
      v28 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
      v29 = v28;
      if ( *v28 != (_DWORD)Length )
        goto LABEL_24;
      v30 = v28[2] <= *v28 ? v28[2] : v28[1];
      v29[12] = v30;
      if ( v30 > (unsigned int)Length )
        break;
      if ( v30 > 0x48 )
      {
        if ( (_DWORD)Length != v30 )
          memset((char *)v29 + v30, 255, (unsigned int)Length - v30);
        if ( v19 )
          v10 = EtwpWriteBufferCompressed(v58, v29);
        else
          v58[1] += (unsigned int)Length;
      }
      v5 = v42;
LABEL_38:
      MmUnmapReservedMapping(v29, 0x4B777445u, v7);
      if ( v10 < 0 && !v19 )
      {
        v6 = v46;
        v4 = FileHandle;
        v3 = v49;
        goto LABEL_59;
      }
      ++v19;
      v17 = v44;
      if ( v19 >= v49[1] )
      {
        v4 = FileHandle;
LABEL_44:
        EtwpWriteRemainingCompressedData(v58, &v46, &v42);
        v31 = 0;
        if ( v18 )
        {
          v32 = v18;
          v33 = v7 + 1;
          do
          {
            v34 = v50;
            v35 = v17 + 1;
            v36 = v31 + 1;
            v33->Next = (struct _MDL *)(v17 + (*((_QWORD *)v50 + v31) & 0xFFFFFFFFFFLL));
            v33 = (struct _MDL *)((char *)v33 + 8);
            v37 = v34[v31] >> 40;
            v38 = v17 + 1;
            if ( v38 != v37 )
              v36 = v31;
            v17 = 0;
            v31 = v36;
            if ( v38 != v37 )
              v17 = v35;
            --v32;
          }
          while ( v32 );
          v4 = FileHandle;
        }
        Buffer = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
        v6 = v46;
        v40 = Buffer;
        v5 = v42;
        Buffer[34] |= 0x4000000u;
        v26 = Buffer[37] == 4;
        Buffer[11] = 3;
        v47 = v6 + 1;
        Buffer[35] = v6 + 1;
        if ( v26 )
          Buffer[93] += v5;
        else
          Buffer[95] += v5;
        v10 = ZwWriteFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        MmUnmapReservedMapping(v40, 0x4B777445u, v7);
        v3 = v49;
        if ( v10 >= 0 )
          v6 = v47;
        else
          LOBYTE(v5) = v5 + 1;
        goto LABEL_59;
      }
      v16 = v7 + 1;
    }
    v5 = v42;
LABEL_24:
    ++v5;
    v10 = -1073741306;
    v42 = v5;
    goto LABEL_38;
  }
LABEL_59:
  if ( v58[4] )
  {
    ExFreePoolWithTag((PVOID)v58[4], 0);
    v58[4] = 0LL;
  }
  if ( v58[5] )
  {
    ExFreePoolWithTag((PVOID)v58[5], 0);
    v58[5] = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  if ( MappingAddress )
    MmFreeMappingAddress(MappingAddress, 0x4B777445u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v56, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, v3[1], v6, v5, v10);
  return (unsigned int)v10;
}
