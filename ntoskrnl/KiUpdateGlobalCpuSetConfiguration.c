/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14039979C
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCheckThreadAffinity @ 0x1402DD370 (KiCheckThreadAffinity.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTraceIdealProcessor @ 0x1405FA980 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r12d
  char v6; // si
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // r11
  char v12; // al
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 *v16; // r11
  char v17; // r10
  __int64 v18; // r10
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 *v24; // r11
  char v25; // r10
  __int64 v26; // r10
  __int64 *v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-D0h]
  _DWORD v31[84]; // [rsp+48h] [rbp-C0h] BYREF

  v30 = a1;
  memset(v31, 0, sizeof(v31));
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0LL;
  v28 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v3 = KiProcessorBlock[v2];
      memset(v31, 0, sizeof(v31));
      *(_QWORD *)(*(_QWORD *)(v3 + 24) + 568LL) = KiCpuSetSequence;
      while ( 1 )
      {
        KiAcquirePrcbLocksForIsolationUnit(v3, 0, &v28);
        v4 = *(_QWORD *)(v3 + 8);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
          break;
        _InterlockedAdd16((volatile signed __int16 *)(v4 + 868), 1u);
        KiReleasePrcbLocksForIsolationUnit(&v28);
        LODWORD(v29) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( *(_QWORD *)(v4 + 64) );
        }
        KiAcquirePrcbLocksForIsolationUnit(v3, 0, &v28);
        _InterlockedDecrement16((volatile signed __int16 *)(v4 + 868));
        if ( v4 == *(_QWORD *)(v3 + 8) )
          break;
        KiReleasePrcbLocksForIsolationUnit(&v28);
        *(_QWORD *)(v4 + 64) = 0LL;
      }
      KiStartRescheduleContext((__int64)v31, &v28, v4);
      v5 = *(_DWORD *)(v4 + 588);
      v6 = 0;
      v7 = v5;
      if ( !KiCheckThreadAffinity(v4) )
      {
        KiComputeThreadAffinity(v8);
        v7 = *(_DWORD *)(v4 + 588);
        if ( !(unsigned int)KeCheckProcessorAffinityEx(*(unsigned __int16 **)(v4 + 576), *(_DWORD *)(v3 + 36)) )
        {
          v12 = *(_BYTE *)(v4 + 388);
          if ( v12 == 2 )
          {
            _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
            if ( !*(_QWORD *)(v3 + 16) )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v31, v3);
              v6 = 1;
              KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v14, 0, 1);
              if ( (v17 & 2) != 0 )
              {
                LOBYTE(v15) = v31[0];
                v18 = 0LL;
                if ( LOBYTE(v31[0]) )
                {
                  do
                  {
                    v19 = (__int64 *)&v31[10 * v18 + 4];
                    if ( v19 != v16 )
                    {
                      KiAdjustRescheduleContextEntryForThreadRemoval(v19, v15, 0, 1);
                      LOBYTE(v15) = v31[0];
                    }
                    v18 = (unsigned int)(v18 + 1);
                  }
                  while ( (unsigned int)v18 < (unsigned __int8)v15 );
                }
                v31[1] = 0;
              }
            }
          }
          else if ( v12 == 5 )
          {
            *(_BYTE *)(v4 + 112) |= 8u;
          }
        }
      }
      *(_QWORD *)(v4 + 64) = 0LL;
      if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(v4, 1350LL, v5, v7, v28);
      v9 = *(_QWORD *)(v3 + 16);
      if ( v9 )
      {
        if ( !KiCheckThreadAffinity(v9) )
          break;
      }
      if ( v6 )
        goto LABEL_37;
LABEL_10:
      KiReleasePrcbLocksForIsolationUnit(&v28);
      if ( v10 )
        KiCompleteRescheduleContext(v31, (__int64)CurrentPrcb);
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
        return KiFlushSoftwareInterruptBatch((__int64)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    _interlockedbittestandreset((volatile signed __int32 *)(v20 + 120), 0xCu);
    v21 = KiFindRescheduleContextEntryForPrcb(v31, v3);
    KiAdjustRescheduleContextEntryForThreadRemoval(v21, v22, 0, 1);
    if ( (v25 & 2) != 0 )
    {
      LOBYTE(v23) = v31[0];
      v26 = 0LL;
      if ( LOBYTE(v31[0]) )
      {
        do
        {
          v27 = (__int64 *)&v31[10 * v26 + 4];
          if ( v27 != v24 )
          {
            KiAdjustRescheduleContextEntryForThreadRemoval(v27, v23, 0, 1);
            LOBYTE(v23) = v31[0];
          }
          v26 = (unsigned int)(v26 + 1);
        }
        while ( (unsigned int)v26 < (unsigned __int8)v23 );
      }
      v31[1] = 0;
    }
LABEL_37:
    KiSearchForNewThreadsForRescheduleContext(v31, (__int64)v30);
    KiCommitRescheduleContext((unsigned __int8 *)v31, CurrentPrcb, 0, v30);
    goto LABEL_10;
  }
  return KiFlushSoftwareInterruptBatch((__int64)&CurrentPrcb->DeferredDispatchInterrupts);
}
