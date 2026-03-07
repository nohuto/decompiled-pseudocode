__int64 __fastcall ValidateHbwndOwnedByCallingThread(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rbx

  v4 = ValidateHbwnd(a1, a2, a3, a4);
  v9 = v4;
  if ( v4 )
  {
    v10 = *(struct tagTHREADINFO **)(v4 + 16);
    if ( v10 != PtiCurrentShared(v6, v5, v7, v8) )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return v9;
}
