/*
 * XREFs of ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C0089A30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1C00899EC (--1FxRelatedDevice@@UEAA@XZ.c)
 */

FxRelatedDevice *__fastcall FxRelatedDevice::`vector deleting destructor'(FxRelatedDevice *this, char a2)
{
  FxRelatedDevice *v4; // rcx

  FxRelatedDevice::~FxRelatedDevice(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxRelatedDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
