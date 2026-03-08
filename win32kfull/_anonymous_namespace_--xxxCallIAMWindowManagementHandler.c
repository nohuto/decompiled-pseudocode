/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C0220E14
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C002B660 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0220CBC (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C0220F00 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0221E40 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C009BA28 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C02206CC (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

struct tagWND *__fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(__int128 *a1, int a2)
{
  struct tagWND *result; // rax
  unsigned int v5; // ebx
  struct tagWND *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // r8
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  result = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = 0;
  v6 = result;
  if ( result )
  {
    v13 = 0LL;
    v14 = 0LL;
    ThreadLock(result, &v13);
    v15 = 0LL;
    if ( xxxSendTransformableMessageTimeout(v6, 0x341u, 0LL, a1, 2u, 0x7D0u, (unsigned __int64 *)&v15, 1, 1) )
    {
      ThreadUnlock1(v8, v7, v9);
    }
    else
    {
      ThreadUnlock1(v8, v7, v9);
      if ( !a2 )
        anonymous_namespace_::SeverWindowManagementConnectionToShell(v11, v10, v12);
    }
    LOBYTE(v5) = v15 == 1;
    return (struct tagWND *)v5;
  }
  return result;
}
