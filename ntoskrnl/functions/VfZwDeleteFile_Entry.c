__int64 __fastcall VfZwDeleteFile_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckObjectAttributes(v3[1], *v3);
  return result;
}
