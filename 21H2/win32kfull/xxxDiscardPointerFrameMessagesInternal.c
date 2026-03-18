/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01EAEBC
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C01F2690 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01EC128 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  int v3; // r8d
  struct tagTHREADINFO *v4; // r11
  __int64 v5; // rcx
  HWND *v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1112LL), a1, 0LL, &v8, v7);
  if ( !ThreadPointerData )
  {
LABEL_6:
    v5 = 87LL;
    goto LABEL_7;
  }
  if ( v8 != v3 )
  {
    if ( (unsigned int)xxxDiscardPointerWindowFrameMessages(v4, ThreadPointerData) )
      return 1LL;
    goto LABEL_6;
  }
  v5 = (unsigned int)(v3 + 5);
LABEL_7:
  UserSetLastError(v5, v2);
  return 0LL;
}
