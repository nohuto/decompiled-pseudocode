/*
 * XREFs of ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0081CF0
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0081E44 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008392C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C0084760 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall CFlipManager::ApplyUpdateToConsumer(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( *((_BYTE *)this + 32) )
  {
    return 128;
  }
  else
  {
    v5 = CEndpointResourceStateManager::ApplyIncrementalUpdate((CFlipManager *)((char *)this + 104), a2);
    v4 = v5;
    if ( v5 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v5, 21LL, *((_QWORD *)a2 + 8));
    else
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, a2, 1u);
  }
  return v4;
}
