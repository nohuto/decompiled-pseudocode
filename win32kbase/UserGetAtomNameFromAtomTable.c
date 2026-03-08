/*
 * XREFs of UserGetAtomNameFromAtomTable @ 0x1C00BAE20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall UserGetAtomNameFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2, WCHAR *AtomName, int a4)
{
  int v4; // eax
  ULONG v6; // eax
  ULONG NameLength; // [rsp+58h] [rbp+20h] BYREF

  NameLength = 2 * a4;
  v4 = RtlQueryAtomInAtomTable(a1, a2, 0LL, 0LL, AtomName, &NameLength);
  if ( v4 >= 0 )
    return NameLength >> 1;
  v6 = RtlNtStatusToDosError(v4);
  UserSetLastError(v6);
  return 0LL;
}
