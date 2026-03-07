__int64 __fastcall MiRegionAssignmentSort(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
