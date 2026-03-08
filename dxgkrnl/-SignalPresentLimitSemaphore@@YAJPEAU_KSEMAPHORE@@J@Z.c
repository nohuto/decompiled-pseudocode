/*
 * XREFs of ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C007E560
 * Callers:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C000B47C (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000BAE4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C007DE80 (-SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SignalPresentLimitSemaphore(struct _KSEMAPHORE *a1, LONG a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 <= 0 )
    return (unsigned int)-1073741811;
  else
    KeReleaseSemaphore(a1, 1, a2, 0);
  return v2;
}
