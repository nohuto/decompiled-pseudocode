char __fastcall CCD_SET_STRING_ID::IsSimilarTopology(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned int v5; // edx
  char v6; // di
  unsigned int v7; // ecx
  __int64 v8; // r9

  v2 = *((_WORD *)this + 16);
  if ( !v2 )
    return 0;
  v5 = *((unsigned __int16 *)a2 + 16);
  if ( v2 != (_WORD)v5 )
    return 0;
  v6 = 1;
  v7 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v7 + 4);
      if ( (_WORD)v8 || *(_WORD *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 4) )
        break;
      if ( ++v7 >= v5 )
        goto LABEL_7;
    }
    WdLogSingleEntry5(1LL, v7, this, v8, a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v7 + 4));
    return 0;
  }
LABEL_7:
  if ( !CCD_SET_STRING_ID::_TryToMapCloneGroups(this, a2) || !CCD_SET_STRING_ID::_TryToMapCloneGroups(a2, this) )
    return 0;
  return v6;
}
