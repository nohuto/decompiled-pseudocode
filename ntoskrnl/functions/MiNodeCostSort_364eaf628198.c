__int64 __fastcall MiNodeCostSort(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
