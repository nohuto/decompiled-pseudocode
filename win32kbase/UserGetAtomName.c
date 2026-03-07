__int64 __fastcall UserGetAtomName(RTL_ATOM a1, WCHAR *AtomName, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  ULONG v6; // eax
  ULONG NameLength; // [rsp+50h] [rbp+18h] BYREF

  NameLength = 2 * a3;
  v3 = RtlQueryAtomInAtomTable(UserAtomTableHandle, a1, 0LL, 0LL, AtomName, &NameLength);
  v4 = 0;
  if ( v3 < 0 )
  {
    v6 = RtlNtStatusToDosError(v3);
    UserSetLastError(v6);
  }
  else
  {
    return NameLength >> 1;
  }
  return v4;
}
