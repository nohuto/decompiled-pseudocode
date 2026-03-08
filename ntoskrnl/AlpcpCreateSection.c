/*
 * XREFs of AlpcpCreateSection @ 0x140712378
 * Callers:
 *     NtAlpcCreatePortSection @ 0x140711C20 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x1407829D0 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpInsertResourcePort @ 0x1406A0BC8 (AlpcpInsertResourcePort.c)
 *     MmCreateSection @ 0x140711DC0 (MmCreateSection.c)
 *     AlpcAddHandleTableEntry @ 0x140711FD4 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x140712334 (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1407CBB50 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, PVOID a5, ULONG_PTR *a6)
{
  int v6; // ebp
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  int v12; // edi
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+48h] [rbp-20h] BYREF

  v6 = a2;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(AlpcSectionType, 72LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v11 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v11 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)a5
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v11 + 64) = v11 + 56;
  *(_QWORD *)(v11 + 56) = v11 + 56;
  if ( a4 )
  {
    a5 = 0LL;
    v12 = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &a5, 0LL);
    *(_QWORD *)v11 = a5;
  }
  else
  {
    v17 = *(_QWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) ^ (*(_DWORD *)(v11 + 48) ^ (2 * v6)) & 2 | 1;
    v12 = MmCreateSection(v11, 983071LL, 0, &v17, 4, 0x8000000, 0LL, 0LL);
  }
  if ( v12 < 0 )
  {
LABEL_23:
    AlpcpDereferenceBlobEx(v11);
    return (unsigned int)v12;
  }
  v13 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    v12 = -1073741769;
    goto LABEL_23;
  }
  ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
  *(_BYTE *)(v11 - 32) |= 4u;
  AlpcpReferenceBlob(v11);
  if ( a3 )
  {
    v14 = *((_QWORD *)Object + 2) + 40LL;
    v18 = v11;
    *(_QWORD *)(v11 + 16) = v14;
    v15 = AlpcAddHandleTableEntry(v14, &v18);
    *(_QWORD *)(v11 + 24) = v15;
    if ( v15 == -1 )
    {
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v11 + 16) = 0LL;
      AlpcpEndInitialization(v11);
      AlpcpDereferenceBlobEx(v11);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v11 + 40) = Object;
  AlpcpInsertResourcePort((__int64)Object, v11);
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v11);
  *a6 = v11;
  return 0LL;
}
