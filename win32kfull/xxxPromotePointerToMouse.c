int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned __int64 ThreadPointerData; // rbx
  __int64 v6; // rax
  HWND *v7; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1128LL), a1, 0LL, 0LL, v7);
  if ( ThreadPointerData )
  {
    v6 = SGDGetUserSessionState(v3);
    return CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(v6 + 3424), ThreadPointerData, a2);
  }
  else
  {
    UserSetLastError(87);
    return 0;
  }
}
