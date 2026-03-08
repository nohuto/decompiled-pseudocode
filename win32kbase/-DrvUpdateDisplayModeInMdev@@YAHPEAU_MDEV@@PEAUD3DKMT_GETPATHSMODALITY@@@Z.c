/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018ED00
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreUpdateSharedDevCaps @ 0x1C0010C8C (GreUpdateSharedDevCaps.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F15C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 DxgkWin32kInterface; // rax
  unsigned int (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  HSEMAPHORE *v10; // rdi
  __int64 v11; // rcx
  unsigned int updated; // ebp
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _ERESOURCE *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _ERESOURCE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _ERESOURCE *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _ERESOURCE *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx

  if ( !qword_1C02D55D8 || !(unsigned int)qword_1C02D55D8() || *((_DWORD *)a1 + 5) != 1 )
  {
    WdLogSingleEntry1(4LL, 5LL);
    return 0LL;
  }
  if ( a2 )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      WdLogSingleEntry1(4LL, 28052LL);
      return 0LL;
    }
    v6 = *(_QWORD *)a1;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 440))(
           *(_QWORD *)(*(_QWORD *)(v6 + 2552) + 232LL),
           *(unsigned int *)(*(_QWORD *)(v6 + 2552) + 248LL)) )
    {
      v8 = *(unsigned int (__fastcall **)(_QWORD))(v6 + 2648);
      if ( v8 && v8(*(_QWORD *)(v6 + 1768)) )
      {
        v10 = *(HSEMAPHORE **)(SGDGetSessionState(v9) + 24);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v6 + 56), 4);
        EngAcquireSemaphore(v10[14]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemSprite", (int)v10[14], 5);
        EngAcquireSemaphore(v10[17]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemHT", (int)v10[17], 6);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v6 + 48), 11);
        EngAcquireSemaphore(v10[9]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDwmState", (int)v10[9], 7);
        EngAcquireSemaphore(v10[5]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemPalette", (int)v10[5], 13);
        EngAcquireSemaphore(v10[6]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemPublicPFT", (int)v10[6], 14);
        EngAcquireSemaphore(v10[3]);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemRFONTList", (int)v10[3], 15);
        GreAcquireHmgrSemaphore(v11);
        updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 5), a2);
        if ( updated )
        {
          v13 = *(_DWORD **)(*((_QWORD *)a1 + 5) + 2568LL);
          *((_DWORD *)a1 + 14) = v13[19];
          *((_DWORD *)a1 + 15) = v13[20];
          *((_DWORD *)a1 + 16) = v13[19] + v13[43];
          v14 = v13[20] + v13[44];
          v15 = *(_QWORD *)a1;
          *((_DWORD *)a1 + 17) = v14;
          GreUpdateSharedDevCaps(v15);
        }
        else
        {
          WdLogSingleEntry1(4LL, 6LL);
        }
        GreReleaseHmgrSemaphore(v16);
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemRFONTList", (int)v10[3]);
        v17 = (struct _ERESOURCE *)v10[3];
        if ( v17 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v17);
          PsLeavePriorityRegion(v19, v18);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemPublicPFT", (int)v10[6]);
        v20 = (struct _ERESOURCE *)v10[6];
        if ( v20 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v20);
          PsLeavePriorityRegion(v22, v21);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemPalette", (int)v10[5]);
        v23 = (struct _ERESOURCE *)v10[5];
        if ( v23 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v23);
          PsLeavePriorityRegion(v25, v24);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDwmState", (int)v10[9]);
        v26 = (struct _ERESOURCE *)v10[9];
        if ( v26 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v26);
          PsLeavePriorityRegion(v28, v27);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v6 + 48));
        v29 = *(struct _ERESOURCE **)(v6 + 48);
        if ( v29 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v29);
          PsLeavePriorityRegion(v31, v30);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemHT", (int)v10[17]);
        v32 = (struct _ERESOURCE *)v10[17];
        if ( v32 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v32);
          PsLeavePriorityRegion(v34, v33);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemSprite", (int)v10[14]);
        v35 = (struct _ERESOURCE *)v10[14];
        if ( v35 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v35);
          PsLeavePriorityRegion(v37, v36);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v6 + 56));
        v38 = *(struct _ERESOURCE **)(v6 + 56);
        if ( v38 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v38);
          PsLeavePriorityRegion(v40, v39);
        }
        return updated;
      }
      WdLogSingleEntry1(4LL, 0LL);
    }
    else
    {
      WdLogSingleEntry1(4LL, 7LL);
    }
    return 0;
  }
  WdLogSingleEntry1(4LL, 28047LL);
  return 0LL;
}
