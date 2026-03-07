__int64 __fastcall IopRemovePagesRunsSort(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *a1;
  v3 = *a2;
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
