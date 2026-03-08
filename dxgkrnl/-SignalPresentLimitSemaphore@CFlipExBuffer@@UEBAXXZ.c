/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C007DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C007E560 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(struct _KSEMAPHORE **this)
{
  if ( *((int *)this + 84) > 0 )
  {
    SignalPresentLimitSemaphore(this[41], 1);
    --*((_DWORD *)this + 84);
  }
}
