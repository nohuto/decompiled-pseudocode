/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x140A063BC
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x14060EC70 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A05140 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x140A06078 (WheapPfaMemoryCheck.c)
 */

int __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  char v4; // r9
  unsigned int v5; // edx
  unsigned int *v6; // rcx
  unsigned int *v7; // r10
  unsigned int *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  signed __int8 v12; // cf
  __int64 v13; // rbx

  v1 = a1 + 40;
  LODWORD(v3) = PshedDoPfa(a1 + 40);
  if ( (_DWORD)v3 != 1
    && !WheapPolicyDisableOffline
    && WheapPfaInitialized
    && *(_WORD *)(v1 + 10)
    && *(_DWORD *)(v1 + 12) == 2
    && (*(_BYTE *)(v1 + 104) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = (unsigned int *)(v1 + 128);
    while ( 1 )
    {
      v7 = v6;
      if ( (v6[3] & 1) != 0 )
        break;
      ++v5;
      v6 += 18;
      if ( v5 >= *(unsigned __int16 *)(v1 + 10) )
        goto LABEL_13;
    }
    v4 = 1;
LABEL_13:
    v8 = (unsigned int *)(v1 + 128);
    if ( v4 )
      v8 = v7;
    v3 = *((_QWORD *)v8 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)v8 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
    if ( !v3 )
    {
      LODWORD(v3) = *(_DWORD *)(a1 + 24);
      v9 = v1 + *v8;
      if ( (v3 & 4) != 0 )
      {
        if ( (v3 & 8) != 0 && (*(_BYTE *)v9 & 2) != 0 )
          LODWORD(v3) = WheaAttemptPhysicalPageOffline(*(_QWORD *)(v9 + 16) >> 12, 1, 0, 0);
      }
      else
      {
        v10 = KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
        v13 = v10;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v10, (__int64)&WheapPfaLock);
        if ( v13 )
          *(_BYTE *)(v13 + 18) = 1;
        WheapPfaMemoryCheck(v11, v9);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
        LODWORD(v3) = KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
      }
    }
  }
  return v3;
}
