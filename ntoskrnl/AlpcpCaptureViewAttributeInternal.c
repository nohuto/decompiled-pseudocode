/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x140714E74
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x140714E20 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1409764A0 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcReferenceBlobByHandle @ 0x1406D1E94 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x140714FD0 (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1407155FC (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // ebp
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 || (*(_DWORD *)(a3 + 40) & 0xC000) == 0x8000 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8);
  }
  *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    return 3221225793LL;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    return 3221225480LL;
  v12 = AlpcReferenceBlobByHandle((_QWORD *)(v11 + 40), v9, AlpcSectionType);
  v13 = v12;
  if ( !v12 )
    return 3221225480LL;
  v14 = AlpcpLocateSectionView(v12, a1, v10, &BugCheckParameter2);
  if ( v14 >= 0 )
  {
    v15 = BugCheckParameter2;
    v14 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v14 < 0 )
      AlpcpDereferenceBlobEx(v15);
    else
      *(_QWORD *)(a4 + 40) = v15;
  }
  AlpcpDereferenceBlobEx(v13);
  return (unsigned int)v14;
}
