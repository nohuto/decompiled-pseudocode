/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01C615C
 * Callers:
 *     NtUserPromotePointer @ 0x1C01D9BA0 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C02259C4 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6BCC (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

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
