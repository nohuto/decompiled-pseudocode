__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  char v3; // r13
  wchar_t *v4; // r14
  HANDLE *v5; // rsi
  void *v6; // r15
  int inited; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  HANDLE v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  HANDLE v25; // rcx
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  char v28; // [rsp+5Ch] [rbp-ACh]
  char FileInformation[3]; // [rsp+5Dh] [rbp-ABh] BYREF
  int v30; // [rsp+60h] [rbp-A8h] BYREF
  STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  int v32[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37[54]; // [rsp+D8h] [rbp-30h] BYREF
  char v38; // [rsp+288h] [rbp+180h] BYREF

  v1 = a1;
  FileInformation[0] = 1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  P = 0LL;
  v27 = 0;
  DestinationString = 0LL;
  *(_QWORD *)v32 = 0LL;
  v30 = 0;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v37, 0, sizeof(v37));
  v2 = 23 * v1;
  v3 = 0;
  v28 = 0;
  v4 = CmpMachineHiveList[23 * v1 + 6];
  if ( !CmpDoIdleProcessing )
    return (unsigned int)-1073741431;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v38;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v2]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v5 = (HANDLE *)(v4 + 784);
  v6 = (void *)*((_QWORD *)v4 + 196);
  if ( v6 )
  {
    inited = CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1);
    if ( inited < 0 )
      goto LABEL_11;
    v28 = 1;
    Destination.Length -= 8;
    *v5 = 0LL;
    inited = CmpInitBackupHive(v4, CmpMachineHiveList[v2]);
    if ( inited < 0 )
      goto LABEL_11;
    CmpAttachToRegistryProcess(&ApcState);
    CmpLockRegistry(v9, v8, v10, v11);
    v3 = 1;
    HvLockHiveFlusherExclusive(v4);
    inited = HvAllocateOffsetArraysForHiveSnapshot(v4, &v27, v32, &v30);
    if ( inited < 0 )
      goto LABEL_11;
    v13 = *(_QWORD *)v32;
    inited = HvSnapshotHiveToOffsetArray(v4, v12, *(_QWORD *)v32);
    if ( inited < 0 )
      goto LABEL_11;
    HvUnlockHiveFlusherExclusive(v4);
    CmpUnlockRegistry(v15, v14, v16, v17);
    v3 = 0;
    CmpDetachFromRegistryProcess(&ApcState);
    inited = CmpWriteOffsetArrayToFile(v18, v27, v13, v30, *v5);
    CmpFreeOffsetArray((unsigned int)v27, v13);
    if ( inited < 0
      || (v19 = *v5,
          LOWORD(v27) = 0,
          ZwSetInformationObject((__int64)v19, 4LL),
          ZwClose(*v5),
          *v5 = 0LL,
          LOBYTE(v27) = 0,
          inited = CmpCmdHiveOpen((const UNICODE_STRING *)&Destination, 0, &v27, &P, 0x1190001u, 0, 0LL, 0LL, v37),
          inited < 0) )
    {
LABEL_11:
      if ( v3 )
      {
        HvUnlockHiveFlusherExclusive(v4);
        CmpUnlockRegistry(v22, v21, v23, v24);
        CmpDetachFromRegistryProcess(&ApcState);
      }
      if ( v28 )
      {
        v25 = *v5;
        if ( *v5 )
        {
          LOWORD(v27) = 0;
          ZwSetInformationObject((__int64)v25, 4LL);
          ZwClose(*v5);
          *v5 = 0LL;
        }
        inited = CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1);
        if ( inited >= 0 )
          *v5 = v6;
      }
    }
    else
    {
      v20 = P;
      *v5 = (HANDLE)*((_QWORD *)P + 193);
      v20[193] = 0LL;
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive(v20);
      CmpDetachFromRegistryProcess(&ApcState);
      ZwSetInformationFile(v6, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
      LOWORD(v27) = 0;
      ZwSetInformationObject((__int64)v6, 4LL);
      ZwClose(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
