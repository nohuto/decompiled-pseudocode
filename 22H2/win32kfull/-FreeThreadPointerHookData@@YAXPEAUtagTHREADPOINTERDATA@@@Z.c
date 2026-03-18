/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C5A18
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C009BA60 (xxxCleanupThreadPointerInputInfo.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C0153358 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1)
{
  __int64 v2; // rax

  v2 = SGDGetUserSessionState(a1);
  CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v2 + 3424), *((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1);
}
