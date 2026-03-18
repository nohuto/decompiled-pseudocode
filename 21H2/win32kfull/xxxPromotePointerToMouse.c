/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01EB108
 * Callers:
 *     NtUserPromotePointer @ 0x1C01FB480 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C023F5B4 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rdx
  unsigned int v2; // r11d
  HWND *v4; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1112LL), a1, 0LL, 0LL, v4);
  if ( ThreadPointerData )
    return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, v2);
  UserSetLastError(87LL, 0LL);
  return 0;
}
