/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C00862C0
 * Callers:
 *     RealInternalRemoveProp @ 0x1C0024880 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C0086040 (DeleteProperties.c)
 *     UserDeleteAtom @ 0x1C00862A0 (UserDeleteAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v4; // eax
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v4 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v4 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v4);
  UserSetLastError(v5, v6);
  return a2;
}
