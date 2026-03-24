/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00FD9B4
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00FD920 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxPointerCallHook @ 0x1C01F048C (xxxPointerCallHook.c)
 * Callees:
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0FC0 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  struct tagTHREADPOINTERDATA *v2; // rcx

  v2 = (struct tagTHREADPOINTERDATA *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    FreeThreadPointerHookData(v2);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
