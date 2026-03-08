/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E7FD8
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x18009A2D0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E7F90 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E80CC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18019CF0C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180279264 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, CVisual *a3)
{
  CInteraction *InteractionInternal; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  CComposition *v10; // rbx
  struct CManipulationManager *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a3 + 101) & 0x40) == 0 )
  {
    if ( a2 != 1 )
      return;
    InteractionInternal = CVisual::GetInteractionInternal(a3);
    if ( !InteractionInternal || !CInteraction::GetTotalNumContacts(InteractionInternal) )
      return;
    MicrosoftTelemetryAssertTriggeredNoArgs(v8, v7, v9);
  }
  v11 = 0LL;
  v10 = *(CComposition **)(a1 + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  if ( (int)CComposition::GetManipulationManager(v10, &v11) >= 0 )
    CManipulationManager::QueueMidManipulationUpdate(v11, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
}
