/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1C0109014 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0237100 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@PEAU_SHELL_WINDOWMANAGEMENT_CAL.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0237D20 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0236B90 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  v12 = 0LL;
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 280) )
    return 0;
  v3 = *(unsigned __int64 **)(v2 + 320);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v2 + 320);
  v10 = 0LL;
  v11 = 0LL;
  ThreadLock(v4, (__int64 *)&v10);
  v5 = 1;
  if ( xxxSendTransformableMessageTimeout(v3, 0x341u, 0LL, a1, 2u, 0x7D0u, (unsigned __int64 *)&v12, 1, 1) )
  {
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    ThreadUnlock1(v7, v6, v8);
    anonymous_namespace_::SeverWindowManagementConnectionToShell(v2);
  }
  if ( v12 != 1 )
    return 0;
  return v5;
}
