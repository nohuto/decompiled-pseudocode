/*
 * XREFs of ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C0084760
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0081CF0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManager::UpdateNextConsumerPresentIdForUpdate(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rax
  struct DXGGLOBAL *Global; // rax

  v4 = *((_QWORD *)a2 + 8) + 1LL;
  if ( v4 > *((_QWORD *)this + 31) )
  {
    *((_QWORD *)this + 31) = v4;
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 360LL))(
      *((unsigned int *)this + 83),
      *((_QWORD *)this + 31),
      a3);
  }
}
