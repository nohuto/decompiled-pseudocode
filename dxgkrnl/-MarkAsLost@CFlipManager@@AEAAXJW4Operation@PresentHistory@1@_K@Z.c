/*
 * XREFs of ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008392C
 * Callers:
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0081450 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0081CF0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1C008243C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C008382C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083DDC (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083F6C (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 */

LONG __fastcall CFlipManager::MarkAsLost(__int64 a1, int a2, int a3, __int64 a4)
{
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  struct DXGGLOBAL *Global; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = *(CFlipManager::PresentHistory **)(a1 + 24);
  if ( v5 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
    *((_DWORD *)NextEntry + 20) = a2;
    *((_DWORD *)NextEntry + 10) = a3;
    *((_QWORD *)NextEntry + 2) = a4;
    RtlCaptureStackBackTrace(1u, 4u, (PVOID *)NextEntry + 6, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 344LL))(*(unsigned int *)(a1 + 332));
  return KeSetEvent(*(PRKEVENT *)(a1 + 320), 1, 0);
}
