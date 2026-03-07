bool __fastcall CheckAccessEx(int *a1, unsigned int *a2, __int64 a3)
{
  char v3; // r11
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int *v10; // rax

  v3 = a3;
  if ( !UIPrivelegeIsolation::fEnforce )
    return 1;
  v4 = *a1;
  v5 = *a2;
  if ( *a1 > (unsigned int)v5 )
    return 1;
  if ( v4 == (_DWORD)v5 )
  {
    a3 = (unsigned int)a1[1];
    v6 = a2[1];
    if ( (_DWORD)a3 == v6 || v6 == -1 || (_DWORD)a3 == -1 )
      return 1;
  }
  if ( !v3 || v4 != (_DWORD)v5 )
    return 0;
  v8 = a2[1];
  v9 = a1[1];
  v10 = (unsigned int *)SGDGetUserSessionState(a1, a2, a3, v5);
  return (unsigned __int8)SeIsParentOfChildAppContainer(*v10, v9, v8) != 0;
}
