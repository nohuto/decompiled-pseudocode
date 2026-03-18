/*
 * XREFs of ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019B08
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     IsGetghsemEnableEUDCSupported @ 0x1C0019A08 (IsGetghsemEnableEUDCSupported.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvReleaseChangeDisplaySettingLocks(__int64 a1)
{
  _QWORD *v1; // rbx
  struct _ERESOURCE *v2; // rcx
  struct _ERESOURCE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", v1[11]);
  v2 = (struct _ERESOURCE *)v1[11];
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", v1[15]);
  v3 = (struct _ERESOURCE *)v1[15];
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", v1[10]);
  v4 = (struct _ERESOURCE *)v1[10];
  if ( v4 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion();
  }
  if ( (int)IsGetghsemEnableEUDCSupported() >= 0 )
  {
    v6 = qword_1C0294808;
    if ( qword_1C0294808 )
      v6 = (__int64 (__fastcall *)(_QWORD))qword_1C0294808(v5);
    EtwTraceGreLockReleaseSemaphore(L"GetghsemEnableEUDC()", v6);
    if ( qword_1C0294808 )
    {
      v8 = (struct _ERESOURCE *)qword_1C0294808(v7);
      if ( v8 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v8);
        PsLeavePriorityRegion();
      }
    }
  }
}
