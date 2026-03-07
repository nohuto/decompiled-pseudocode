struct tagWND *__fastcall GetPwndFromPointerMsgId(unsigned __int64 a1)
{
  __int64 v2; // rax
  HWND v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = SGDGetUserSessionState(a1);
  if ( CTouchProcessor::GetPointerMessageInfo(*(CTouchProcessor **)(v2 + 3424), a1, 0, &v4, 0LL, 0LL, 0LL, 0LL) )
    return (struct tagWND *)ValidateHwnd(v4);
  else
    return 0LL;
}
