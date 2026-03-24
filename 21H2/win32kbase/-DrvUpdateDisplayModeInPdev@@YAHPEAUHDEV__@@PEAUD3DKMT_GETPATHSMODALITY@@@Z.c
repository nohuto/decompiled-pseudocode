/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0144D08
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014487C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DBB4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C0143650 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0143BE8 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HSEMAPHORE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  HSEMAPHORE *v2; // rbx
  unsigned int updated; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct _devicemodeW *v12; // rdi
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rcx
  HSEMAPHORE *v23; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v23 = a1;
  updated = 0;
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)v2[8], 4);
  EngAcquireSemaphore(v2[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v2[6], 11);
  if ( !v2[324] )
  {
    v7 = WdLogNewEntry5_WdEvent(v5);
    *(_QWORD *)(v7 + 24) = 1LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation((struct tagGRAPHICS_DEVICE *)v2[322])
    || (v8 = v2[322], v9 = v8[40], (v9 & 0x4000000) != 0)
    || (v9 & 0x2000000) != 0
    || (v9 & 8) != 0 )
  {
    v7 = WdLogNewEntry5_WdEvent(v6);
    *(_QWORD *)(v7 + 24) = 2LL;
LABEL_21:
    WdLogEvent5_WdEvent(v7);
    goto LABEL_22;
  }
  v10 = 0LL;
  if ( !*((_WORD *)a2 + 10) )
    goto LABEL_13;
  while ( 1 )
  {
    v11 = 272LL * (unsigned int)v10;
    if ( v8[64] == *(_DWORD *)((char *)a2 + v11 + 72)
      && v8[62] == *(_DWORD *)((char *)a2 + v11 + 64)
      && v8[63] == *(_DWORD *)((char *)a2 + v11 + 68)
      && (*(_QWORD *)((_BYTE *)a2 + v11 + 48) & 0x1000000000LL) == 0 )
    {
      break;
    }
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_13;
  }
  v10 = 272 * (v10 + 1);
  v12 = *(struct _devicemodeW **)((char *)a2 + v10);
  if ( !v12 )
  {
LABEL_13:
    v7 = WdLogNewEntry5_WdEvent(v10);
    *(_QWORD *)(v7 + 24) = 27848LL;
    goto LABEL_21;
  }
  if ( !DevmodeAutoRotateCompatible(v12, (const struct _devicemodeW *)v2[324]) )
  {
    v7 = WdLogNewEntry5_WdEvent(v13);
    goto LABEL_21;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v23, v12);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
    v16 = WdLogNewEntry5_WdEvent(v15);
    *(_QWORD *)(v16 + 24) = 4LL;
    WdLogEvent5_WdEvent(v16);
  }
  v2 = v23;
LABEL_22:
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v2[6], v14);
  v18 = (struct _ERESOURCE *)v2[6];
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion(v19);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)v2[8], v17);
  v20 = (struct _ERESOURCE *)v2[8];
  if ( v20 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v20);
    PsLeavePriorityRegion(v21);
  }
  return updated;
}
