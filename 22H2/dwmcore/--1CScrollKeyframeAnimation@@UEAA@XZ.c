/*
 * XREFs of ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18026F104
 * Callers:
 *     ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x180265DC0 (--_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x180266300 (--_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x18026F150 (--_ECScrollKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E12E0 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CScrollKeyframeAnimation::~CScrollKeyframeAnimation(CScrollKeyframeAnimation *this)
{
  *((_QWORD *)this + 73) = 0LL;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 92);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 82);
  CKeyframeAnimation::~CKeyframeAnimation(this);
}
