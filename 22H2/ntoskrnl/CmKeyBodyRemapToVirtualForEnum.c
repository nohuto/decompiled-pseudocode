/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470
 * Callers:
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpHasKcbBeenMirrored @ 0x140314E28 (CmpHasKcbBeenMirrored.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x140345580 (KCBIsVirtualizable.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140640230 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1406854AC (CmpReparseToVirtualPath.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 *     CmVirtualKCBToRealPath @ 0x14086FB28 (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D21C (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, unsigned __int8 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v7; // r13
  struct _DMA_ADAPTER *v8; // rdi
  char v9; // r14
  char v10; // r15
  ULONG_PTR v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int AccessStateFromSubjectContext; // ebx
  __int64 v16; // rdx
  struct _DMA_ADAPTER **v17; // rsi
  int v18; // edx
  __int64 v19; // r9
  int v20; // eax
  char v23; // [rsp+41h] [rbp-BFh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A4h] [rbp-5Ch]
  __int128 v34; // [rsp+A8h] [rbp-58h]
  _OWORD v35[19]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v36[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v37[5]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v38[224]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = a3;
  v27 = a1;
  DestinationString = 0LL;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v29[1] = 0;
  v33 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  DmaAdapter = 0LL;
  memset(v36, 0, sizeof(v36));
  v8 = 0LL;
  memset(v35, 0, 0x128uLL);
  LODWORD(v35[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v35[9] + 1) = &v35[9];
  v9 = 0;
  *(_OWORD *)((char *)&v35[13] + 8) = 0LL;
  v23 = 0;
  *(_QWORD *)&v35[9] = &v35[9];
  v10 = 0;
  *(_OWORD *)((char *)&v35[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v35[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v35[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v35[17] + 8) = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !*(_WORD *)(v11 + 66) && (*(_DWORD *)(v7 + 48) & 0x10) == 0 )
  {
    if ( KCBIsVirtualizable(v11) )
    {
      v9 = 1;
LABEL_8:
      SeCaptureSubjectContext(&SubjectContext);
      if ( (unsigned __int8)CmpIsSystemEntity(a2) || v9 && !CmpHasKcbBeenMirrored(v11) )
      {
        AccessStateFromSubjectContext = 0;
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_42;
      }
      CmpAttachToRegistryProcess((__int64)v36, v12, v13, v14);
      CmpLockRegistry();
      CmpLockKcbShared(v11);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_26:
          CmpUnlockKcb(v11);
          goto LABEL_30;
        }
        if ( CmpReparseToVirtualPath(v11, v16, (__int64)&SubjectContext, &DestinationString) )
        {
          v4 = a3;
LABEL_16:
          CmpUnlockKcb(v11);
          CmpUnlockRegistry();
          v17 = (struct _DMA_ADAPTER **)v27;
          v18 = 8;
          LODWORD(v35[0]) = 8;
          if ( !v4 )
            v18 = 4104;
          *((_QWORD *)&v35[4] + 1) = *(_QWORD *)(*v27 + 56);
          LODWORD(v35[0]) = v18;
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            (unsigned int)&SubjectContext,
                                            (unsigned int)v37,
                                            (unsigned int)v38,
                                            v4,
                                            (__int64)CmKeyObjectType + 76);
          if ( AccessStateFromSubjectContext < 0 )
            goto LABEL_40;
          v20 = 1600;
          v23 = 1;
          if ( a2 != 1 )
            v20 = 576;
          v29[0] = 48;
          v32 = v20;
          v30 = 0LL;
          p_DestinationString = &DestinationString;
          v34 = 0LL;
          AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                            (int)v29,
                                            (int)v37,
                                            a3,
                                            v19,
                                            0,
                                            (__int64)v35,
                                            &DmaAdapter);
          if ( AccessStateFromSubjectContext < 0 )
          {
            v8 = DmaAdapter;
            if ( v10 )
              AccessStateFromSubjectContext = 0;
LABEL_31:
            if ( v8 )
              HalPutDmaAdapter(v8);
            if ( !v23 )
              goto LABEL_40;
            goto LABEL_39;
          }
          CmpLockRegistry();
          v8 = DmaAdapter;
          if ( !WORD1(DmaAdapter->DmaOperations->MapTransfer) )
          {
            CmpUnlockRegistry();
            if ( v9 )
            {
              *a4 = v8;
            }
            else
            {
              *v17 = v8;
              *a4 = v7;
            }
            AccessStateFromSubjectContext = 0;
LABEL_39:
            SeDeleteAccessState(v37);
LABEL_40:
            CmpDetachFromRegistryProcess((__int64)v36);
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_42;
          }
          if ( v10 )
            AccessStateFromSubjectContext = 0;
LABEL_30:
          CmpUnlockRegistry();
          goto LABEL_31;
        }
      }
      else if ( (int)CmVirtualKCBToRealPath(v11, &DestinationString) >= 0 )
      {
        goto LABEL_16;
      }
      AccessStateFromSubjectContext = 0;
      goto LABEL_26;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v11 + 184) & 0x1000000) != 0 )
    {
      v10 = 1;
      goto LABEL_8;
    }
  }
  AccessStateFromSubjectContext = 0;
LABEL_42:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  CmpCleanupParseContext(v35, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
