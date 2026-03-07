__int64 __fastcall xxxSendPointerMessage(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v9; // ecx
  unsigned __int64 ThreadPointerData; // rax
  HWND *v12; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1152) )
  {
    v9 = 5;
LABEL_3:
    UserSetLastError(v9);
    return 0LL;
  }
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1128), a2, 0LL, 0LL, v12);
  if ( !ThreadPointerData )
  {
    v9 = 87;
    goto LABEL_3;
  }
  return xxxSendPointerMessageWorker(a3, a4, ThreadPointerData, a5, a6, a7);
}
