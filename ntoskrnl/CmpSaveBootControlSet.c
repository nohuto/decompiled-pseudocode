/*
 * XREFs of CmpSaveBootControlSet @ 0x140A078D8
 * Callers:
 *     CmpAcceptBoot @ 0x14079A058 (CmpAcceptBoot.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x140414FD0 (ZwQuerySecurityObject.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1406B6498 (CmpRebuildKcbCache.c)
 *     CmpCleanupRollbackPacket @ 0x14074A888 (CmpCleanupRollbackPacket.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074C0F0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14074C150 (CmpTryAcquireKcbIXLocks.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpRetryBackOff @ 0x140A1BA24 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A1D3D0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140A1E748 (CmpCopySyncTree.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  _QWORD *v3; // rdi
  char v4; // r14
  ULONG_PTR *v5; // rsi
  struct _PRIVILEGE_SET *Pool; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  char v11; // r12
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r15
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r10
  int v30; // edx
  ULONG_PTR v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  int v34; // r9d
  ULONG_PTR v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  HANDLE v42; // rcx
  __int16 *v43; // rdx
  char v45; // [rsp+48h] [rbp-C0h]
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Length; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v52[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+118h] [rbp+10h] BYREF
  int *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  __int64 *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  char v63; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition = 0;
  KeyHandle = 0LL;
  memset(v52, 0, sizeof(v52));
  DestinationString = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0LL;
  LODWORD(v50) = 0;
  v4 = 0;
  Handle = 0LL;
  v54 = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  Pool = 0LL;
  Length = 0;
  v46 = 0;
  CmpInitializeDelayDerefContext(&v54);
  v45 = CmpAcquireShutdownRundown(v8, v7, v9);
  if ( !v45 )
  {
    v10 = -1073741431;
    goto LABEL_34;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, Length, 538987843LL);
      if ( Pool )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, Pool, Length, &Length) < 0 )
        {
          CmSiFreeMemory(Pool);
          Pool = 0LL;
        }
      }
    }
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)&v63;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    v11 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = Pool;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v10 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( Pool )
      CmSiFreeMemory(Pool);
    if ( v10 >= 0 )
    {
      v10 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v12, 0, (__int64)v52, 0LL);
      if ( v10 >= 0 )
      {
        v10 = CmObReferenceObjectByHandle((_DWORD)Handle, 131078, v13, 0, (__int64)&v47, 0LL);
        if ( v10 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = (_QWORD *)v52[0];
          v14 = CmpPerformKeyBodyDeletionCheck(v52[0], 0LL);
          v5 = (ULONG_PTR *)v47;
          while ( 1 )
          {
            v10 = v14;
            if ( v14 < 0 || (v10 = CmpPerformKeyBodyDeletionCheck(v5, 0LL), v10 < 0) )
            {
LABEL_27:
              v4 = 1;
              goto LABEL_34;
            }
            v17 = v5[1];
            LOBYTE(v15) = 1;
            v18 = CmpTryAcquireKcbIXLocks(v17, v15, v16, (__int64)&v52[1]);
            v10 = v18;
            if ( v18 == -1073741267 )
            {
              v11 = 1;
            }
            else if ( v18 < 0 )
            {
              goto LABEL_27;
            }
            v19 = CmpPrepareToInvalidateAllHigherLayerKcbs(v17, 0LL, &v52[1]);
            v10 = v19;
            if ( v19 == -1073741267 )
            {
              v11 = 1;
            }
            else if ( v19 < 0 )
            {
              goto LABEL_27;
            }
            v20 = CmpPrepareForSubtreeInvalidation(v17, 0, (__int64)&v52[1]);
            v10 = v20;
            if ( v20 != -1073741267 )
            {
              if ( v20 < 0 )
                goto LABEL_27;
              if ( !v11 )
                break;
            }
            CmpLogTransactionAbortedWithChildName(v17, 0LL, 0xCu, v21, v52[1]);
            CmpUnlockRegistry(v23, v22, v24, v25);
            v11 = 0;
            v10 = CmpAbortRollbackPacket((__int64)&v52[1], 0LL);
            if ( v10 < 0 )
              goto LABEL_34;
            CmpRetryBackOff(&v46, v26, v27);
            CmpCleanupRollbackPacket((__int64)&v52[1]);
            *(_OWORD *)&v52[1] = 0LL;
            CmpLockRegistryExclusive();
            v14 = CmpPerformKeyBodyDeletionCheck(v3, 0LL);
          }
          v47 = 8LL;
          CmpEnumerateAllHigherLayerKcbs(
            v17,
            (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
            (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
            (unsigned int)&v54,
            (__int64)&v47,
            1,
            1);
          CmpInvalidateSubtree(v17, 8, 0, (__int64)&v54, (unsigned int *)&v50);
          CmpAttachToRegistryProcess(&ApcState);
          v2 = 1;
          v28 = v3[1];
          v29 = *(_QWORD *)(v28 + 32);
          v30 = *(_DWORD *)(v28 + 40);
          if ( Disposition == 1 )
          {
            v31 = v5[1];
            v32 = 0;
            v33 = *(_QWORD *)(v31 + 32);
            v34 = *(_DWORD *)(v31 + 40);
          }
          else
          {
            v35 = v5[1];
            v32 = 1;
            v33 = *(_QWORD *)(v35 + 32);
            v34 = *(_DWORD *)(v35 + 40);
          }
          v10 = CmpCopySyncTree(v29, v30, v33, v34, 2, v32);
          CmpRebuildKcbCache(v5[1]);
          v4 = 1;
          goto LABEL_34;
        }
        v5 = (ULONG_PTR *)v47;
      }
      v3 = (_QWORD *)v52[0];
    }
  }
LABEL_34:
  CmpDrainDelayDerefContext((_QWORD **)&v54);
  if ( v4 )
    CmpUnlockRegistry(v37, v36, v38, v39);
  if ( v2 )
    CmpDetachFromRegistryProcess(&ApcState);
  CmpCleanupRollbackPacket((__int64)&v52[1]);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v42 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v45 )
    CmpReleaseShutdownRundown(v42, v40, v41);
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
    {
      v46 = v10;
      v43 = &word_1400364BE;
      goto LABEL_55;
    }
  }
  else if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
  {
    v43 = word_14003646A;
    v46 = v50;
LABEL_55:
    v47 = 0x1000000LL;
    v60 = 4LL;
    v59 = &v46;
    v62 = 8LL;
    v61 = &v47;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)v43, 0LL, 0LL, 4u, &v58);
  }
  return (unsigned int)v10;
}
