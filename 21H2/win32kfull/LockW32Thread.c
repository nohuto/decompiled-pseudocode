/*
 * XREFs of LockW32Thread @ 0x1C007EAAC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxCancelTracking @ 0x1C00DCB94 (xxxCancelTracking.c)
 *     xxxQueryInformationThread @ 0x1C00FC914 (xxxQueryInformationThread.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0113468 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01DDA38 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01DDE1C (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01DE3A0 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 */

LONG_PTR __fastcall LockW32Thread(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax

  result = PushW32ThreadLock(a1, a2, DereferenceW32Thread);
  if ( a1 )
  {
    result = ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
