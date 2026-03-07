__int64 __fastcall VfZwQuerySymbolicLinkObject_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(a1[2], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
