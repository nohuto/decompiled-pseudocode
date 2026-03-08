/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00CE230 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0017690 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, int a2)
{
  __int64 v4; // rsi
  int v5; // ebp
  HSEMAPHORE v6; // rax
  int v7; // edx
  int v8; // ecx
  HSEMAPHORE v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // rax
  unsigned int v11; // edi
  struct _ERESOURCE *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  HSEMAPHORE *v20; // [rsp+60h] [rbp-38h] BYREF
  _DWORD v21[4]; // [rsp+68h] [rbp-30h] BYREF

  v20 = a1;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  WdLogSingleEntry2(4LL, a1);
  GreSuspendDirectDraw(a1, 0LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 80));
  v5 = 1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v4 + 80), 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 120));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v4 + 120), 2LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 88));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v4 + 88), 3LL);
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[7], 4LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 112));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v4 + 112), 5LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 136));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", *(_QWORD *)(v4 + 136), 6LL);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  if ( a2 )
  {
    if ( ((_DWORD)a1[5] & 0x400) == 0 )
    {
      v6 = a1[316];
      v7 = *((_DWORD *)v6 + 15);
      v8 = *((_DWORD *)v6 + 14);
      v21[0] = 0;
      v21[1] = 0;
      v21[2] = v8;
      v21[3] = v7;
      if ( qword_1C02D5910 )
      {
        if ( (int)qword_1C02D5910() >= 0 )
        {
          v9 = a1[316];
          if ( ((_DWORD)v9[28] & 1) != 0 )
            (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v9 + 6) + 2808LL))(
              (unsigned __int64)(v9 + 6) & -(__int64)(v9 != 0LL),
              0LL,
              0LL,
              0LL,
              0LL,
              v21,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          else
            ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
              (unsigned __int64)(v9 + 6) & -(__int64)(v9 != 0LL),
              0LL,
              0LL,
              0LL,
              0LL,
              v21,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
        }
      }
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v20,
    (struct _SURFOBJ *)((unsigned __int64)(a1[316] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[316] >> 64)),
    0LL,
    0);
  if ( qword_1C02D5EC8 && (int)qword_1C02D5EC8() >= 0 && qword_1C02D5ED0 )
    qword_1C02D5ED0(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 648) = 4;
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[338];
  if ( v10 )
    v11 = v10(a1[221], 0LL);
  else
    v11 = 0;
  *((_DWORD *)a1 + 648) = 0;
  if ( v11 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v20, 1);
    v5 = 0;
  }
  *(_DWORD *)(v4 + 1428) = v5;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[6]);
  v12 = (struct _ERESOURCE *)a1[6];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT", *(_QWORD *)(v4 + 136));
  v13 = *(struct _ERESOURCE **)(v4 + 136);
  if ( v13 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v13);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v4 + 112));
  v14 = *(struct _ERESOURCE **)(v4 + 112);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[7]);
  v15 = (struct _ERESOURCE *)a1[7];
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn", *(_QWORD *)(v4 + 88));
  v16 = *(struct _ERESOURCE **)(v4 + 88);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock", *(_QWORD *)(v4 + 120));
  v17 = *(struct _ERESOURCE **)(v4 + 120);
  if ( v17 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v17);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v4 + 80));
  v18 = *(struct _ERESOURCE **)(v4 + 80);
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion();
  }
  if ( !v11 )
    GreIncrementDisplaySettingsUniqueness();
  WdLogSingleEntry1(5LL, (int)v11);
  return v11;
}
