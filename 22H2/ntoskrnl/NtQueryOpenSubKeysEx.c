/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140868940
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x14066C648 (CmpSearchForOpenSubKeys.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  NTSTATUS v8; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rcx
  __int64 v11; // rcx
  size_t v12; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  PADAPTER_OBJECT v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  char *v18; // rdx
  signed __int64 v19; // r10
  unsigned int v20; // r9d
  char v22; // [rsp+40h] [rbp-1E8h]
  BOOLEAN v23; // [rsp+41h] [rbp-1E7h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1E0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1C8h]
  __int128 v27; // [rsp+70h] [rbp-1B8h]
  int v28; // [rsp+80h] [rbp-1A8h]
  _OWORD v29[3]; // [rsp+88h] [rbp-1A0h] BYREF
  _OWORD v30[19]; // [rsp+C0h] [rbp-168h] BYREF

  v6 = BufferLength;
  v28 = 0;
  memset(v29, 0, sizeof(v29));
  DmaAdapter = 0LL;
  memset(v30, 0, 0x128uLL);
  LODWORD(v30[6]) = -1;
  *((_QWORD *)&v30[9] + 1) = &v30[9];
  *(_QWORD *)&v30[9] = &v30[9];
  memset((char *)&v30[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0;
  v23 = CmpAcquireShutdownRundown();
  if ( !v23 )
  {
    v8 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v8 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v8 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v10 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v8 = ObReferenceObjectByNameEx(
         (__int64)TargetKey,
         0LL,
         0x20019u,
         (__int64)CmKeyObjectType,
         PreviousMode,
         (__int64)v30,
         &DmaAdapter);
  if ( v8 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v12 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v11, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v22 = 1;
      v14 = DmaAdapter;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v8 >= 0 )
      {
        if ( ((__int64)v14->DmaOperations->MapTransferEx & 0x40000) == 0 )
        {
LABEL_8:
          v8 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        LODWORD(v26) = 8;
        *((_QWORD *)&v27 + 1) = v12 + Size[1];
        *(_QWORD *)&v27 = v14;
        *(_QWORD *)((char *)&v26 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess((__int64)v29, v15, v16, v17);
        CmpSearchForOpenSubKeys((__int64)v14->DmaOperations, 0, (__int64)Size);
        CmpDetachFromRegistryProcess((__int64)v29);
        v8 = DWORD1(v26);
        CmpUnlockRegistry();
        v22 = 0;
        *RequiredSize = v26;
        v18 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v8 >= 0 )
        {
          v19 = v18 - (_BYTE *)Buffer;
          v20 = 0;
          if ( *(_DWORD *)v18 )
          {
            do
            {
              *(_QWORD *)&v18[24 * ++v20] -= v19;
              v18 = (char *)Size[1];
            }
            while ( v20 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v18, v12);
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_22:
  if ( v22 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v30, 0);
  if ( v23 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v8;
}
