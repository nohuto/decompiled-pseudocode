/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180007AA4
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18003B060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180007B10 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180021D88 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180028374 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 49) + 72LL) || (*((_BYTE *)this + 280) & 0x40) != 0 )
  {
    *((_BYTE *)this + 280) &= ~0x40u;
    CButton::DeactivateTimeline(this);
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 288), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), v4);
  }
}
