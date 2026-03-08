/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140A15598
 * Callers:
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KCBNeedsVirtualImage @ 0x1402DD15C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6FC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCheckAdminAccess @ 0x140A16150 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x140A17264 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A18BC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByName @ 0x140AF2458 (CmObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v26; // [rsp+41h] [rbp-BFh]
  char v27; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  _OWORD v36[19]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v38[5]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v39[28]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v27 = a2;
  v31 = a1;
  v29 = 0LL;
  v26 = 0;
  DestinationString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v32 = 0LL;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v33 = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v34 = 0LL;
  DWORD2(v35) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  memset(v36, 0, 0x128uLL);
  LODWORD(v36[6]) = -1;
  *((_QWORD *)&v36[9] + 1) = &v36[9];
  *(_QWORD *)&v36[9] = &v36[9];
  memset((char *)&v36[13] + 8, 0, 0x50uLL);
  v30 = 0LL;
  CmpInitializeDelayDerefContext(&v32);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v9, v8, v10, v11);
  v12 = v7[1];
  CmpLockKcbExclusive(v12);
  if ( !KCBNeedsVirtualImage() )
  {
LABEL_13:
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_14;
  }
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( AccessStateFromSubjectContext < 0 )
  {
LABEL_14:
    CmpUnlockKcb(v12);
    CmpUnlockRegistry(v22, v21, v23, v24);
    goto LABEL_15;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v12, v13, a4, &DestinationString) )
  {
    if ( (*(_DWORD *)(v12 + 184) & 0x20) == 0 )
    {
      AccessStateFromSubjectContext = CmpCheckAdminAccess(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v12 + 88) + 32LL));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  CmpUnlockKcb(v12);
  CmpDrainDelayDerefContext((_QWORD **)&v32);
  CmpUnlockRegistry(v16, v15, v17, v18);
  LODWORD(v36[0]) = 8;
  *((_QWORD *)&v36[4] + 1) = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    v38,
                                    v39,
                                    a3,
                                    (_DWORD *)CmKeyObjectType + 19);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v33 + 1) = 0LL;
    v20 = 1600;
    LODWORD(v33) = 48;
    if ( v27 != 1 )
      v20 = 576;
    DWORD2(v34) = v20;
    *(_QWORD *)&v34 = &DestinationString;
    v35 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v33,
                                      (unsigned int)v38,
                                      a3,
                                      v19,
                                      0,
                                      (__int64)v36,
                                      (__int64)&v30);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v31 = v30;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SepDeleteAccessState((__int64)v38);
    SeReleaseSubjectContext(&v38[1]);
  }
LABEL_15:
  CmpCleanupParseContext(v36, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
