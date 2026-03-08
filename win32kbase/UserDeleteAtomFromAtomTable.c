/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C008ECA0
 * Callers:
 *     DeleteProperties @ 0x1C0072500 (DeleteProperties.c)
 *     RealInternalRemoveProp @ 0x1C008EB00 (RealInternalRemoveProp.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v4; // eax
  ULONG v5; // eax

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v4 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v4 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v4);
  UserSetLastError(v5);
  return a2;
}
