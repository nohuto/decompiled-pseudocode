__int64 __fastcall MiCombinePageSortByHash(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
