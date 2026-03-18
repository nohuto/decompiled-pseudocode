/*
 * XREFs of ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800F0AE0
 * Callers:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800F0A48 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031A34 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180032AE0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800335D8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x180034880 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateRails(__int64 a1, __int64 a2, char a3, int a4)
{
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi

  v7 = operator new(0x48uLL);
  v9 = (__int64)v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x48uLL);
    *(_DWORD *)v9 = 9;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v9 + 16), a2);
    v11 = *(_BYTE *)(v9 + 64) & 0xFD;
    *(_DWORD *)(v9 + 44) = a4;
    *(_BYTE *)(v9 + 64) = (2 * a3) | v11;
    v14 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v13, v12, v9);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x326u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v9);
    }
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x317u, 0LL);
  }
  return v16;
}
