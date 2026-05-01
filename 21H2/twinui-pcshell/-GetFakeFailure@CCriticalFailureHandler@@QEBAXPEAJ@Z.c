/*
 * XREFs of ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18000E77C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1801C0450 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C22A0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1801C4A58 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1801C7D34 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801E44B0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x180315CE4 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180317960 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18031DCA0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1803284EC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803289C0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18032A890 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x180348AF1 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180354F38 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18049F4A8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804A04A0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1804A52D0 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

void __fastcall CCriticalFailureHandler::GetFakeFailure(CCriticalFailureHandler *this, int *a2)
{
  CCriticalFailureHandler *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v3) >= 0 )
  {
    switch ( (_DWORD)v3 )
    {
      case 2:
        *a2 = -2023406815;
        break;
      case 3:
        *a2 = -2023406814;
        break;
      case 4:
        *a2 = -2147418094;
        break;
      case 5:
        *a2 = -2147022986;
        break;
    }
  }
}
