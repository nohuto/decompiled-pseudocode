/*
 * XREFs of ??1FxRegKey@@UEAA@XZ @ 0x1C0001910
 * Callers:
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0007930 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C00018D8 (--1FxPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxRegKey::~FxRegKey(FxRegKey *this)
{
  void *m_Key; // rcx

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  FxPagedObject::~FxPagedObject(this);
}
