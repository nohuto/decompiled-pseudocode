/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1402AB8A8
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402ADF34 (KiShouldPreemptionBeDeferred.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402AEDD4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402AF340 (KiRecomputeGroupSchedulingRank.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403554AC (KiInsertDeferredPreemptionApc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  char v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rsi
  char v16; // al
  char v17; // r14
  __int64 v18; // r12
  __int64 v19; // rdi
  int v20; // r13d
  char v21; // si
  __int64 v22; // rcx
  char v23; // r11
  _QWORD *v24; // rdi
  __int64 *v25; // r15
  char v26; // r11
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r11
  char v30; // dl
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // r8d
  char v35; // r10
  _DWORD *v36; // r11
  __int64 v37; // r10
  _DWORD *v38; // rcx
  unsigned __int8 v39; // r8
  __int64 i; // rdx
  _DWORD *v41; // rax
  char v42; // r15
  __int64 v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+20h] [rbp-E0h]
  _QWORD *v46; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  _DWORD v49[84]; // [rsp+40h] [rbp-C0h] BYREF

  v46 = a3;
  v47 = a2;
  BYTE2(v44) = a4;
  memset(v49, 0, sizeof(v49));
  LOWORD(v44) = 0;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  LOBYTE(v9) = KiAcquirePrcbLocksForIsolationUnit(a1, 0, a2);
  if ( v8 > *(_QWORD *)(a1 + 34520) )
  {
    LOBYTE(v9) = KiGroupSchedulingGenerationEnd(a1, a2, v8);
    return v9;
  }
  v11 = a3[13];
  v12 = v11;
  if ( v11 )
  {
    v9 = *(unsigned int *)(a1 + 216);
    v13 = v9 + v11;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      v15 = 0LL;
      v48 = v14;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 104);
        if ( v15 )
          v15 += *(unsigned int *)(a1 + 216);
      }
      while ( 1 )
      {
        v16 = *(_BYTE *)(v13 + 112);
        if ( (v16 & 4) != 0 )
        {
          if ( (v16 & 2) != 0 )
            goto LABEL_34;
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v13, v12) )
          {
            if ( (*(_BYTE *)(v13 + 112) & 1) != 0 )
            {
              LOBYTE(v10) = 1;
              KiRemoveSchedulingGroupQueue(a1, v13, v10);
            }
            goto LABEL_34;
          }
          if ( *(_QWORD *)v13 >= *(_QWORD *)(v13 + 24) )
          {
            KiRecomputeGroupSchedulingRank(v12, v13, a1);
            if ( v15 == v13 )
              BYTE1(v44) = 1;
LABEL_34:
            v7 = 1;
            LOBYTE(v44) = 1;
            v17 = 1;
            goto LABEL_10;
          }
          v17 = v44;
          if ( BYTE2(v44) )
            v7 = 1;
        }
        else
        {
          KiComputeGroupSchedulingRank(v12, a1, v10, v13);
          if ( (*(_BYTE *)(v13 + 112) & 4) != 0 )
          {
            LOBYTE(v44) = 1;
            v7 = 1;
            v17 = 1;
            if ( v15 == v13 )
              BYTE1(v44) = 1;
          }
          else
          {
            v17 = v44;
          }
        }
LABEL_10:
        v13 = *(_QWORD *)(v13 + 408);
        if ( !v13 )
        {
          v18 = (__int64)v46;
          v19 = v46[13];
          if ( v19 )
            v19 += *(unsigned int *)(a1 + 216);
          v46 = 0LL;
          KiStartRescheduleContext((__int64)v49, v47, 0LL);
          if ( v7 && !v48 )
          {
            if ( KiIsThreadConstrainedBySchedulingGroup(v18)
              && !(unsigned __int8)KiShouldPreemptionBeDeferred(v28)
              && (unsigned __int8)KiCheckForMaxOverQuotaScb(v19) )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v49, a1);
              KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v32, 0LL, 0LL, v44);
              v20 = v34 + 1;
              if ( (v35 & 2) != 0 )
              {
                LOBYTE(v33) = v49[0];
                v37 = 0LL;
                if ( LOBYTE(v49[0]) )
                {
                  do
                  {
                    v38 = &v49[10 * v37 + 4];
                    if ( v38 != v36 )
                    {
                      KiAdjustRescheduleContextEntryForThreadRemoval(v38, v33, 0LL, 0LL, v45);
                      LOBYTE(v33) = v49[0];
                    }
                    v37 = (unsigned int)(v20 + v37);
                  }
                  while ( (unsigned int)v37 < (unsigned __int8)v33 );
                }
                v49[1] = 0;
              }
            }
            else
            {
              v29 = KiFindRescheduleContextEntryForPrcb(v49, a1);
              LOBYTE(v20) = 1;
              v30 = *(_BYTE *)(v29 + 32);
              *(_BYTE *)(v29 + 34) |= 2u;
              *(_BYTE *)(v29 + 32) = v30 | 8;
              if ( (v30 & 2) != 0 )
              {
                v39 = v49[0];
                for ( i = 0LL; (unsigned int)i < v39; i = (unsigned int)(i + 1) )
                {
                  v41 = &v49[10 * i + 4];
                  if ( v41 != (_DWORD *)v29 )
                  {
                    *((_BYTE *)v41 + 32) |= 8u;
                    *((_BYTE *)v41 + 34) |= 2u;
                    v39 = v49[0];
                  }
                }
              }
            }
            goto LABEL_38;
          }
          if ( v17 && v48 && v15 )
          {
            if ( v15 == v19 )
            {
              LOBYTE(v20) = 1;
              goto LABEL_38;
            }
            do
            {
              if ( !v15 )
                break;
              v15 = *(_QWORD *)(v15 + 408);
            }
            while ( v15 != v19 );
            LOBYTE(v20) = 1;
            if ( v19 == v15 || BYTE1(v44) )
LABEL_38:
              KiSearchForNewThreadsForRescheduleContext(v49, (__int64)&v46);
          }
          else
          {
            LOBYTE(v20) = 1;
          }
          KiCommitRescheduleContext(v49, a1, 0LL, &v46);
          v21 = 0;
          LOBYTE(v9) = KiIsThreadConstrainedBySchedulingGroup(v18);
          if ( (_BYTE)v9 )
          {
            LOBYTE(v9) = KiShouldPreemptionBeDeferred(v22);
            if ( (_BYTE)v9 )
            {
              v21 = 0;
              if ( (*(_DWORD *)(v18 + 120) & 0xC00) == 0 )
                v21 = v20;
            }
          }
          v24 = v46;
          if ( v23 || v46 || v21 )
          {
            v25 = v47;
            KiReleasePrcbLocksForIsolationUnit(v47);
            if ( v26 )
            {
              KiCompleteRescheduleContext(v49, a1);
              v27 = a1 + 12760;
              KiFlushSoftwareInterruptBatch(a1 + 12760);
            }
            else
            {
              v27 = a1 + 12760;
            }
            if ( v24 )
            {
              v42 = 0;
              v46 = (_QWORD *)*v24;
              do
              {
                KiDeferredReadySingleThread(a1, (unsigned __int64)(v24 - 27), (__int64)&v46);
                v24 = v46;
                v42 += v20;
                if ( v46 )
                  v46 = (_QWORD *)*v46;
                if ( (v42 & 0xF) == 0 )
                  KiFlushSoftwareInterruptBatch(v27);
              }
              while ( v24 );
              KiFlushSoftwareInterruptBatch(v27);
              v25 = v47;
            }
            if ( v21 )
              KiInsertDeferredPreemptionApc(a1, v18, 0LL);
            LOBYTE(v9) = KiAcquirePrcbLocksForIsolationUnit(a1, 0, v25);
          }
          return v9;
        }
        v12 = v13 - *(unsigned int *)(a1 + 216);
      }
    }
  }
  return v9;
}
