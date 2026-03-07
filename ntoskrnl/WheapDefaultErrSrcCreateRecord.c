__int64 __fastcall WheapDefaultErrSrcCreateRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( *(_DWORD *)(a2 + 56) == 7 )
    return WheapCreateRecordFromGenericErrorData(a1, a2, a3, a4);
  else
    return 3221225474LL;
}
