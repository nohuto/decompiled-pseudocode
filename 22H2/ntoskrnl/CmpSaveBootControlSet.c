/*
 * XREFs of CmpSaveBootControlSet @ 0x140867AD0
 * Callers:
 *     CmpAcceptBoot @ 0x14078D470 (CmpAcceptBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     RtlUnicodeStringPrintf @ 0x14036E45C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1403FC5A0 (ZwQuerySecurityObject.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14066D87C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpCleanupRollbackPacket @ 0x14071B8E8 (CmpCleanupRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x14071CD6C (CmpRebuildKcbCache.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076D874 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772784 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407729A0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A7CC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140875090 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408762A8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876570 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140878534 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  struct _DMA_ADAPTER *v3; // rsi
  char v4; // di
  struct _DMA_ADAPTER *v5; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // r15
  int v7; // ebx
  struct _LOOKASIDE_LIST_EX *v8; // r9
  char v9; // r12
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 DmaOperations; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  char v22; // bl
  unsigned __int8 *v23; // rdx
  BOOLEAN v25; // [rsp+48h] [rbp-C0h]
  ULONG v26; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER *v31[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v33; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v36[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  __int64 *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  char v42; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v31, 0, sizeof(v31));
  DestinationString = 0LL;
  v2 = 0;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  TransientPoolWithTag = 0LL;
  v33 = 0LL;
  Length[0] = 0;
  memset(v36, 0, sizeof(v36));
  v26 = 0;
  CmpInitializeDelayDerefContext(&v33);
  v25 = CmpAcquireShutdownRundown();
  if ( !v25 )
  {
    v7 = -1073741431;
    goto LABEL_33;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        Length[0],
                                                        0x20204D43u,
                                                        v8);
      if ( TransientPoolWithTag )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length[0], Length) < 0 )
        {
          CmSiFreeMemory(TransientPoolWithTag);
          TransientPoolWithTag = 0LL;
        }
      }
    }
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)&v42;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    v9 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
    if ( v7 >= 0 )
    {
      v7 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, v31, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, (struct _DMA_ADAPTER **)&v28, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = v31[0];
          v12 = CmpPerformKeyBodyDeletionCheck((__int64)v31[0], 0LL);
          v5 = (struct _DMA_ADAPTER *)v28;
          while ( 1 )
          {
            v7 = v12;
            if ( v12 < 0 || (v7 = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL), v7 < 0) )
            {
LABEL_27:
              v4 = 1;
              goto LABEL_33;
            }
            DmaOperations = (__int64)v5->DmaOperations;
            LOBYTE(v13) = 1;
            v16 = CmpTryAcquireKcbIXLocks(DmaOperations, v13, v14, (__int64)&v31[1]);
            v7 = v16;
            if ( v16 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_27;
            }
            v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(DmaOperations, 0LL, &v31[1]);
            v7 = v17;
            if ( v17 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v17 < 0 )
            {
              goto LABEL_27;
            }
            v18 = CmpPrepareForSubtreeInvalidation(DmaOperations, 0, (__int64)&v31[1]);
            v7 = v18;
            if ( v18 != -1073741267 )
            {
              if ( v18 < 0 )
                goto LABEL_27;
              if ( !v9 )
                break;
            }
            CmpLogTransactionAbortedForRollbackPacket(DmaOperations, 0xCu);
            CmpUnlockRegistry();
            v9 = 0;
            v7 = CmpAbortRollbackPacket((__int64)&v31[1], 0LL);
            if ( v7 < 0 )
              goto LABEL_33;
            CmpRetryBackOff(&v26);
            CmpCleanupRollbackPacket((__int64)&v31[1]);
            *(_OWORD *)&v31[1] = 0LL;
            CmpLockRegistryExclusive();
            v12 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
          }
          CmpInvalidateAllHigherLayerKcbs(DmaOperations, 8LL, 0LL, &v33);
          CmpInvalidateSubtree(DmaOperations, 8, 0, (__int64)&v33, &Disposition[1]);
          CmpAttachToRegistryProcess((__int64)v36, v19, v20, v21);
          v2 = 1;
          v22 = CmpCopySyncTree(v3->DmaOperations->AllocateAdapterChannel, 2, Disposition[0] != 1);
          CmpRebuildKcbCache((ULONG_PTR)v5->DmaOperations, (__int64)&v33);
          v4 = 1;
          if ( v22 )
            v7 = 0;
          else
            v7 = -1073741492;
          goto LABEL_33;
        }
        v5 = (struct _DMA_ADAPTER *)v28;
      }
      v3 = v31[0];
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext((_QWORD **)&v33);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v36);
  CmpCleanupRollbackPacket((__int64)&v31[1]);
  if ( v3 )
    HalPutDmaAdapter(v3);
  if ( v5 )
    HalPutDmaAdapter(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v25 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v26 = v7;
      v23 = (unsigned __int8 *)word_1400227CA;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v23 = (unsigned __int8 *)&byte_14002280F;
    v26 = Disposition[1];
LABEL_54:
    v28 = 0x1000000LL;
    v39 = 4LL;
    v38 = &v26;
    v41 = 8LL;
    v40 = &v28;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, v23, 0LL, 0LL, 4u, &v37);
  }
  return (unsigned int)v7;
}
