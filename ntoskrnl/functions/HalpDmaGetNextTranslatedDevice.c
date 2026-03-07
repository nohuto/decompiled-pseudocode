__int64 __fastcall HalpDmaGetNextTranslatedDevice(__int64 ***a1, _QWORD *a2, _QWORD *a3, char a4)
{
  __int64 **v5; // rcx
  __int64 *v9; // rcx

  v5 = *a1;
  if ( v5 )
  {
LABEL_6:
    v9 = *v5;
    if ( v9 == &HalpDmaAdapterList )
    {
      *a1 = 0LL;
      if ( a2 )
        *a2 = 0LL;
      if ( a3 )
        *a3 = 0LL;
    }
    else
    {
      *a1 = (__int64 **)v9;
      if ( a2 )
        *a2 = v9[8];
      if ( a3 )
        *a3 = v9[9];
    }
    return 0LL;
  }
  if ( !a4 )
  {
    if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpDmaAdapterListLock) )
      return 3221225473LL;
    v5 = (__int64 **)&HalpDmaAdapterList;
    goto LABEL_6;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaAdapterListLock);
  return 0LL;
}
