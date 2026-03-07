__int64 __fastcall ST_STORE<SM_TRAITS>::StpKeyCompare(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 != *a2;
  else
    return 0xFFFFFFFFLL;
}
