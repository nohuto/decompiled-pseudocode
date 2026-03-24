/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014487C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0099BB0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0144D08 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int (__fastcall *v10)(_QWORD); // rax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  unsigned int updated; // esi
  struct _DEVCAPS *v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // r8d
  struct _ERESOURCE *v32; // rcx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rcx
  struct _ERESOURCE *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // [rsp+40h] [rbp+18h] BYREF

  v2 = (int)qword_1C0256058;
  if ( qword_1C0256058 )
    v2 = qword_1C0256058(a1);
  if ( !v2 || *((_DWORD *)a1 + 5) != 1 )
  {
    v5 = WdLogNewEntry5_WdEvent(a1);
    *(_QWORD *)(v5 + 24) = 5LL;
LABEL_5:
    WdLogEvent5_WdEvent(v5);
    return 0LL;
  }
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdEvent(a1);
    *(_QWORD *)(v5 + 24) = 27929LL;
    goto LABEL_5;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v5 = WdLogNewEntry5_WdEvent(a1);
    *(_QWORD *)(v5 + 24) = 27934LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)a1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0251A28)(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 240LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 2576LL) + 256LL)) )
  {
    v10 = *(unsigned int (__fastcall **)(_QWORD))(v7 + 2672);
    if ( v10 && v10(*(_QWORD *)(v7 + 1800)) )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v7 + 64), 4);
      EngAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
      EngAcquireSemaphore(ghsemHT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 48), 11);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
      GreAcquireHmgrSemaphore(v12, v11, v13);
      updated = DrvUpdateDisplayModeInPdev(*((HDEV *)a1 + 5), a2);
      if ( updated )
      {
        v16 = gpGdiDevCaps;
        v17 = *(_DWORD **)(*((_QWORD *)a1 + 5) + 2592LL);
        *((_DWORD *)a1 + 14) = v17[19];
        *((_DWORD *)a1 + 15) = v17[20];
        *((_DWORD *)a1 + 16) = v17[19] + v17[43];
        *((_DWORD *)a1 + 17) = v17[20] + v17[44];
        v40 = *(_QWORD *)a1;
        vGetDeviceCaps((struct PDEVOBJ *)&v40, v16);
      }
      else
      {
        v21 = WdLogNewEntry5_WdEvent(v14);
        *(_QWORD *)(v21 + 24) = 6LL;
        WdLogEvent5_WdEvent(v21);
      }
      GreReleaseHmgrSemaphore(v19, v18, v20);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v22);
      if ( ghsemRFONTList )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
        PsLeavePriorityRegion(v24);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v23);
      if ( ghsemPublicPFT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
        PsLeavePriorityRegion(v26);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v25);
      if ( ghsemPalette )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
        PsLeavePriorityRegion(v28);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v27);
      if ( ghsemDwmState )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
        PsLeavePriorityRegion(v30);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 48), v29);
      v32 = *(struct _ERESOURCE **)(v7 + 48);
      if ( v32 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v32);
        PsLeavePriorityRegion(v33);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v31);
      if ( ghsemHT )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
        PsLeavePriorityRegion(v35);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v34);
      if ( ghsemSprite )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemSprite);
        PsLeavePriorityRegion(v37);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v7 + 64), v36);
      v38 = *(struct _ERESOURCE **)(v7 + 64);
      if ( v38 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v38);
        PsLeavePriorityRegion(v39);
      }
      return updated;
    }
    v9 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v9 + 24) = 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v9 + 24) = 7LL;
  }
  WdLogEvent5_WdEvent(v9);
  return 0;
}
