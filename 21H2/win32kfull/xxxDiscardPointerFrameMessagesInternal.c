/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01F041C
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C01F7C70 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1008 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F16AC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  HWND *v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL), a1, 0LL, &v7, v6);
  if ( !ThreadPointerData )
  {
LABEL_6:
    v4 = 87LL;
    goto LABEL_7;
  }
  if ( v7 )
  {
    if ( (unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
      return 1LL;
    goto LABEL_6;
  }
  v4 = 5LL;
LABEL_7:
  UserSetLastError(v4, v2, v3);
  return 0LL;
}
