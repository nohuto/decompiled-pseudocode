/*
 * XREFs of ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0077B28
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void DrvReleaseChangeDisplaySettingLocks(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  struct _ERESOURCE *v4; // rax
  __int64 v5; // rcx

  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v0);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v1);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v2);
  }
  v3 = qword_1C029B178;
  if ( qword_1C029B178 )
    v3 = (__int64 (*)(void))qword_1C029B178();
  EtwTraceGreLockReleaseSemaphore(L"GetghsemEnableEUDC()", v3);
  if ( qword_1C029B178 )
  {
    v4 = (struct _ERESOURCE *)qword_1C029B178();
    if ( v4 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v4);
      PsLeavePriorityRegion(v5);
    }
  }
}
