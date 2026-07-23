/*
 * XREFs of NtQueryOpenSubKeys @ 0x140868720
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x14066C648 (CmpSearchForOpenSubKeys.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  BOOLEAN v5; // r14
  NTSTATUS v6; // ebx
  char PreviousMode; // dl
  __int64 v8; // rcx
  PADAPTER_OBJECT v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG v13; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1A0h] BYREF
  int v16; // [rsp+50h] [rbp-198h]
  _OWORD v17[3]; // [rsp+58h] [rbp-190h] BYREF
  _OWORD v18[19]; // [rsp+90h] [rbp-158h] BYREF

  v16 = 0;
  memset(v17, 0, sizeof(v17));
  DmaAdapter = 0LL;
  memset(v18, 0, 0x128uLL);
  LODWORD(v18[6]) = -1;
  *((_QWORD *)&v18[9] + 1) = &v18[9];
  *(_QWORD *)&v18[9] = &v18[9];
  memset((char *)&v18[13] + 8, 0, 0x50uLL);
  v4 = 0;
  v5 = CmpAcquireShutdownRundown();
  if ( v5 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v8 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    v6 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           0LL,
           0x20019u,
           (__int64)CmKeyObjectType,
           PreviousMode,
           (__int64)v18,
           &DmaAdapter);
    if ( v6 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v9 = DmaAdapter;
      v6 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v6 >= 0 )
      {
        if ( ((__int64)v9->DmaOperations->MapTransferEx & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v17, v10, v11, v12);
          v13 = CmpSearchForOpenSubKeys((__int64)v9->DmaOperations, 0, 0LL);
          CmpDetachFromRegistryProcess((__int64)v17);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v13;
          v6 = 0;
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
  }
  else
  {
    v6 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v18, 0);
  if ( v5 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v6;
}
