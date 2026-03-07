_BOOL8 __fastcall ValidateDoubleClick(const struct tagTAP_INFO *a1, unsigned int a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // rdi
  __int64 v7; // rax
  __int16 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  _BOOL8 result; // rax

  v4 = 0;
  v5 = a2;
  result = 0;
  if ( *((_WORD *)a1 + 4) )
  {
    if ( *(_QWORD *)a1 == gptiCurrent && *((_DWORD *)a1 + 5) == a3 )
    {
      LOBYTE(v4) = a4 != 0;
      if ( (*((_DWORD *)a1 + 6) != 0) == v4 )
      {
        v7 = SGDGetUserSessionState(a1);
        v8 = *((_WORD *)a1 + 4);
        v9 = v7;
        if ( v8 == *(_WORD *)(v7 + 24 * v5 + 16064) )
          return 1;
        v10 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v10 < 5 && v8 == *(_WORD *)(v9 + 24 * v10 + 16064) )
          return 1;
      }
    }
  }
  return result;
}
