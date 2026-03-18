/*
 * XREFs of xxxSendPointerMessage @ 0x1C01EB770
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1C0203880 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSendPointerMessageWorker @ 0x1C01EB7E4 (xxxSendPointerMessageWorker.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendPointerMessage(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rcx
  unsigned __int64 ThreadPointerData; // rax
  int v11; // r11d
  HWND *v12; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1136) )
  {
    v8 = 5LL;
LABEL_3:
    UserSetLastError(v8, a2);
    return 0LL;
  }
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1112), a2, 0LL, 0LL, v12);
  if ( !ThreadPointerData )
  {
    v8 = 87LL;
    goto LABEL_3;
  }
  return xxxSendPointerMessageWorker(a3, v11, ThreadPointerData, a5, a6, a7);
}
