/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406852C0
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x140314E3C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpCheckAdminAccess @ 0x1405D9B08 (CmpCheckAdminAccess.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1406854AC (CmpReparseToVirtualPath.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F204 (CmpSearchKeyControlBlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871CD0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871DE8 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D21C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(struct _DMA_ADAPTER **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR DmaOperations; // rdi
  __int64 v15; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  BOOLEAN v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  struct _DMA_ADAPTER *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER **v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  _OWORD v34[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v35[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v36[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v37[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v27 = 0LL;
  v25 = a2;
  v29 = a1;
  v23 = 0;
  v24 = 0;
  DestinationString = 0LL;
  memset(v35, 0, sizeof(v35));
  v30 = 0LL;
  memset(v36, 0, sizeof(v36));
  memset(v37, 0, sizeof(v37));
  v7 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v34, 0, 0x128uLL);
  LODWORD(v34[6]) = -1;
  *((_QWORD *)&v34[9] + 1) = &v34[9];
  *(_QWORD *)&v34[9] = &v34[9];
  memset((char *)&v34[13] + 8, 0, 0x50uLL);
  v28 = 0LL;
  CmpInitializeDelayDerefContext(&v30);
  CmpAttachToRegistryProcess((__int64)v35, v9, v10, v11);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive(v13, v12);
    else
      CmpLockRegistry();
    DmaOperations = (ULONG_PTR)v8->DmaOperations;
    CmpLockKcbExclusive(DmaOperations);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_8:
      AccessStateFromSubjectContext = -1073741790;
LABEL_9:
      CmpUnlockKcb(DmaOperations);
      CmpUnlockRegistry();
      goto LABEL_10;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck((__int64)v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( (unsigned __int8)CmpReparseToVirtualPath(DmaOperations, v15, a4, &DestinationString) )
    {
      CmpUnlockKcb(DmaOperations);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(DmaOperations + 184) & 0x20) != 0 )
      goto LABEL_8;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(DmaOperations + 88) + 32LL),
                                      a4,
                                      &v23);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( !v23 )
      goto LABEL_8;
    LOBYTE(v18) = v7;
    v19 = CmpReplicateKeyToVirtual(DmaOperations, a4, v18, &v27);
    AccessStateFromSubjectContext = v19;
    if ( v19 != -1073741739 )
      break;
    CmpUnlockKcb(DmaOperations);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v19 < 0 )
    goto LABEL_9;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(DmaOperations + 88) + 32LL, a4, &v24);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_9;
  if ( v24 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(DmaOperations, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(DmaOperations, v20, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_9;
  }
  CmpUnlockKcb(DmaOperations);
  CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, v27, &v30);
LABEL_26:
  CmpDrainDelayDerefContext((_QWORD **)&v30);
  CmpUnlockRegistry();
  LODWORD(v34[0]) = 8;
  *((_QWORD *)&v34[4] + 1) = v8[3].DmaOperations;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v36,
                                    (unsigned int)v37,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v31 + 1) = 0LL;
    v22 = 1600;
    LODWORD(v31) = 48;
    if ( v25 != 1 )
      v22 = 576;
    DWORD2(v32) = v22;
    *(_QWORD *)&v32 = &DestinationString;
    v33 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName((int)&v31, (int)v36, a3, v21, 0, (__int64)v34, &v28);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v29 = v28;
      HalPutDmaAdapter(v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v36);
  }
LABEL_10:
  CmpCleanupParseContext(v34, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((__int64)v35);
  return (unsigned int)AccessStateFromSubjectContext;
}
