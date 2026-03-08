/*
 * XREFs of UserDeleteAtom @ 0x1C00AD6E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtom(RTL_ATOM a1)
{
  int v2; // ecx
  __int64 result; // rax
  ULONG v4; // eax

  if ( a1 <= (unsigned __int16)gatomLastPinned && a1 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v2 = RtlDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
  result = 0LL;
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    UserSetLastError(v4);
    return a1;
  }
  return result;
}
