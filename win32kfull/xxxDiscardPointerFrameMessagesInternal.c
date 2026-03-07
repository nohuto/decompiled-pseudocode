__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  int v2; // ecx
  HWND *v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1128LL), a1, 0LL, &v5, v4);
  if ( !ThreadPointerData )
  {
LABEL_6:
    v2 = 87;
    goto LABEL_7;
  }
  if ( v5 )
  {
    if ( (unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
      return 1LL;
    goto LABEL_6;
  }
  v2 = 5;
LABEL_7:
  UserSetLastError(v2);
  return 0LL;
}
