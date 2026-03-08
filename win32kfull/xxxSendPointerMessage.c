/*
 * XREFs of xxxSendPointerMessage @ 0x1C01C682C
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1C01E3ED0 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C68A8 (xxxSendPointerMessageWorker.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6BCC (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

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
