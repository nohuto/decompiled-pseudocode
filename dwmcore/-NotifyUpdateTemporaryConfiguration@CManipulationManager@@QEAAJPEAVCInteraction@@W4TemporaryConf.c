/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18019B344
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180209960 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800329F0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800334E8 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi

  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( !v9 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x343u, 0LL);
    return v19;
  }
  memset_0(v9, 0, 0x48uLL);
  *(_DWORD *)v11 = 8;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v11 + 16), a2);
  v13 = *(_BYTE *)(v11 + 64) & 0xFE;
  *(_DWORD *)(v11 + 40) = a4;
  *(_BYTE *)(v11 + 64) = a5 | v13;
  *(_DWORD *)(v11 + 44) = a3;
  *(_DWORD *)(v11 + 48) = 1;
  v16 = operator new(4uLL);
  if ( v16 )
  {
    *v16 = a6;
    *(_QWORD *)(v11 + 56) = v16;
    v17 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v11);
    v19 = v17;
    if ( v17 >= 0 )
      return v19;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x35Au, 0LL);
  }
  else
  {
    v16 = 0LL;
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x34Fu, 0LL);
  }
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
  if ( v16 )
    operator delete(v16);
  return v19;
}
