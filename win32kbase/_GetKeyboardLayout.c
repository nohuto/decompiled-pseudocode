/*
 * XREFs of _GetKeyboardLayout @ 0x1C00827AC
 * Callers:
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     NtUserGetKeyboardLayout @ 0x1C0082780 (NtUserGetKeyboardLayout.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C0082864 (-IsWinstaLessSession@@YA_NXZ.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rax
  _QWORD **v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v1 = (HANDLE)a1;
  if ( IsWinstaLessSession() )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 13912) )
    {
      v7 = *(_QWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 13912);
      return *(_QWORD *)(v7 + 40);
    }
  }
  else
  {
    v6 = PtiCurrentShared(v3, v2, v4, v5);
    if ( (_DWORD)v1 )
    {
      v9 = (_QWORD **)(*((_QWORD *)v6 + 57) + 168LL);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 93)) == v1 )
        {
          v7 = *(i - 38);
          goto LABEL_4;
        }
      }
    }
    else
    {
      v7 = *((_QWORD *)v6 + 55);
LABEL_4:
      if ( v7 )
        return *(_QWORD *)(v7 + 40);
    }
  }
  return 0LL;
}
