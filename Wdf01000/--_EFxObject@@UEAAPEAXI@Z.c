/*
 * XREFs of ??_EFxObject@@UEAAPEAXI@Z @ 0x1C003F280
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxWaitLock *__fastcall FxObject::`vector deleting destructor'(FxWaitLock *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxWaitLock *v5; // rcx

  v3 = a2;
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxWaitLock *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
