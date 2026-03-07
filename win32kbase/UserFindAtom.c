__int64 __fastcall UserFindAtom(PWSTR AtomName)
{
  NTSTATUS v1; // eax
  ULONG v3; // eax
  USHORT Atom; // [rsp+38h] [rbp+10h] BYREF

  Atom = 0;
  v1 = RtlLookupAtomInAtomTable(UserAtomTableHandle, AtomName, &Atom);
  if ( (int)(v1 + 0x80000000) >= 0 && v1 != -1073741772 )
  {
    v3 = RtlNtStatusToDosError(v1);
    UserSetLastError(v3);
  }
  return Atom;
}
