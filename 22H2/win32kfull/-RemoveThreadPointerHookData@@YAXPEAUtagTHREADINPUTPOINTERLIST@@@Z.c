/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00FD664
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00FD5D0 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
 * Callees:
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0A00 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
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
