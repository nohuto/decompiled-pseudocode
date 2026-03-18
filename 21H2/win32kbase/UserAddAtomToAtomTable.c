/*
 * XREFs of UserAddAtomToAtomTable @ 0x1C00C4BBC
 * Callers:
 *     UserAddAtom @ 0x1C00C4BA0 (UserAddAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C01660B4 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTable(__int64 a1, WCHAR *a2, int a3)
{
  PRTL_ATOM_TABLE v3; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = UserAtomTableHandle;
  LOWORD(v11) = 0;
  v5 = RtlAddAtomToAtomTable(UserAtomTableHandle, a2, (PRTL_ATOM)&v11);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v3, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8, v9, v10);
  }
  result = (unsigned __int16)v11;
  if ( (_WORD)v11 )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(v3, v11);
      return (unsigned __int16)v11;
    }
  }
  return result;
}
