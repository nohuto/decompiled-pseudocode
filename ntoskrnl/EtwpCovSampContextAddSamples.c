/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x1408A4190
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A3BF4 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x1408A4096 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409EFD64 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwCovSampHash @ 0x140461748 (EtwCovSampHash.c)
 *     EtwpCovSampHashLookupInTable @ 0x1408A4A72 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A4B3A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409EDBAC (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1409F0328 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  unsigned int RoomAndAcquireLock; // eax
  __int64 v11; // r12
  _DWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // r10d
  unsigned int i; // r11d
  _QWORD *v16; // r13
  _QWORD *v18; // [rsp+30h] [rbp-78h]
  _QWORD *v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  _QWORD *v21; // [rsp+50h] [rbp-58h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h]
  ULONG_PTR v23; // [rsp+60h] [rbp-48h]
  ULONG_PTR v24; // [rsp+68h] [rbp-40h]
  unsigned int v26; // [rsp+C8h] [rbp+20h]

  v4 = a2;
  v23 = BugCheckParameter2;
  v24 = BugCheckParameter2;
  v7 = 0;
  v21 = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = qword_140C31888;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v26 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < a3 )
  {
    EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v9, 1LL);
    RoomAndAcquireLock = v26;
  }
  v11 = 0LL;
  while ( RoomAndAcquireLock && (unsigned int)v11 < a3 )
  {
    v12 = (_DWORD *)(v4 + 8 * v11);
    v18 = v12;
    if ( !*(_QWORD *)(BugCheckParameter2 + 1704) )
      goto LABEL_14;
    LODWORD(v20) = *(_DWORD *)(v23 + 28);
    HIDWORD(v20) = v20;
    v13 = EtwCovSampHash(__PAIR64__(*v12, v12[1]), v20);
    v14 = 1;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1720); ++i )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1716) & ((unsigned int)v13 + i * HIDWORD(v13))) >> 3)
                     + *(_QWORD *)(BugCheckParameter2 + 1704)) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2
                                                                                                  + 1716) & (v13 + i * BYTE4(v13)) & 7))) == 0 )
      {
        v14 = 0;
        break;
      }
    }
    if ( !v14 )
    {
      v12 = (_DWORD *)(v4 + 8 * v11);
LABEL_14:
      v16 = *(_QWORD **)(BugCheckParameter2 + 1680);
      while ( 1 )
      {
        v19 = v16;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v16, v12, &v21) )
          break;
        v16 = (_QWORD *)*v16;
        v12 = v18;
        if ( v16 == (_QWORD *)(BugCheckParameter2 + 1680) )
        {
          *v21 = *v18;
          ++*((_DWORD *)v19 + 4);
          ++v7;
          RoomAndAcquireLock = --v26;
          goto LABEL_19;
        }
      }
    }
    ++v8;
    RoomAndAcquireLock = v26;
LABEL_19:
    v11 = (unsigned int)(v11 + 1);
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( P )
    EtwpCoverageSamplerFreeTable(P);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 1132), v7);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 1136), v8);
  if ( a3 > v8 + v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 1140), a3 - v8 - v7);
  return v7;
}
