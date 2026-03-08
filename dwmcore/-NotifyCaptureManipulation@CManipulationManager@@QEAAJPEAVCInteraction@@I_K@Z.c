/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x18019B0C8
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x180209084 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INT.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800329F0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800334E8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x18019F4C8 (McTemplateU0ppqx_EventWriteTransfer.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r9
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v7 = *((_QWORD *)a2 + 14);
    LODWORD(v8) = 0;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    McTemplateU0ppqx_EventWriteTransfer((_DWORD)this, (_DWORD)a2, (_DWORD)a2, v8, a3, a4);
  }
  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x48uLL);
    *(_DWORD *)v11 = 6;
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v11 + 16), (__int64)a2);
    *(_DWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = a4;
    v15 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v14, v13, v11);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2C4u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x2B5u, 0LL);
  }
  return v17;
}
