/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00FA9C0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E0CB0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EB67C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

bool __fastcall IsShellParticipatesInSizing(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v3; // al
  ShellWindowManagement *v4; // rcx
  unsigned int v5; // r8d
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax

  v3 = ShellWindowManagement::BehaviorEnabled(
         *(ShellWindowManagement **)(*((_QWORD *)a1 + 2) + 456LL),
         (const struct tagDESKTOP *)0x40,
         a3);
  LOBYTE(v6) = 0;
  if ( v3 && !ShellWindowManagement::BehaviorEnabled(v4, (const struct tagDESKTOP *)8, v5) )
  {
    v9 = *(_QWORD *)(v8 + 672);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == v7 && *(_DWORD *)(v9 + 324) != v6 )
        LOBYTE(v6) = 1;
    }
  }
  return v6;
}
