/*
 * XREFs of ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBFDC
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E730 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E760 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E7F0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E920 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011F9D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FE94 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801203B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180120E70 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180122B2C (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 */

struct ControllerNavigationManager *ISMStatics::GetControllerNavigationManager(void)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  return (struct ControllerNavigationManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                                + 23)
                                                                                              + 8LL)
                                                                                  + 40LL))(*((_QWORD *)BamoServerConnection
                                                                                           + 23) + 8LL);
}
