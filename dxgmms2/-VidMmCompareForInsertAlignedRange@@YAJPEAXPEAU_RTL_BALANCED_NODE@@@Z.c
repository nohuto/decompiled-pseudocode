__int64 __fastcall VidMmCompareForInsertAlignedRange(ULONG_PTR *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR v2; // rax
  struct _RTL_BALANCED_NODE *v4; // r8
  unsigned __int64 v5; // rdx

  v2 = a2[1].ParentValue - (unsigned __int64)a2[1].Children[1];
  if ( v2 < *a1 )
    return 0xFFFFFFFFLL;
  if ( v2 > *a1 )
    return 1LL;
  v4 = a2[2].Children[1];
  v5 = a1[1];
  if ( (unsigned __int64)v4 < v5 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned __int64)v4 > v5;
}
