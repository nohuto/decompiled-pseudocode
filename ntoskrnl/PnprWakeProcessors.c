/*
 * XREFs of PnprWakeProcessors @ 0x140A9AF9C
 * Callers:
 *     PnprEndMirroring @ 0x140A997C0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeResumeClockTimerSafe @ 0x14056D3B4 (KeResumeClockTimerSafe.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8C444 (KeRestoreMtrrBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140A99834 (PnprGetMillisecondCounter.c)
 */

__int64 PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(PnprContext + 33264))(*(_QWORD *)(PnprContext + 33168), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 33308) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  ((void (__fastcall *)(_QWORD, _QWORD))off_140C01AC0[0])(0LL, 0LL);
  KeResumeClockTimerSafe();
  ((void (__fastcall *)(__int64, _QWORD))off_140C01A98[0])(2LL, *(_QWORD *)(PnprContext + 33160));
  v2 = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 33280) = 10000 * (v2 - *(_QWORD *)(PnprContext + 33280));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    return off_140C01AF0[0]();
  return result;
}
