char __fastcall CMmcssTask::AreEqualMmTask(LPCWCH lpString1, LPCWCH lpString2)
{
  char v3; // cl
  int v5; // eax

  if ( lpString1 == lpString2 )
    return 1;
  v3 = 0;
  if ( lpString1 && lpString2 )
  {
    v5 = *((_DWORD *)lpString1 + 32);
    if ( v5 != *((_DWORD *)lpString2 + 32) || !v5 || *((_DWORD *)lpString1 + 33) != *((_DWORD *)lpString2 + 33) )
      return CompareStringOrdinal(lpString1, 64, lpString2, 64, 0) == 2;
    return 1;
  }
  return v3;
}
