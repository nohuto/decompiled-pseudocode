/*
 * XREFs of AlpcpCreateSectionView @ 0x1407BA274
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1407B9EC0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1407BA080 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A344 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073C150 (AlpcpUnlockBlob.c)
 *     AlpcpCreateRegion @ 0x1407BA370 (AlpcpCreateRegion.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int Region; // ebx
  int View; // esi
  ULONG_PTR v10[4]; // [rsp+28h] [rbp-20h] BYREF

  v10[0] = 0LL;
  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(0LL);
  View = AlpcpCreateView(0LL, Object, v10);
  AlpcpUnlockBlob(0LL);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 44));
  AlpcpDereferenceBlobEx(0LL, 1);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v10[0];
  return 0LL;
}
