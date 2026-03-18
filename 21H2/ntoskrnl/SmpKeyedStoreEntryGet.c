/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1402A1124
 * Callers:
 *     SmpKeyedStoreSetVaRanges @ 0x140260A44 (SmpKeyedStoreSetVaRanges.c)
 *     SmStoreExistsForProcess @ 0x1402A10EC (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreReference @ 0x14037D810 (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x14045F5F6 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406E5B58 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1406EBF2C (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x1406ED260 (SmpKeyedStoreCreate.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     SmStoreCompressionStop @ 0x1407F575C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1407F584C (SmStoreCompressionStart.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x1403DF64C (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned int SessionId; // r13d
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 v11; // rdi
  struct _KTHREAD *v13; // r14
  char *p_Process; // rbx
  ULONG_PTR v15; // rdx
  unsigned int v16; // ecx
  int v17; // edi
  ULONG_PTR v18; // r13
  unsigned int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *i; // rdx
  char v24; // cl
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // edi
  __int64 v28; // r10
  __int64 v29; // r13
  _QWORD *v30; // r9
  __int64 v31; // rdx
  struct _PRIVILEGE_SET *v32; // rcx
  __int64 v33; // [rsp+38h] [rbp-28h]
  __int64 v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+50h] [rbp-10h]
  int v37; // [rsp+B0h] [rbp+50h] BYREF
  int v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  SessionId = -1;
  v37 = 0;
  v5 = a3;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (int)a3 > 0 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      goto LABEL_8;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  }
  if ( v5 )
    goto LABEL_8;
  v9 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v9 || *(_QWORD *)(v9 + 8) != *a2 )
  {
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
LABEL_15:
      v9 = 0LL;
      goto LABEL_16;
    }
LABEL_8:
    a3 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
    v10 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
    v11 = v10 & *a2;
    if ( (_DWORD)a3 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 16)
         + 8LL
         * ((37
           * (BYTE6(v11)
            + 37
            * (BYTE5(v11)
             + 37
             * (BYTE4(v11)
              + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
           + HIBYTE(v11)) & (unsigned int)(a3 - 1));
      while ( 1 )
      {
        v9 = *(_QWORD *)v9;
        if ( (v9 & 1) != 0 )
          break;
        if ( v11 == (v10 & *(_QWORD *)(v9 + 8)) )
        {
          if ( !v9 )
            break;
          if ( v5 == 2 )
          {
            v35 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
            for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                               + 8LL
                               * ((37
                                 * (BYTE6(v35)
                                  + 37
                                  * (BYTE5(v35)
                                   + 37
                                   * (BYTE4(v35)
                                    + 37
                                    * (BYTE3(v35)
                                     + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
                                 + HIBYTE(v35)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
                  (*i & 1) == 0;
                  i = (_QWORD *)*i )
            {
              if ( *i == v9 )
              {
                *i = *(_QWORD *)v9;
                --*(_DWORD *)(BugCheckParameter2 + 8);
                *(_QWORD *)v9 |= 0x8000000000000002uLL;
                break;
              }
            }
            if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
              *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter2 + 24) = v9;
          }
          goto LABEL_16;
        }
      }
    }
    if ( v5 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = *a2;
      goto LABEL_15;
    }
    v9 = (__int64)(a2 - 1);
    v37 = 1414032755;
    v18 = BugCheckParameter2 + 8;
    v19 = *(_DWORD *)(BugCheckParameter2 + 12);
    v20 = 2 * (v19 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= (unsigned int)v20 )
    {
      if ( (unsigned int)v20 < 4 )
        v20 = 4LL;
      a3 = (unsigned __int64)SmAllocWrapper(8LL * (unsigned int)v20, &v37);
      if ( a3 )
      {
        if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
        {
          v24 = -1;
          do
          {
            ++v24;
            LODWORD(v20) = (unsigned int)v20 >> 1;
          }
          while ( (_DWORD)v20 );
          v20 = (unsigned int)(1 << v24);
        }
        if ( (unsigned int)v20 > 0x4000000 )
          v20 = 0x4000000LL;
        v25 = (unsigned int)v20;
        if ( a3 > a3 + 8 * v20 )
          v25 = 0LL;
        if ( v25 )
          memset64((void *)a3, v18 | 1, v25);
        v26 = *(_DWORD *)(BugCheckParameter2 + 12);
        v27 = 0;
        v28 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (v26 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v29 = *(_QWORD *)(v18 + 8);
            while ( 1 )
            {
              v30 = *(_QWORD **)(v29 + 8LL * v27);
              if ( ((unsigned __int8)v30 & 1) != 0 )
                break;
              *(_QWORD *)(v29 + 8LL * v27) = *v30;
              v33 = v28 & v30[1];
              v31 = (37
                   * (BYTE6(v33)
                    + 37
                    * (BYTE5(v33)
                     + 37
                     * (BYTE4(v33)
                      + 37
                      * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                   + HIBYTE(v33)) & (unsigned int)(v20 - 1);
              *v30 = *(_QWORD *)(a3 + 8 * v31);
              *(_QWORD *)(a3 + 8 * v31) = v30;
            }
            v18 = BugCheckParameter2 + 8;
            ++v27;
            v26 = *(_DWORD *)(BugCheckParameter2 + 12);
          }
          while ( v27 < v26 >> 5 );
        }
        v32 = *(struct _PRIVILEGE_SET **)(v18 + 8);
        v19 = (32 * v20) | v26 & 0x1F;
        *(_QWORD *)(v18 + 8) = a3;
        *(_DWORD *)(v18 + 4) = v19;
        if ( v32 )
        {
          CmSiFreeMemory(v32);
          v19 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v19 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v19 < 0x20 )
        {
          v9 = 0LL;
LABEL_46:
          SessionId = -1;
          goto LABEL_16;
        }
      }
    }
    a3 = (unsigned __int64)a2;
    v34 = *a2 & (-1LL << (v19 & 0x1F));
    v21 = *(_QWORD *)(v18 + 8);
    v22 = (37
         * (BYTE6(v34)
          + 37
          * (BYTE5(v34)
           + 37
           * (BYTE4(v34)
            + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
         + HIBYTE(v34)) & ((v19 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v21 + 8 * v22);
    *(_QWORD *)(v21 + 8 * v22) = v9;
    ++*(_DWORD *)v18;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    goto LABEL_46;
  }
LABEL_16:
  if ( !v38 )
  {
    if ( v5 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v13 = KeGetCurrentThread();
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
      _disable();
      p_Process = (char *)&v13[1].Process;
      v15 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      v16 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v15
           || !p_Process[18]
           || (*(_DWORD *)p_Process & 1) != 0
           || *((_DWORD *)p_Process + 2) != SessionId )
      {
        ++v16;
        p_Process += 96;
        if ( v16 >= 6 )
          goto LABEL_39;
      }
      p_Process[18] = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v15, a3);
          _disable();
        }
        v17 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        v13->AbEntrySummary |= 1 << p_Process[16];
        _enable();
        if ( v17 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v13, BugCheckParameter2, v17);
        goto LABEL_21;
      }
LABEL_39:
      if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
      _enable();
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
LABEL_21:
    KeLeaveCriticalRegion();
  }
  return v9;
}
