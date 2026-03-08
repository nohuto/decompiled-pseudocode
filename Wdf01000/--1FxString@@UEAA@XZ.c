/*
 * XREFs of ??1FxString@@UEAA@XZ @ 0x1C004F2A8
 * Callers:
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C004F2E0 (--_GFxString@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxString::~FxString(FxString *this, unsigned int a2, unsigned int a3)
{
  wchar_t *Buffer; // rcx

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  FxObject::~FxObject(this, a2, a3);
}
