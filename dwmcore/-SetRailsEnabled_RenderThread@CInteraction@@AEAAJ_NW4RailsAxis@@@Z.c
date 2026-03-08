/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800EFE18
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800EFDB0 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180209900 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800EFEB0 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct CManipulationManager *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(CComposition **)(a1 + 16);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v16);
  v10 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, 0x3E5u, 0LL);
  }
  else
  {
    LOBYTE(v9) = a2;
    updated = CManipulationManager::NotifyUpdateRails(v8, a1, v9, a3);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x3E7u, 0LL);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 272);
      if ( v14 )
      {
        LOBYTE(v12) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v14 + 72) + 72LL))(v14 + 72, v12, a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v10;
}
