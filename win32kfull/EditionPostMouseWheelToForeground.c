__int64 __fastcall EditionPostMouseWheelToForeground(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        struct tagUIPI_INFO *a9)
{
  __int64 result; // rax
  int v14; // [rsp+88h] [rbp-1h] BYREF
  int v15; // [rsp+8Ch] [rbp+3h] BYREF
  __int64 v16; // [rsp+90h] [rbp+7h] BYREF
  struct tagQ *v17; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+A0h] [rbp+17h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v15 = 0;
  v14 = 0;
  v17 = (struct tagQ *)gpqForeground;
  result = AdjustPwndPtiPqForDelegation((__int64 *)&v17, &v18, (struct tagTHREADINFO **)&v16, a1, a8, &v15, &v14);
  if ( (_DWORD)result )
    return PostInputMessage(v17, 0LL, a1, a2, a3, a4, a5, a6, a7, a8, 0LL, a9, v15, v14, v16);
  return result;
}
