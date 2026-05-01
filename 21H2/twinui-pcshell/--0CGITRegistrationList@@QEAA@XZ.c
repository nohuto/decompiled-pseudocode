/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x1804E6B90
 * Callers:
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x180213CE0 (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x180218B34 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x180351BC8 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x1803F1954 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180400504 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x18043CBA4 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180461798 (--0TabletModePositionerManager@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x18009134B (InitializeSRWLock_0.c)
 */

CGITRegistrationList *__fastcall CGITRegistrationList::CGITRegistrationList(CGITRegistrationList *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock_0((PSRWLOCK)this + 1);
  return this;
}
