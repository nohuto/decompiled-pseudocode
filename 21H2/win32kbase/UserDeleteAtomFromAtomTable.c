/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C009A8B0
 * Callers:
 *     RealInternalRemoveProp @ 0x1C002C720 (RealInternalRemoveProp.c)
 *     UserDeleteAtom @ 0x1C009A890 (UserDeleteAtom.c)
 *     DeleteProperties @ 0x1C0149E10 (DeleteProperties.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v4; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v4 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v4 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v4);
  UserSetLastError(v5, v6, v7, v8);
  return a2;
}
