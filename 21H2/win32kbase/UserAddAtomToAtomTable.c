/*
 * XREFs of UserAddAtomToAtomTable @ 0x1C00B6F2C
 * Callers:
 *     UserAddAtom @ 0x1C00B6F10 (UserAddAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C0138B3C (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTable(__int64 a1, WCHAR *a2, int a3)
{
  PRTL_ATOM_TABLE v3; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v3 = UserAtomTableHandle;
  LOWORD(v9) = 0;
  v5 = RtlAddAtomToAtomTable(UserAtomTableHandle, a2, (PRTL_ATOM)&v9);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v3, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8);
  }
  result = (unsigned __int16)v9;
  if ( (_WORD)v9 )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(v3, v9);
      return (unsigned __int16)v9;
    }
  }
  return result;
}
