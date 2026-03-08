/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x140459316
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402C9000 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14036DE9C (KiCanSelectSoftParkedProcessor.c)
 *     KiGenerateHeteroSets @ 0x1404590A0 (KiGenerateHeteroSets.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x1404591A8 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14045969C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiHeteroSelectIdleProcessor @ 0x140459852 (KiHeteroSelectIdleProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14045997C (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x14045A5B4 (KiSelectCandidateProcessor.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057B6AC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14057C470 (KiIsIsolationUnitIdleByHandle.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  bool CanSelectSoftParkedProcessor; // r14
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // r15
  int HeteroSets; // r8d
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // r15
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // edx
  char v27; // cl
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // [rsp+40h] [rbp-30h] BYREF
  int v34; // [rsp+50h] [rbp-20h]
  unsigned int v35; // [rsp+54h] [rbp-1Ch]
  __int128 v36; // [rsp+58h] [rbp-18h] BYREF
  __int64 v37; // [rsp+68h] [rbp-8h]
  __int64 v38; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+50h]

  v34 = 0;
  LOBYTE(v35) = 0;
  v37 = 0LL;
  v39 = *a3;
  v33 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  KiHeteroComputeThreadWorkloadProperties(a2, &v33);
  CanSelectSoftParkedProcessor = 0;
  v7 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v8 = *(_QWORD **)(v7 + 192);
  do
  {
    while ( 1 )
    {
      v9 = v39;
      HeteroSets = KiGenerateHeteroSets(
                     (__int64)v8,
                     v39,
                     SHIDWORD(v33),
                     v34,
                     SDWORD1(v33),
                     SDWORD2(v33),
                     (__int64 *)&v36);
      v11 = v8[(int)v35 + 2];
      v12 = v11 & v8[1];
      if ( CanSelectSoftParkedProcessor && !v12 )
        v12 = v11 & v8[2] & v8[12];
      v13 = v37;
      if ( (v37 & v12) == 0 && !HeteroSets )
      {
        v13 = v37;
        if ( (v37 & v8[10]) == 0 )
        {
          v13 = v9;
          *((_QWORD *)&v36 + 1) = v9;
          v37 = v9;
          *(_QWORD *)&v36 = v9;
        }
      }
      v14 = v13 & v12;
      if ( CanSelectSoftParkedProcessor && !v14 )
        v14 = v11 & v37 & v8[2] & v8[12];
      v15 = KiHeteroSelectIdleProcessor(a2, (_DWORD)v8, v7, v14, (__int64)&v33, (__int64)&v36);
      v16 = v15;
      if ( !v15 )
        break;
      result = KiHeteroAttemptPreemptionSwap((__int64)v8, v7, v14, v15, (__int64)&v33, (__int64)&v36, a4);
      if ( (int)result >= 0 )
        return result;
      if ( (_DWORD)result != -1073741267 )
      {
        KiAcquirePrcbLocksForIsolationUnit(v16, v35, &v38);
        if ( !(unsigned int)KiIsIsolationUnitIdleByHandle(&v38, v18, v19, v20) )
          goto LABEL_30;
        v21 = *(_BYTE *)(v16 + 35);
        if ( (v21 & 8) == 0 )
          goto LABEL_20;
        if ( CanSelectSoftParkedProcessor && (v21 & 0xD) == 0xC )
        {
          KiReleasePrcbLocksForIsolationUnit(&v38);
          if ( (unsigned __int8)KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule(v16, v8, v35, &v38) )
          {
LABEL_20:
            *(_QWORD *)(a4 + 8) = 1LL;
            goto LABEL_35;
          }
        }
        else
        {
LABEL_30:
          KiReleasePrcbLocksForIsolationUnit(&v38);
        }
      }
    }
    v22 = v37;
    if ( CanSelectSoftParkedProcessor )
      break;
    CanSelectSoftParkedProcessor = KiCanSelectSoftParkedProcessor(a2, v7, v37);
  }
  while ( CanSelectSoftParkedProcessor );
  v23 = *((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) == v22 )
    v23 = 0LL;
  v24 = KiSelectProcessorToPreempt(a2, v7, v22, v23);
  v25 = v24;
  if ( (v22 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v26 = *(unsigned __int8 *)(v24 + 208);
    v27 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v28, __ROR8__(v22, v27));
    v25 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v26 + ((v27 + (_BYTE)v28) & 0x3F)]];
  }
  KiAcquirePrcbLocksForPreemptionAttempt(v25, v35, &v38);
  v29 = v8[1];
  if ( CanSelectSoftParkedProcessor )
    v29 |= v8[2] & v8[12];
  if ( (v8[(int)v35 + 2] & v37 & v29) != 0 )
    goto LABEL_30;
  *(_DWORD *)(a4 + 8) = 0;
  if ( (*(_BYTE *)(v25 + 35) & 8) != 0 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v38);
    KiSelectCandidateProcessor(v25, a2, v37, v35, (__int64)&v38);
    if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v38, v30, v31, v32) )
      *(_DWORD *)(a4 + 8) = 1;
  }
  *(_DWORD *)(a4 + 12) = 0;
LABEL_35:
  result = v38;
  *(_QWORD *)a4 = v38;
  return result;
}
