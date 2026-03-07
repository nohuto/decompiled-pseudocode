__int64 __fastcall VfZwCreateSection_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckObjectAttributes(a1[4], *a1);
    return ViZwCheckVirtualAddress(a1[3], *a1);
  }
  return result;
}
