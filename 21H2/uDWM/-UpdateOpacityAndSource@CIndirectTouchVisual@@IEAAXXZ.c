/*
 * XREFs of ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800AE37C
 * Callers:
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800ADAD0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADCD0 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADE5C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADFE0 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AE3C0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020A90 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CIndirectTouchVisual::UpdateOpacityAndSource(CImage **this)
{
  CVisual::SetOpacity((CVisual *)this, *((float *)this + 85));
  CImage::SetBitmapSource(this[47], *((struct CBitmapSource **)this[48] + *((unsigned int *)this + 86)));
}
