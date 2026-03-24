/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C14A0
 * Callers:
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C003AD48 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DestroyThreadsMessages @ 0x1C00C1350 (DestroyThreadsMessages.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0109DE0 (EditionHandleAndPostKeyEvent.c)
 *     SuspendThreadQueue @ 0x1C0117410 (SuspendThreadQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011BF9C (MergeDeferredMessagesOfThreadOnQueue.c)
 *     SlowAppThreadInShellFrame @ 0x1C0124CD4 (SlowAppThreadInShellFrame.c)
 *     ProcessSuspendedEventMessage @ 0x1C0126488 (ProcessSuspendedEventMessage.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C01665F8 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0D5C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E106C (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     TryDetachShellFrame @ 0x1C01E1CA4 (TryDetachShellFrame.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10EC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB000 (NtUserGetRawInputBuffer.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C020875C (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C02088E0 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        __int64 a1,
        __int64 a2)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_QUEUE::getDLT(a1);
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
