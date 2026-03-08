/*
 * XREFs of CmpLogCheckpoint @ 0x140735720
 * Callers:
 *     CmpTransWriteLog @ 0x140734F84 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpStopRMLog @ 0x14074C3C4 (CmpStopRMLog.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  const CLFS_LSN *NextElement; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v12; // rbx
  void *v13; // rcx
  NTSTATUS v14; // eax
  CLFS_INFORMATION *v15; // rax
  CLFS_INFORMATION *v16; // rbx
  const CLFS_LSN *v18; // r14
  CLFS_CONTAINER_ID v19; // ebx
  int v20; // r8d
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-B0h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  CLFS_LSN plsnNext; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F0h] [rbp-10h] BYREF
  ULONG *v28; // [rsp+110h] [rbp+10h]
  int v29; // [rsp+118h] [rbp+18h]
  int v30; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0;
  *(_QWORD *)v22 = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  v6 = 120LL;
  plsnNext = (CLFS_LSN)CLFS_LSN_NULL_EXT[0];
  pcbInfoBuffer = 120;
  memset(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, v22, 0LL);
  if ( NextElement )
  {
    do
    {
      v18 = NextElement + 13;
      if ( !ClfsLsnInvalid(NextElement + 13) )
      {
        v19 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
        if ( ClfsLsnContainer(v18) == v19 )
        {
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegion();
          return 0LL;
        }
      }
      if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v18, &plsn) )
        plsn = *v18;
      NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, v22, 0LL);
    }
    while ( NextElement );
    v6 = (unsigned int)(v20 + 120);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v22[0] = v6;
  Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, v6, 538987843LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), Pool2, v22);
    ExFreePoolWithTag(v12, 0);
  }
  if ( v3 >= 0 )
  {
    v13 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v14 = ClfsWriteRestartArea(
            v13,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v14;
    if ( a3 )
    {
      if ( v14 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v22[0] = v6;
  v15 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, v6, 538987843LL);
  v16 = v15;
  if ( v15 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v15, v22);
    ExFreePoolWithTag(v16, 0);
  }
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    {
      v30 = 0;
      v28 = v22;
      v22[0] = v3;
      v29 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04328,
        (unsigned __int8 *)word_1400377AA,
        0LL,
        0LL,
        3u,
        &v27);
    }
  }
  return (unsigned int)v3;
}
