/*
 * XREFs of ApplyPathsModality @ 0x1C000FF74
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 * Callees:
 *     DrvNotifyModeChangeStartStop @ 0x1C00109B0 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C001B014 (ApplyPathModalityToCdsRegistryStore.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B2FB0 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  int v16; // ebx
  __int64 v17; // rdx
  int v18; // ebx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // edi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rax

  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore() )
  {
    LOBYTE(v12) = 1;
    DrvNotifyModeChangeStartStop(v12);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v29 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v29);
    }
    v13 = a2;
    LODWORD(v13) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C0251910)(v13, a1, a8) < 0 )
    {
      *a6 = 1;
      v18 = -1;
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 36);
      if ( !v14 || !*(_QWORD *)(a1 + 40) )
      {
        v30 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v30);
        v14 = *(_DWORD *)(a1 + 36);
      }
      v15 = 0;
      v16 = (a2 & 0x400000) != 0;
      if ( v14 )
      {
        v17 = *(_QWORD *)(a1 + 40);
        do
        {
          if ( (v16 & 1) != 0 )
          {
            v31 = 336LL * v15;
            if ( *(_DWORD *)(v31 + v17 + 88) != *(_DWORD *)(v31 + v17 + 120) )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v32[3] = *(int *)(v31 + *(_QWORD *)(a1 + 40) + 4);
              v32[4] = *(unsigned int *)(v31 + *(_QWORD *)(a1 + 40));
              v32[5] = *(unsigned int *)(v31 + *(_QWORD *)(a1 + 40) + 88);
              v32[6] = *(unsigned int *)(v31 + *(_QWORD *)(a1 + 40) + 120);
              WdLogEvent5_WdEvent(v32);
              v17 = *(_QWORD *)(a1 + 40);
              v16 &= ~1u;
            }
          }
          if ( *(_BYTE *)(336LL * v15 + v17 + 76) )
            a3 = 1;
          ++v15;
        }
        while ( v15 < *(_DWORD *)(a1 + 36) );
      }
      v18 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v16);
      if ( v18 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C0251918)(a1);
      if ( v18 != 2 )
      {
LABEL_24:
        if ( v18 >= 0 )
        {
          v24 = qword_1C0256700 ? qword_1C0256700() : -1073741637;
          if ( v24 >= 0 && a7 && *a7 )
          {
            EngAcquireSemaphore(ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
            EngAcquireSemaphore(ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
            v25 = *a7;
            v26 = 0;
            if ( *(_DWORD *)(*a7 + 20) )
            {
              do
              {
                v27 = v25;
                v28 = *(_QWORD *)(56LL * v26 + v25 + 40);
                if ( v28 && (*(_DWORD *)(v28 + 40) & 1) != 0 && qword_1C0256708 )
                {
                  qword_1C0256708(v28, 0LL, v25);
                  v27 = *a7;
                }
                ++v26;
                v25 = v27;
              }
              while ( v26 < *(_DWORD *)(v27 + 20) );
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
              PsLeavePriorityRegion();
            }
          }
        }
        goto LABEL_23;
      }
      v19 = *(_DWORD *)(a1 + 36);
      if ( v19 )
      {
        v20 = *(_QWORD *)(a1 + 40);
        if ( v20 )
        {
          v21 = 0;
          while ( 1 )
          {
            v22 = 336LL * v21;
            if ( *(_DWORD *)(v22 + v20 + 88) || *(_DWORD *)(v22 + v20 + 92) || *(_DWORD *)(v22 + v20 + 124) )
              break;
            if ( ++v21 >= v19 )
              goto LABEL_23;
          }
          *a7 = a5;
          v18 = 0;
          GreIncrementDisplaySettingsUniqueness();
          goto LABEL_24;
        }
      }
    }
LABEL_23:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v18;
  }
  return 0xFFFFFFFFLL;
}
