/*
 * XREFs of UserFindAtomFromAtomTable @ 0x1C00BA4F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall UserFindAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, WCHAR *a2)
{
  NTSTATUS v2; // eax
  ULONG v4; // eax
  USHORT Atom; // [rsp+40h] [rbp+18h] BYREF

  Atom = 0;
  v2 = RtlLookupAtomInAtomTable(a1, a2, &Atom);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -1073741772 )
  {
    v4 = RtlNtStatusToDosError(v2);
    UserSetLastError(v4);
  }
  return Atom;
}
