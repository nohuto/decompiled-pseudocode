/*
 * XREFs of ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C031C184
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken(CIFlipPresentHistoryToken *this)
{
  if ( this )
    (**(void (__fastcall ***)(CIFlipPresentHistoryToken *, __int64))this)(this, 1LL);
}
