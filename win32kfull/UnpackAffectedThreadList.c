__int64 __fastcall UnpackAffectedThreadList(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(SGDGetUserSessionState(a1) + 16880);
  v3 = (_QWORD *)*v2;
  while ( v3 && v3 != v2 )
  {
    v4 = v3;
    v3 = (_QWORD *)v3[189];
    Win32FreePool(v4);
  }
  v5 = (_QWORD *)(SGDGetUserSessionState(v1) + 16880);
  v5[1] = v5;
  *v5 = v5;
  result = SGDGetUserSessionState(v6);
  *(_DWORD *)(result + 16896) = 0;
  return result;
}
