__int64 __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  bool v13; // zf
  __int64 *v14; // rax
  unsigned int v15; // [rsp+88h] [rbp+17h] BYREF
  __int64 v16; // [rsp+90h] [rbp+1Fh] BYREF
  struct tagWND *v17; // [rsp+98h] [rbp+27h] BYREF
  struct tagQ *v18; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned __int64 v19; // [rsp+F0h] [rbp+7Fh] BYREF

  result = SGDGetUserSessionState(a1);
  v9 = (_QWORD *)(result + 16352);
  v10 = *(_QWORD **)(result + 16352);
  if ( !a4 )
  {
    result = PHIDTtoPT(a1);
    a3 = (int)result;
  }
  while ( v10 != v9 )
  {
    v11 = *(v10 - 2);
    v12 = *(_QWORD *)(v11 + 16);
    if ( a4 )
    {
      if ( a2 == 568 && a3 - 1 <= 1 )
      {
        result = *(unsigned int *)SGDGetUserSessionState(v11);
        v13 = **(_DWORD **)(*(_QWORD *)(v12 + 456) + 40LL) == (_DWORD)result;
      }
      else
      {
        result = grpdeskRitInput;
        v13 = *(_QWORD *)(v12 + 456) == grpdeskRitInput;
      }
      if ( v13 )
      {
        v14 = (__int64 *)*(v10 - 2);
        v15 = 0;
        LODWORD(v19) = 0;
        v17 = (struct tagWND *)v14;
        v16 = v14[2];
        v18 = *(struct tagQ **)(v16 + 432);
        result = AdjustPwndPtiPqForDelegation(
                   (__int64 *)&v18,
                   (__int64 *)&v17,
                   (struct tagTHREADINFO **)&v16,
                   a2,
                   0LL,
                   &v15,
                   (int *)&v19);
        if ( (_DWORD)result )
          result = PostInputMessage(
                     v18,
                     v17,
                     a2,
                     a3,
                     *(_QWORD *)(a1 + 784),
                     0,
                     0LL,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     0LL,
                     v15,
                     v19,
                     v16);
      }
    }
    else if ( *((_DWORD *)v10 - 2) )
    {
      result = grpdeskRitInput;
      if ( *(_QWORD *)(v12 + 456) == grpdeskRitInput )
        result = PostMessage(v11, a2, a3, *(__int128 **)(a1 + 784));
    }
    v10 = (_QWORD *)*v10;
  }
  return result;
}
