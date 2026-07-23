/*
 * XREFs of CmpFlushBackupHive @ 0x140870F90
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1408714B0 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403F9F00 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1403FA5A0 (ZwSetInformationObject.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x14076D290 (RtlAppendStringToString.c)
 *     CmpFreeOffsetArray @ 0x140871328 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x14087137C (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087167C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x140876B2C (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408808A4 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r15d
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  wchar_t *v6; // rsi
  void *v7; // r14
  int inited; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  int v12; // ecx
  void *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  volatile signed __int32 *v17; // rbx
  void *v18; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  int v25[2]; // [rsp+68h] [rbp-A0h] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v27[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v31[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v32[432]; // [rsp+E8h] [rbp-20h] BYREF
  char v33; // [rsp+298h] [rbp+190h] BYREF

  v1 = a1;
  P = 0LL;
  v25[0] = 0;
  *(_QWORD *)v27 = 0LL;
  v25[1] = 0;
  DestinationString = 0LL;
  v2 = 0;
  *(_QWORD *)&Destination.Length = 0x800000LL;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  IoStatusBlock = 0LL;
  memset(v31, 0, sizeof(v31));
  memset(v32, 0, sizeof(v32));
  v5 = 25 * v1;
  Destination.Buffer = &v33;
  v6 = CmpMachineHiveList[v5 + 6];
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v5]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v7 = (void *)*((_QWORD *)v6 + 195);
  if ( v7 )
  {
    inited = CmpCmdRenameHive(v7, 0LL, 1);
    if ( inited >= 0 )
    {
      Destination.Length -= 8;
      *((_QWORD *)v6 + 195) = 0LL;
      inited = CmpInitBackupHive(v6, CmpMachineHiveList[v5]);
      if ( inited < 0 )
        goto LABEL_14;
      CmpAttachToRegistryProcess((__int64)v31, v9, v10, v11);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, v25, v27, &v25[1]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6 + 9);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v25[0];
        v3 = *(_QWORD *)v27;
        v4 = v25[1];
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((__int64)v31, 0);
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v12, v2, v3, v4, *((HANDLE *)v6 + 195));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v13 = (void *)*((_QWORD *)v6 + 195),
            ObjectInformation = 0,
            ZwSetInformationObject(v13, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 195)),
            *((_QWORD *)v6 + 195) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (const UNICODE_STRING *)&Destination,
                       0,
                       (__int64)&FileInformation,
                       (__int64)&P,
                       18415617,
                       0,
                       0LL,
                       0LL,
                       (__int64)v32),
            inited < 0) )
      {
LABEL_14:
        v18 = (void *)*((_QWORD *)v6 + 195);
        if ( v18 )
        {
          LOWORD(v24) = 0;
          ZwSetInformationObject(v18, ObjectHandleFlagInformation, &v24, 2u);
          ZwClose(*((HANDLE *)v6 + 195));
          *((_QWORD *)v6 + 195) = 0LL;
        }
        if ( (int)CmpCmdRenameHive(v7, 0LL, 1) >= 0 )
          *((_QWORD *)v6 + 195) = v7;
      }
      else
      {
        v17 = (volatile signed __int32 *)P;
        *((_QWORD *)v6 + 195) = *((_QWORD *)P + 192);
        *((_QWORD *)v17 + 192) = 0LL;
        CmpAttachToRegistryProcess((__int64)v31, v14, v15, v16);
        CmpDestroyHive(v17);
        KiUnstackDetachProcess((__int64)v31, 0);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v23) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v23, 2u);
        ZwClose(v7);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
