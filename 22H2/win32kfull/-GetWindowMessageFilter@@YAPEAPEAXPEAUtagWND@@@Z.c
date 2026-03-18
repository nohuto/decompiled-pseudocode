/*
 * XREFs of ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C004FA44
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C004F3FC (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C004F868 (_ChangeWindowMessageFilterEx.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00B7798 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01089D0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     NtUserPostMessage @ 0x1C011E4B0 (NtUserPostMessage.c)
 *     _PostMessageCheckIL @ 0x1C01B704C (_PostMessageCheckIL.c)
 * Callees:
 *     VWPLGetData @ 0x1C004FA84 (VWPLGetData.c)
 */

void **__fastcall GetWindowMessageFilter(struct tagWND *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v2 = VWPLGetData(*(_QWORD *)(*(_QWORD *)(v1 + 424) + 872LL), a1, &v4);
  return (void **)(v4 & -(__int64)(v2 != 0));
}
