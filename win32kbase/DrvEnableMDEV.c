/*
 * XREFs of DrvEnableMDEV @ 0x1C001D978
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00D8A70 (SafeEnableMDEV.c)
 * Callees:
 *     UserNotifyDisplayChange @ 0x1C0016710 (UserNotifyDisplayChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00CE2F0 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C0271554 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, int a2, unsigned int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // ebp
  HDEV v11; // r14
  HSEMAPHORE *v12; // rbp
  __int64 v13; // rcx
  unsigned int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  unsigned int v22; // ecx
  __int64 *v23; // rdx
  _QWORD *v24; // rdi
  void (__fastcall *v25)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v26; // rdx
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v6 = 1;
  WdLogSingleEntry2(4LL, a1);
  v9 = *a1;
  v10 = 0;
  for ( i = *a1; v10 < *((_DWORD *)a1 + 5); ++v10 )
  {
    v8 = 7LL * v10;
    v11 = (HDEV)a1[v8 + 5];
    if ( a2 )
    {
      LOBYTE(v7) = 1;
      DrvDxgkDisplayOnOff(a1[v8 + 5], v7, a3);
      DrvEnableDisplay(v11);
    }
  }
  v12 = *(HSEMAPHORE **)(SGDGetSessionState(v8 * 8) + 24);
  EngAcquireSemaphore(v12[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", v12[10], 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 56));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 56), 4LL);
  EngAcquireSemaphore(v12[14]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", v12[14], 5LL);
  EngAcquireSemaphore(v12[17]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", v12[17], 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48), 11LL);
  if ( a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v13 = *(_QWORD *)(v9 + 1776);
  v28 = v13;
  if ( (*(_DWORD *)(v13 + 24) & 0x800) != 0 )
  {
    v21 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2840);
    if ( v21 )
      v21(*(_QWORD *)(v9 + 1768), &v28, 0LL, 0LL, *(_DWORD *)(v13 + 28));
    else
      v6 = 0;
  }
  else
  {
    v14 = *((_DWORD *)a1 + 5);
    if ( v14 > 1 )
    {
      v22 = 0;
      v23 = a1 + 5;
      while ( 1 )
      {
        v24 = (_QWORD *)*v23;
        if ( (*(_DWORD *)(*v23 + 2140) & 0x100) != 0 )
          break;
        ++v22;
        v23 += 7;
        if ( v22 >= v14 )
          goto LABEL_9;
      }
      v25 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v24[217];
      v26 = v24[222];
      i = v26;
      if ( v25 )
        v25(*(_QWORD *)(v24[3] + 1768LL), &i, 0LL, 0LL, *(_DWORD *)(v26 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 && qword_1C02D5908 )
        qword_1C02D5908(v24, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 48));
  v15 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT", v12[17]);
  v16 = (struct _ERESOURCE *)v12[17];
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", v12[14]);
  v17 = (struct _ERESOURCE *)v12[14];
  if ( v17 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v17);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 56));
  v18 = *(struct _ERESOURCE **)(v9 + 56);
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", v12[10]);
  v19 = (struct _ERESOURCE *)v12[10];
  if ( v19 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v19);
    PsLeavePriorityRegion();
  }
  if ( a2 )
    GreIncrementDisplaySettingsUniqueness();
  if ( !gProtocolType )
    UserNotifyDisplayChange();
  return v6;
}
