/*
 * XREFs of SepSetTokenPackage @ 0x1406C7DF0
 * Callers:
 *     SepGetAnonymousToken @ 0x1402A509C (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 * Callees:
 *     RtlIsParentOfChildAppContainer @ 0x1406687C4 (RtlIsParentOfChildAppContainer.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
