/*
 * XREFs of SepSetTokenPackage @ 0x140739590
 * Callers:
 *     SepGetAnonymousToken @ 0x1402B7BE0 (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 * Callees:
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9428 (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  void *Pool2; // rax
  void *v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !(unsigned __int8)RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  Pool2 = (void *)ExAllocatePool2(256LL, v5, 1767073107LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopySid(v5, Pool2, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
