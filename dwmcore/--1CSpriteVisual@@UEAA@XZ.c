/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x1800EA204
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800EA1C0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18012F6FA (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180227308 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x18024EF70 (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  CDropShadow *DropShadow; // rbx

  *(_QWORD *)this = &CSpriteVisual::`vftable';
  if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    CDropShadow::RemoveVisualFromCache(DropShadow, this);
    CResource::UnRegisterNotifierInternal(this, DropShadow);
    CSpriteVisual::SetDropShadow(this, 0LL);
  }
  CVisual::~CVisual(this);
}
