/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C000B47C
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C000B430 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C007E560 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::ReleasePendingPresentLimits(CFlipExBuffer *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 84);
  if ( v1 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 41), v1);
    *((_DWORD *)this + 84) = 0;
  }
}
