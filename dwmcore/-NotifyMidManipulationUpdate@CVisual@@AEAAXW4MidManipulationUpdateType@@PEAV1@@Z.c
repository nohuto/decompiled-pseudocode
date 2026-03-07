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
