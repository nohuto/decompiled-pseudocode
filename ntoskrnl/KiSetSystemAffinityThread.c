/*
 * XREFs of KiSetSystemAffinityThread @ 0x1402AC3AC
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140237154 (KiUpdateNodeAffinitizedFlag.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140238A10 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiCheckPrcbAffinityEx @ 0x1402ADF54 (KiCheckPrcbAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x1402CCC00 (KeFindFirstSetLeftAffinityEx.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTraceIdealProcessor @ 0x1405FA980 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  char v10; // di
  unsigned __int16 *v11; // r15
  _WORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // r15
  _WORD *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r9
  _DWORD *v28; // r11
  char v29; // r10
  char v30; // r11
  unsigned int v31; // r10d
  _DWORD *v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-E0h] BYREF
  int v34; // [rsp+28h] [rbp-D8h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  _DWORD v36[84]; // [rsp+40h] [rbp-C0h] BYREF

  v35 = a5;
  v8 = a4;
  memset(v36, 0, sizeof(v36));
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 1;
  v33 = 0LL;
  v11 = *(unsigned __int16 **)(v9 + 576);
  if ( a2 )
  {
    KiCopyAffinityEx(*(_QWORD *)(v9 + 576), v11[1], a2);
  }
  else
  {
    memset(v11 + 4, 0, 8LL * *v11);
    *v11 = 1;
    v12 = *(_WORD **)(v9 + 576);
    v13 = *((unsigned __int16 *)a3 + 4);
    v14 = *a3;
    if ( *v12 > (unsigned __int16)v13 )
    {
LABEL_3:
      *(_QWORD *)&v12[4 * v13 + 4] |= v14;
      goto LABEL_4;
    }
    if ( v12[1] > (unsigned __int16)v13 )
    {
      *v12 = v13 + 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  v15 = *(unsigned int *)(v9 + 588);
  if ( (unsigned int)v8 < 0x800 )
  {
    _mm_lfence();
    *(_DWORD *)(v9 + 588) = v8;
    v16 = KiProcessorBlock[v8];
  }
  else
  {
    v16 = KiProcessorBlock[v15];
    LODWORD(v8) = *(_DWORD *)(v9 + 588);
    if ( !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v9 + 576), v16) )
    {
      v18 = *(_QWORD *)(v16 + 192);
      v19 = *(unsigned __int16 *)(v18 + 136);
      if ( (unsigned __int16)v19 >= *v17 )
        v20 = 0LL;
      else
        v20 = *(_QWORD *)&v17[4 * v19 + 4];
      v21 = *(_QWORD *)(v18 + 128) & v20;
      if ( v21 )
      {
        _BitScanReverse64(&v21, v21);
        v34 = v21;
        LODWORD(v8) = KiProcessorNumberToIndexMappingTable[(unsigned int)(v21 + ((_DWORD)v19 << 6))];
      }
      else
      {
        LODWORD(v8) = KeFindFirstSetLeftAffinityEx(v17, v19, v18);
      }
      *(_DWORD *)(v9 + 588) = v8;
      v16 = KiProcessorBlock[(unsigned int)v8];
    }
  }
  *(_WORD *)(v9 + 584) = *(unsigned __int8 *)(v16 + 208);
  if ( (*(_DWORD *)(v9 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v9) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v16, v9);
    KiUpdateNodeAffinitizedFlag(v9);
  }
  result = KiCheckPrcbAffinityEx(*(_QWORD *)(v9 + 576), a1);
  if ( (_BYTE)result )
    goto LABEL_14;
  _interlockedbittestandset((volatile signed __int32 *)(v9 + 120), 0xCu);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
    goto LABEL_14;
  result = KiAcquirePrcbLocksForIsolationUnit(a1, 0, &v33);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    KiStartRescheduleContext((__int64)v36, &v33, v9);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v36, a1);
    LOBYTE(v24) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v25, 0LL, v24, v33);
    if ( (v29 & 2) != 0 )
    {
      LOBYTE(v26) = v36[0];
      v31 = 0;
      if ( LOBYTE(v36[0]) )
      {
        do
        {
          v32 = &v36[10 * v31 + 4];
          if ( v32 != v28 )
          {
            LOBYTE(v27) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v32, v26, 0LL, v27, v33);
            LOBYTE(v26) = v36[0];
          }
          ++v31;
        }
        while ( v31 < (unsigned __int8)v26 );
      }
      v36[1] = 0;
    }
    KiSearchForNewThreadsForRescheduleContext(v36, v35);
    KiCommitRescheduleContext(v36, a1, 0LL, v35);
    result = KiReleasePrcbLocksForIsolationUnit(&v33);
    *(_QWORD *)(v9 + 64) = 0LL;
    v10 = 0;
    if ( v30 )
    {
      KiCompleteRescheduleContext(v36, a1);
      result = KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
  }
  if ( v33 )
    result = KiReleasePrcbLocksForIsolationUnit(&v33);
  if ( v10 )
LABEL_14:
    *(_QWORD *)(v9 + 64) = 0LL;
  if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
    return EtwTraceIdealProcessor(v9, 1350LL, (unsigned int)v15, (unsigned int)v8, v33);
  return result;
}
