/*
 * XREFs of ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18003198C
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800317DC (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPD.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800329F0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800334E8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v23; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v13 = v11;
  if ( !v11 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2DFu, 0LL);
    return v21;
  }
  memset_0(v11, 0, 0x48uLL);
  *(_DWORD *)v13 = 7;
  v14 = v13[1];
  if ( v14 )
  {
    v13[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v13 + 2, a2);
  v13[7] = 0LL;
  *((_DWORD *)v13 + 12) = a5;
  *((_DWORD *)v13 + 10) = a3;
  *((_DWORD *)v13 + 11) = a4;
  if ( Size )
  {
    v17 = operator new(Size);
    v7 = v17;
    if ( !v17 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2ECu, 0LL);
      goto LABEL_11;
    }
    memcpy_0(v17, Src, Size);
    v13[7] = v7;
  }
  v19 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
  v21 = v19;
  if ( v19 >= 0 )
    return v21;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2F8u, 0LL);
LABEL_11:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v13,
    v23);
  if ( v7 )
    operator delete(v7);
  return v21;
}
