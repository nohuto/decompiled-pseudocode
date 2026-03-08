/*
 * XREFs of ?Acquire@DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0041EDC
 * Callers:
 *     DxgkStartPnPStop @ 0x1C02BE5C0 (DxgkStartPnPStop.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTERSTOPRESETLOCKEXCLUSIVE::Acquire(DXGADAPTERSTOPRESETLOCKEXCLUSIVE *this)
{
  __int64 v2; // rbx

  if ( !*((_BYTE *)this + 8) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)this + 24LL));
    v2 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2 + 136, 0LL);
    *(_QWORD *)(v2 + 144) = KeGetCurrentThread();
    *((_BYTE *)this + 8) = 1;
  }
}
