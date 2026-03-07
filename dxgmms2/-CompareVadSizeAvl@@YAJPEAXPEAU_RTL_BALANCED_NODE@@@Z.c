__int64 __fastcall CompareVadSizeAvl(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *a1;
  v3 = (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
  if ( v2 == v3 )
    return 0LL;
  else
    return v2 < v3 ? -1 : 1;
}
