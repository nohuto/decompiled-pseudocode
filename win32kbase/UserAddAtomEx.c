/*
 * XREFs of UserAddAtomEx @ 0x1C00A62B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C017BB80 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2, unsigned int a3)
{
  PRTL_ATOM_TABLE v3; // rdi
  int v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  RTL_ATOM v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = UserAtomTableHandle;
  v8 = 0;
  v5 = RtlAddAtomToAtomTableEx(UserAtomTableHandle, a1, &v8, a3);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v3, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v3, v8);
      return v8;
    }
  }
  return result;
}
