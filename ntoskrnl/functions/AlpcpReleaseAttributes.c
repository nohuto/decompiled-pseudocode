unsigned __int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2, 1);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    result = AlpcpReleaseViewAttribute(v3, 0);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4, 1);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( (v5 & 1) != 0 )
  {
    if ( v5 >= 4 && (v5 & 2) != 0 )
      result = ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
    a1[7] = 0LL;
  }
  return result;
}
