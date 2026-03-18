/*
 * XREFs of ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C00557D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0055720 (--1FxRequestMemory@@UEAA@XZ.c)
 */

FxRequestMemory *__fastcall FxRequestMemory::`vector deleting destructor'(
        FxRequestMemory *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *v5; // rcx

  v3 = a2;
  FxRequestMemory::~FxRequestMemory(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FX_POOL_TRACKER *)&this[-1].IFxMemory;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = (FX_POOL_TRACKER *)this;
    FxPoolFree(v5);
  }
  return this;
}
