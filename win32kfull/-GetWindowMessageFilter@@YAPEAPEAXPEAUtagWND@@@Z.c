/*
 * XREFs of ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CBBC4
 * Callers:
 *     NtUserPostMessage @ 0x1C0047F50 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A86C0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CB9E8 (_ChangeWindowMessageFilterEx.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00F9A30 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 * Callees:
 *     VWPLGetData @ 0x1C00CBC04 (VWPLGetData.c)
 */

void **__fastcall GetWindowMessageFilter(struct tagWND *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v2 = VWPLGetData(*(_QWORD *)(*(_QWORD *)(v1 + 424) + 848LL), a1, &v4);
  return (void **)(v4 & -(__int64)(v2 != 0));
}
