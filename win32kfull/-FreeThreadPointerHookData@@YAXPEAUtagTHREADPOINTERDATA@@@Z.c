/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C6B78
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00D1B90 (xxxCleanupThreadPointerInputInfo.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C0146628 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
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
