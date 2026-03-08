/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C00BE980
 * Callers:
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C017BB80 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(struct _RTL_ATOM_TABLE *a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // ebx
  __int64 result; // rax
  ULONG v8; // eax
  RTL_ATOM v9[12]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = RtlAddAtomToAtomTableEx(a1, a2, v9, a4);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v6);
    v8 = RtlNtStatusToDosError(v6);
    UserSetLastError(v8);
  }
  result = v9[0];
  if ( v9[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v9[0]);
      return v9[0];
    }
  }
  return result;
}
