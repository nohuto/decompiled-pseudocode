/*
 * XREFs of ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0043A4C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 */

void __fastcall PostIAMPosChangedNotification(struct tagCVR *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 8) & 0x10000) != 0 && (*((_DWORD *)a2 + 80) & 0x200) != 0 )
    PostIAMShellHookMessage(31LL, *(_QWORD *)a1);
}
