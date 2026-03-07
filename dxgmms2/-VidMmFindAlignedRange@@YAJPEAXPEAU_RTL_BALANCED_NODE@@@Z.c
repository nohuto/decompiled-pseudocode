__int64 __fastcall VidMmFindAlignedRange(_BYTE *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR ParentValue; // r9
  struct _RTL_BALANCED_NODE *v3; // r8
  struct _RTL_BALANCED_NODE *v4; // r11
  ULONG_PTR v5; // rbx
  _BYTE *v6; // r10
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  unsigned __int64 v8; // rcx

  ParentValue = a2[1].ParentValue;
  v3 = a2;
  v4 = a2[1].Children[1];
  v5 = *(_QWORD *)a1;
  v6 = a1;
  if ( ParentValue - (unsigned __int64)v4 < *(_QWORD *)a1 )
    return 0xFFFFFFFFLL;
  if ( LODWORD(a2[1].Children[0]) == 1 )
  {
    for ( i = (struct VIDMM_RECYCLE_RANGE *)a2[2].ParentValue;
          (*(_BYTE *)(*((_QWORD *)i + 9) + 132LL) & 1) != 0;
          i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      if ( i == (struct VIDMM_RECYCLE_RANGE *)v3[3].Children[0] )
        goto LABEL_6;
    }
    if ( v6[16] )
      return 0xFFFFFFFFLL;
  }
  else if ( (BYTE4(a2[3].Children[0][5].Right) & 1) == 0 && a1[16] )
  {
    return 0xFFFFFFFFLL;
  }
LABEL_6:
  v8 = ~(*((_QWORD *)v6 + 1) - 1LL) & ((unsigned __int64)v4 + *((_QWORD *)v6 + 1) - 1);
  if ( v8 >= (unsigned __int64)v4 && v8 < ParentValue && ParentValue - v8 >= v5 )
  {
    v3[2].Children[0] = (struct _RTL_BALANCED_NODE *)v8;
    return 0LL;
  }
  return 0xFFFFFFFFLL;
}
