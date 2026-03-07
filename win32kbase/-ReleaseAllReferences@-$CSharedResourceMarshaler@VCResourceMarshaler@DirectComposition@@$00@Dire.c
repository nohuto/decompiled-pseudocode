LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    *(_DWORD *)(result + 32) = 2;
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 56) - 24LL));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
