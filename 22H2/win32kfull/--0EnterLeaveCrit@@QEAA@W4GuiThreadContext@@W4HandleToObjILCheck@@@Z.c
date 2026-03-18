/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1C01A86EC
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C006F1B0 (NtUserUnhookWindowsHookEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterLeaveCrit::EnterLeaveCrit(__int64 a1, unsigned int a2, unsigned int a3)
{
  EnterCrit(a2, a3);
  return a1;
}
