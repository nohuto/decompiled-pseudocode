__int64 __fastcall UserAddAtomToAtomTable(__int64 a1, WCHAR *a2, int a3)
{
  PRTL_ATOM_TABLE v3; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = UserAtomTableHandle;
  LOWORD(v8) = 0;
  v5 = RtlAddAtomToAtomTable(UserAtomTableHandle, a2, (PRTL_ATOM)&v8);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v3, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = (unsigned __int16)v8;
  if ( (_WORD)v8 )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(v3, v8);
      return (unsigned __int16)v8;
    }
  }
  return result;
}
