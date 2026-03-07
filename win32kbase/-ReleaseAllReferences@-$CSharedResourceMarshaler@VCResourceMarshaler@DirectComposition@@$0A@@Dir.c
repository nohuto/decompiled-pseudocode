LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::ReleaseAllReferences(
        __int64 a1)
{
  __int64 v2; // rcx
  LONG_PTR result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    result = ObfDereferenceObject((PVOID)(v2 - 24));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
