char __fastcall tagCOMPOSITION_TARGET_ID::operator==(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // r9d
  int v4; // eax

  v2 = 0;
  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4] && a1[5] == a2[5] )
  {
    v3 = a1[6];
    v4 = a2[6];
    if ( v3 == v4 || !v3 || !v4 )
      return 1;
  }
  return v2;
}
