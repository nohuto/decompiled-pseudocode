__int64 __fastcall VfZwAccessCheckAndAuditAlarm_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(a1[11], *a1);
    ViZwCheckUnicodeString(a1[9], *a1);
    ViZwCheckUnicodeString(a1[8], *a1);
    ViZwCheckVirtualAddress(a1[7], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}
