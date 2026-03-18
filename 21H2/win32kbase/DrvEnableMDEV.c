/*
 * XREFs of DrvEnableMDEV @ 0x1C00783A4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00D44A0 (SafeEnableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     UserNotifyDisplayChange @ 0x1C0078BB0 (UserNotifyDisplayChange.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00C4110 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C023DA44 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, int a2, unsigned int a3)
{
  unsigned int v4; // r14d
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  HDEV v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r8d
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v23; // ecx
  __int64 *v24; // rdx
  _QWORD *v25; // rdi
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v27; // rax
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v4 = 1;
  WdLogSingleEntry2(4LL, a1, a2);
  v8 = *a1;
  v9 = 0;
  for ( i = *a1; v9 < *((_DWORD *)a1 + 5); ++v9 )
  {
    v10 = 7LL * v9;
    v11 = (HDEV)a1[v10 + 5];
    if ( a2 )
    {
      LOBYTE(v7) = 1;
      DrvDxgkDisplayOnOff(a1[v10 + 5], v7, a3);
      DrvEnableDisplay(v11);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 56));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v8 + 56), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48), 11LL);
  if ( a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v12 = *(_QWORD *)(v8 + 1776);
  v29 = v12;
  if ( (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v22 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 2840);
    if ( v22 )
      v22(*(_QWORD *)(v8 + 1768), &v29, 0LL, 0LL, *(_DWORD *)(v12 + 28));
    else
      v4 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v23 = 0;
      v24 = a1 + 5;
      while ( 1 )
      {
        v25 = (_QWORD *)*v24;
        if ( (*(_DWORD *)(*v24 + 2140) & 0x100) != 0 )
          break;
        ++v23;
        v24 += 7;
        if ( v23 >= v13 )
          goto LABEL_9;
      }
      v26 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v25[217];
      v27 = v25[222];
      i = v27;
      if ( v26 )
        v26(*(_QWORD *)(v25[3] + 1768LL), &i, 0LL, 0LL, *(_DWORD *)(v27 + 28));
      else
        v4 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 && qword_1C029B108 )
        qword_1C029B108(v25, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v8 + 48));
  v14 = *(struct _ERESOURCE **)(v8 + 48);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v8 + 56));
  v18 = *(struct _ERESOURCE **)(v8 + 56);
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion(v19);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
  if ( a2 )
    GreIncrementDisplaySettingsUniqueness();
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v4;
}
