/*
 * XREFs of EtwpBufferingModeFlush @ 0x1408A3088
 * Callers:
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x140205E34 (EtwpLockUnlockBufferList.c)
 *     EtwpPrepareDirtyBuffer @ 0x140205FA4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 *     EtwpGetEnableInfoIndex @ 0x1402068FC (EtwpGetEnableInfoIndex.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405FFD08 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     EtwpFlushBufferToLogfile @ 0x140691270 (EtwpFlushBufferToLogfile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140692BE4 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x140692C18 (EtwpFlushBuffer.c)
 *     EtwpPrepareHeader @ 0x140692D04 (EtwpPrepareHeader.c)
 *     EtwpCompleteBuffer @ 0x140692D8C (EtwpCompleteBuffer.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1408A36BE (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r14
  unsigned int UsedProcessorCount; // esi
  signed int LogFile; // r13d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *GuidEntryByGuid; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD **v10; // r14
  __int16 v11; // dx
  _QWORD *i; // rsi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int32 v19; // eax
  signed __int64 j; // rcx
  signed __int64 v21; // rax
  __int64 v22; // rbp
  _QWORD *v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  signed __int32 v28; // r14d
  signed __int32 v29; // esi
  unsigned int *v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  char *k; // rax
  unsigned int *v34; // rcx
  _QWORD *v35; // rbx
  volatile signed __int64 *v36; // rsi
  __int64 v37; // r8
  unsigned int v38; // r10d
  signed __int64 v39; // rbp
  unsigned int v40; // edx
  signed __int64 v41; // r9
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  __int64 m; // rbx
  __int64 v45; // r8
  unsigned int *n; // rax
  signed __int64 v47; // r8
  __int64 v48; // r9
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  unsigned int *v51; // rdx
  void *v52; // rcx
  unsigned int v53; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v54[30]; // [rsp+28h] [rbp-B0h] BYREF

  v1 = a1[1];
  v3 = *a1;
  v53 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)a1 + 204, 4u);
  if ( !*((_QWORD *)a1 + 24) )
    return 0LL;
  LogFile = EtwpCreateLogFile((__int64)a1, 0, 0LL);
  if ( LogFile < 0 )
    goto LABEL_100;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset(v54, 0, sizeof(v54));
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid((__int64)CurrentServerSiloGlobals[54].Flink, qword_140046BD0, 0);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v10 = (_QWORD **)(GuidEntryByGuid + 7);
      GuidEntryByGuid[52] = KeGetCurrentThread();
      if ( *v10 == v10 || !EtwpGetEnableInfoIndex((__int64)GuidEntryByGuid, *a1, &v53) )
      {
        GuidEntryByGuid[52] = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else
      {
        v54[0] = 3;
        v54[28] = 2;
        v54[18] = 2;
        HIWORD(v54[19]) = v11;
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
          EtwpSendDataBlock((__int64)i, (__int64)v54);
        GuidEntryByGuid[52] = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v13 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v13 )
        {
          do
          {
            v14 = *(_QWORD *)(v13 + 32);
            EtwpWaitForBufferReferenceCount(v13);
            LogFile = EtwpFlushBuffer((__int64)a1, (unsigned int *)v13, v14 == 0);
            EtwpCompleteBuffer((__int64)a1, v13, LogFile);
            v13 = v14;
          }
          while ( v14 );
        }
        EtwpFinalizeHeader((__int64)a1, 0);
      }
    }
    goto LABEL_100;
  }
  if ( UsedProcessorCount )
  {
    v15 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v16 = a1 + 32;
      }
      else
      {
        v17 = *((_QWORD *)a1 + 137);
        if ( v17 == EtwpHostSiloState )
          v16 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v53) + 34472) + 320LL) + 8 * v3);
        else
          v16 = (_QWORD *)(*(_QWORD *)((v15 << 6) + *(_QWORD *)(v17 + 4144)) + 8 * v3);
      }
      v18 = *v16 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v18 )
      {
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), v1);
        if ( v19 <= v1 )
          *(_DWORD *)(v18 + 4) = v19;
        _m_prefetchw(v16);
        for ( j = *v16; (v18 ^ j) <= 0xF; j = v21 )
        {
          v21 = _InterlockedCompareExchange64(v16, 0LL, j);
          if ( j == v21 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v18 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, (LARGE_INTEGER *)v18);
        }
      }
      v15 = v53 + 1;
      v53 = v15;
    }
    while ( (unsigned int)v15 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    EtwpBufferingModeCompressionFlush((__int64)a1);
    v22 = *((_QWORD *)a1 + 101) + 1LL;
    if ( v22 >= 0 )
    {
      v23 = a1 + 20;
      do
      {
        --v22;
        v24 = 0LL;
        v25 = *v23 - 56LL;
        if ( (_QWORD *)*v23 == v23 )
          v25 = 0LL;
        if ( !v25 )
          break;
        while ( 1 )
        {
          v26 = *(_QWORD *)(v25 + 24);
          if ( v26 == v22 )
            break;
          if ( v26 < v22 && (!v24 || v26 > *(_QWORD *)(v24 + 24)) )
            v24 = v25;
          v27 = *(_QWORD **)(v25 + 56);
          v25 = (__int64)(v27 - 7);
          if ( v27 == v23 )
            v25 = 0LL;
          if ( !v25 )
            goto LABEL_50;
        }
        v24 = v25;
LABEL_50:
        if ( !v24 )
          break;
        v28 = *(_DWORD *)(v24 + 44);
        if ( (unsigned int)(v28 - 4) <= 1 )
        {
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 44), 3, v28);
          if ( v28 == v29 )
          {
            if ( *(_QWORD *)(v24 + 24) == v22 )
            {
              EtwpWaitForBufferReferenceCount(v24);
              if ( v29 == 5 )
              {
                if ( *(_DWORD *)(v24 + 8) != 72 )
                {
                  v30 = (unsigned int *)(v24 + 72);
                  v31 = v24 + *(unsigned int *)(v24 + 8);
                  *(_QWORD *)(v24 + 104) = 0LL;
                  v32 = *(unsigned int *)(v24 + 72);
                  for ( k = (char *)(v24 + 72 + v32); (unsigned __int64)k < v31; k = (char *)v30 + *v30 )
                  {
                    v34 = v30;
                    v30 = (unsigned int *)((char *)v30 + (unsigned int)v32);
                    *((_QWORD *)v30 + 4) = v34;
                    LODWORD(v32) = *v30;
                  }
                  do
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v30, 64) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, v30);
                    v30 = (unsigned int *)*((_QWORD *)v30 + 4);
                  }
                  while ( v30 );
                  _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 44), v28, 5);
                  goto LABEL_65;
                }
                _InterlockedExchange((volatile __int32 *)(v24 + 44), 0);
              }
              else if ( v29 == 4 )
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v24, 0) != -2147483614 )
                  LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v24);
                _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 44), v28, 4);
LABEL_65:
                if ( LogFile < 0 )
                  break;
              }
            }
            else
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 44), v28, 3);
            }
          }
        }
      }
      while ( v22 >= 0 );
    }
    v35 = a1 + 328;
  }
  else
  {
    v36 = (volatile signed __int64 *)(a1 + 328);
    v38 = EtwpQueryUsedProcessorCount((__int64)a1);
    v39 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 164, *((_QWORD *)a1 + 101), -1LL) != -1 )
      return 3221225539LL;
    if ( *((_QWORD *)a1 + 162) )
    {
      v40 = 0;
      if ( v38 )
      {
        v37 = 0LL;
        do
        {
          v41 = *(_QWORD *)(v37 + *((_QWORD *)a1 + 162));
          v42 = *(_QWORD *)(v37 + *((_QWORD *)a1 + 163));
          if ( v41 > v42 )
          {
            do
            {
              v43 = v42;
              v42 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8LL * v40),
                      v41,
                      v42);
            }
            while ( v43 != v42 && v41 > v42 );
          }
          ++v40;
          v37 += 8LL;
        }
        while ( v40 < v38 );
      }
    }
    for ( m = EtwpFindAndLockBufferForFlushing(a1, *v36, v37); m; m = EtwpFindAndLockBufferForFlushing(a1, *v36, v45) )
    {
      EtwpWaitForBufferReferenceCount(m);
      if ( (unsigned int)EtwpPrepareHeader((__int64)a1, m, 0) != -2147483614 )
      {
        LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)m);
        if ( !v39 )
          v39 = *(_QWORD *)(m + 16);
      }
      _InterlockedAdd64(v36, 0xFFFFFFFFFFFFFFFFuLL);
      _InterlockedExchange((volatile __int32 *)(m + 44), 0);
      if ( LogFile < 0 )
        break;
    }
    v35 = a1 + 328;
    if ( *((_QWORD *)a1 + 163) )
    {
      for ( n = (unsigned int *)*((_QWORD *)a1 + 10); ; n = (unsigned int *)*((_QWORD *)v51 + 7) )
      {
        v51 = n - 14;
        if ( n == a1 + 20 )
          v51 = 0LL;
        if ( !v51 )
          break;
        v47 = *((_QWORD *)v51 + 2);
        v48 = *((unsigned __int16 *)v51 + 20);
        if ( v47 < v39 && *((_QWORD *)v51 + 3) <= *v36 )
        {
          v49 = *(_QWORD *)(*((_QWORD *)a1 + 163) + 8 * v48);
          do
          {
            if ( v47 <= v49 )
              break;
            v50 = v49;
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8 * v48), v47, v49);
          }
          while ( v50 != v49 );
        }
      }
    }
  }
  EtwpFinalizeHeader((__int64)a1, 0);
  a1[62] = 0;
  *v35 = -1LL;
LABEL_100:
  v52 = (void *)*((_QWORD *)a1 + 100);
  if ( v52 )
  {
    ZwClose(v52);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)LogFile;
}
