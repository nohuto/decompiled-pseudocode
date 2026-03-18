/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017193C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0078DE0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0171DC0 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rbx
  unsigned int (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int updated; // esi
  struct _DEVCAPS *v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // r8d
  struct _ERESOURCE *v25; // rcx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // rcx
  struct _ERESOURCE *v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp+18h] BYREF

  if ( !qword_1C029ADD8 || !(unsigned int)qword_1C029ADD8(a1) || *((_DWORD *)a1 + 5) != 1 )
  {
    WdLogSingleEntry1(4LL, 5LL);
    return 0LL;
  }
  if ( a2 )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      WdLogSingleEntry1(4LL, 28191LL);
      return 0LL;
    }
    v4 = *(_QWORD *)a1;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0296818)(
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2552LL) + 240LL),
                            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2552LL) + 256LL)) )
    {
      v5 = *(unsigned int (__fastcall **)(_QWORD))(v4 + 2648);
      if ( v5 && v5(*(_QWORD *)(v4 + 1768)) )
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v4 + 56), 4);
        EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
        EngAcquireSemaphore(ghsemHT);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v4 + 48), 11);
        EngAcquireSemaphore(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
        EngAcquireSemaphore(ghsemPalette);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
        EngAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
        EngAcquireSemaphore(ghsemRFONTList);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
        GreAcquireHmgrSemaphore(v7, v6, v8);
        updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 5), a2);
        if ( updated )
        {
          v10 = gpGdiDevCaps;
          v11 = *(_DWORD **)(*((_QWORD *)a1 + 5) + 2568LL);
          *((_DWORD *)a1 + 14) = v11[19];
          *((_DWORD *)a1 + 15) = v11[20];
          *((_DWORD *)a1 + 16) = v11[19] + v11[43];
          *((_DWORD *)a1 + 17) = v11[20] + v11[44];
          v34 = *(_QWORD *)a1;
          vGetDeviceCaps((struct PDEVOBJ *)&v34, v10);
        }
        else
        {
          WdLogSingleEntry1(4LL, 6LL);
        }
        GreReleaseHmgrSemaphore(v13, v12, v14);
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v15);
        if ( ghsemRFONTList )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
          PsLeavePriorityRegion(v17);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v16);
        if ( ghsemPublicPFT )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
          PsLeavePriorityRegion(v19);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v18);
        if ( ghsemPalette )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
          PsLeavePriorityRegion(v21);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v20);
        if ( ghsemDwmState )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
          PsLeavePriorityRegion(v23);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v4 + 48), v22);
        v25 = *(struct _ERESOURCE **)(v4 + 48);
        if ( v25 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v25);
          PsLeavePriorityRegion(v26);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v24);
        if ( ghsemHT )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
          PsLeavePriorityRegion(v28);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v27);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion(v30);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v4 + 56), v29);
        v31 = *(struct _ERESOURCE **)(v4 + 56);
        if ( v31 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v31);
          PsLeavePriorityRegion(v32);
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
  WdLogSingleEntry1(4LL, 28186LL);
  return 0LL;
}
