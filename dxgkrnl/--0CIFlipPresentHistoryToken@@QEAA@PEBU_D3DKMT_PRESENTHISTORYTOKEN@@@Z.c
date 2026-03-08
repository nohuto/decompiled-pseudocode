/*
 * XREFs of ??0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C031C120
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0076058 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 */

CIFlipPresentHistoryToken *__fastcall CIFlipPresentHistoryToken::CIFlipPresentHistoryToken(
        CIFlipPresentHistoryToken *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  *(_OWORD *)this = 0LL;
  if ( a2->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    if ( this )
    {
      *(_QWORD *)this = &CIFlipPresentHistoryTokenRedirectedFlip::`vftable';
      *((_QWORD *)this + 1) = &a2->Token;
    }
  }
  else if ( a2->Model == D3DKMT_PM_FLIPMANAGER && this )
  {
    *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
    FlipManagerTokenObject::LockForWrite((char *)a2->Token.Flip.FenceValue, (struct CFlipManagerToken **)this + 1);
  }
  return this;
}
