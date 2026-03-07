__int64 __fastcall VidSchGetDxgContext(__int64 a1)
{
  if ( !a1 || *(_DWORD *)(a1 + 904) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 56);
}
