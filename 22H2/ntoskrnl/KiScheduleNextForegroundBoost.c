/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14030F47C
 * Callers:
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140258628 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_140C31F98);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31F90;
      v2 = qword_140C31F88 == (_QWORD)&qword_140C31F88;
      if ( *(__int64 **)qword_140C31F90 != &qword_140C31F88 )
        __fastfail(3u);
      *v1 = &qword_140C31F88;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31F90 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31F98);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31F48, 0LL, 0LL);
  }
}
