/*
 * XREFs of ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18019B1E0
 * Callers:
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x180209128 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREP.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800329F0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800334E8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppq_EventWriteTransfer @ 0x18019F440 (McTemplateU0ppq_EventWriteTransfer.c)
 */

__int64 __fastcall CManipulationManager::NotifyCapturePointer(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v5 = *((_QWORD *)a2 + 14);
    LODWORD(v6) = 0;
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 16);
    McTemplateU0ppq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&MIDMANIPULATION_UPDATE_CAPTURE_CONTACT,
      (_DWORD)a2,
      v6,
      a3);
  }
  v7 = operator new(0x48uLL);
  v9 = (__int64)v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x48uLL);
    *(_DWORD *)v9 = 5;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v9 + 16), (__int64)a2);
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 24) = a3;
    v13 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v9);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x292u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v9);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x283u, 0LL);
  }
  return v15;
}
