/*
 * XREFs of ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBFDC (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CC08 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 */

__int64 __fastcall ControllerNavigationClientProxy::OnEnabledChanged(ControllerNavigationClientProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  *((_BYTE *)this + 80) = 0;
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::ClientStateChanged(ControllerNavigationManager, this);
  return 0LL;
}
