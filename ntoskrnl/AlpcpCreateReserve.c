/*
 * XREFs of AlpcpCreateReserve @ 0x140781384
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x140781290 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     AlpcpInsertResourcePort @ 0x1406A0BC8 (AlpcpInsertResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406D453C (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x1406D477C (AlpcpChargePagedPoolQuota.c)
 *     AlpcAddHandleTableEntry @ 0x140711FD4 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x140712334 (AlpcpEndInitialization.c)
 *     AlpcpAllocateMessage @ 0x140712E84 (AlpcpAllocateMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1407CBB50 (AlpcpAllocateBlob.c)
 *     AlpcpCaptureMessageData @ 0x1407CC930 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  _OWORD *Blob; // rax
  ULONG_PTR v7; // rdi
  struct _KPROCESS *Process; // r14
  int v9; // ebx
  ULONG_PTR v10; // rbx
  int v11; // eax
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (_OWORD *)AlpcpAllocateBlob(AlpcReserveType, 48LL);
  v7 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  *Blob = 0LL;
  Blob[1] = 0LL;
  Blob[2] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = AlpcpChargePagedPoolQuota((__int64)Process, 0x318uLL);
  if ( v9 >= 0 )
  {
    v9 = AlpcpAllocateMessage(&v17, a2);
    if ( v9 >= 0 )
    {
      ObfReferenceObjectWithTag(Process, 0x63706C41u);
      v10 = v17;
      *(_QWORD *)(v17 + 48) = Process;
      *(_QWORD *)(v7 + 24) = v10;
      *(_QWORD *)(v7 + 32) = a2;
      *(_QWORD *)(v10 + 96) = v7;
      v11 = AlpcpCaptureMessageData(*(_QWORD *)(v7 + 24), a2, 0LL);
      *(_DWORD *)(v7 + 40) = 1;
      v12 = v11;
      AlpcpReferenceBlob(v7);
      AlpcpUnlockMessage(v10);
      if ( v12 < 0 )
      {
LABEL_12:
        AlpcpDereferenceBlobEx(v7, 1);
        return (unsigned int)v12;
      }
      v13 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v12 = -1073741769;
        goto LABEL_12;
      }
      AlpcpReferenceBlob(v7);
      ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
      *(_BYTE *)(v7 - 32) |= 4u;
      v14 = Object[2] + 40;
      v18 = v7;
      *(_QWORD *)(v7 + 8) = v14;
      v15 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      *(_QWORD *)(v7 + 16) = v15;
      if ( v15 != -1 )
      {
        *(_QWORD *)v7 = Object;
        ObfReferenceObject(Object);
        AlpcpInsertResourcePort((__int64)Object, v7);
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *a3 = *(_QWORD *)(v7 + 16);
        AlpcpEndInitialization(v7);
        v12 = 0;
        goto LABEL_12;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *(_QWORD *)(v7 + 8) = 0LL;
      AlpcpEndInitialization(v7);
      AlpcpDereferenceBlobEx(v7, 2);
      return 3221225626LL;
    }
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
  }
  AlpcpDereferenceBlobEx(v7, 1);
  return (unsigned int)v9;
}
