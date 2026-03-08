/*
 * XREFs of ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1C0038550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C0038CC8 (--1FxDeviceBase@@MEAA@XZ.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(FxDeviceBase *this, char a2)
{
  FxDeviceBase *v4; // rcx

  FxDeviceBase::~FxDeviceBase(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDeviceBase *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
