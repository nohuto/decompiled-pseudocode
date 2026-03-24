/*
 * XREFs of UserAddAtomEx @ 0x1C0081870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C0138B3C (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2)
{
  PRTL_ATOM_TABLE v2; // rdi
  int v4; // ebx
  __int64 result; // rax
  ULONG v6; // eax
  __int64 v7; // rdx
  RTL_ATOM v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = UserAtomTableHandle;
  v8 = 0;
  v4 = RtlAddAtomToAtomTableEx(UserAtomTableHandle, a1, &v8);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v2, v4);
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6, v7);
  }
  result = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v2, v8);
      return v8;
    }
  }
  return result;
}
