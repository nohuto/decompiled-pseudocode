char __fastcall anonymous_namespace_::StoreIfChanged_D2DVector3_(__int64 a1, __int64 a2)
{
  char v2; // r9
  unsigned __int64 v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)a1 - *(_QWORD *)a2;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
    v3 = *(unsigned int *)(a1 + 8) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( v3 )
  {
    v2 = 1;
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  }
  return v2;
}
