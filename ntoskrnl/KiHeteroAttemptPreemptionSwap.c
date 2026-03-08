/*
 * XREFs of KiHeteroAttemptPreemptionSwap @ 0x1404591A8
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x140459316 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402C9000 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiFindBiasedSetMember @ 0x14045780C (KiFindBiasedSetMember.c)
 *     KiIsThreadEligibleForPreemptionSwap @ 0x140459946 (KiIsThreadEligibleForPreemptionSwap.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140574C20 (KiEvaluatePreemptionSwapTarget.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574F74 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // edi
  __int64 v10; // r8
  __int64 v11; // r10
  _QWORD *v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // cl
  __int64 v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  v21[0] = 0LL;
  if ( (unsigned __int8)KiIsThreadEligibleForPreemptionSwap(a5) )
  {
    v12 = (_QWORD *)(a4 + 34912);
    v13 = *(_QWORD *)(a6 + 8);
    if ( (v13 & *(_QWORD *)(a4 + 200)) == 0 || (v10 & *v12) != *v12 )
    {
      v14 = v13 & ~v10;
      if ( (v10 & *v12) == *v12 )
        v14 &= *(_QWORD *)(v11 + 40);
      if ( v14 )
      {
        if ( (v14 & *(_QWORD *)(a2 + 34880)) != 0 )
        {
          v15 = a2;
        }
        else
        {
          v16 = *(unsigned __int8 *)(a2 + 208);
          v15 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v16
                                                                    + (unsigned int)KiFindBiasedSetMember(
                                                                                      v14,
                                                                                      *(unsigned __int8 *)(a2 + 209))]];
        }
        v17 = KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v15 + 34888), a2, a4, v14, a5);
        v18 = v17;
        if ( v17 )
        {
          KiAcquirePrcbLocksForPreemptionAttempt(v17, *(_DWORD *)(a5 + 20), v21);
          if ( (unsigned __int8)KiEvaluatePreemptionSwapTarget(v18, a4, a5) )
          {
            *(_QWORD *)a7 = v21[0];
            v19 = ~*(_BYTE *)(v18 + 35);
            *(_DWORD *)(a7 + 12) = 1;
            *(_DWORD *)(a7 + 8) = v19 & 1;
            return v7;
          }
          KiReleasePrcbLocksForIsolationUnit(v21);
        }
      }
    }
  }
  return (unsigned int)-1073741823;
}
