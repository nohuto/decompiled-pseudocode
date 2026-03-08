/*
 * XREFs of PpmRegisterPerfCap @ 0x14058AF70
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140591DB0 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140591F00 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1405977CC (PpmEventBiosCapChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140598218 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140598320 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventThermalCapChange @ 0x140599200 (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x14098FE08 (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r13d
  __int64 *v5; // rdi
  unsigned int v6; // r10d
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 Prcb; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !a1[5] )
  {
    v4 = a1[1];
    if ( v4 != -1 )
    {
      Prcb = KeGetPrcb(v4);
      v5 = *(__int64 **)(Prcb + 33976);
      v7 = *(_QWORD *)(Prcb + 33968);
      goto LABEL_14;
    }
LABEL_32:
    v2 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
    return v2;
  }
  v3 = PpmPerfDomainHead;
  v4 = -1;
  v5 = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_32;
  do
  {
    v6 = *(_DWORD *)(v3 + 296);
    v7 = v3;
    v8 = 0;
    if ( v6 )
    {
      v9 = *(_QWORD *)(v3 + 312);
      while ( 1 )
      {
        v10 = v9 + 144LL * v8;
        if ( *(_DWORD *)(v10 + 16) )
        {
          if ( *(_DWORD *)(v10 + 20) == a1[1] )
            break;
        }
        if ( ++v8 >= v6 )
          goto LABEL_10;
      }
      v5 = (__int64 *)(v9 + 144LL * v8);
      if ( v10 )
        break;
    }
LABEL_10:
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &PpmPerfDomainHead );
LABEL_14:
  if ( !v7 || !v5 )
    goto LABEL_32;
  v12 = a1[2];
  v13 = a1[3];
  *((_DWORD *)v5 + 8) = a1[4];
  v14 = *((_DWORD *)v5 + 6);
  if ( v14 != v12 )
  {
    if ( v14 == 100 )
    {
      v5[5] = MEMORY[0xFFFFF78000000008];
    }
    else if ( v12 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack((MEMORY[0xFFFFF78000000008] - v5[5]) / 0x2710uLL, v4);
      v5[5] = 0LL;
    }
    v15 = *v5;
    *((_DWORD *)v5 + 6) = v12;
    if ( v15 )
    {
      PpmEventBiosCapChange(v15, v12);
    }
    else if ( !*(_DWORD *)(v7 + 304) )
    {
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v7 + 16) - 33968LL, (unsigned int)a1[1], v12);
    }
    PopDiagTraceProcessorThrottlePerfTrack(100 - v12, v4);
  }
  if ( *((_DWORD *)v5 + 7) != v13 )
  {
    v16 = *v5;
    *((_DWORD *)v5 + 7) = v13;
    if ( v16 )
    {
      PpmEventThermalCapChange(v16, v13);
    }
    else if ( !*(_DWORD *)(v7 + 304) )
    {
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v7 + 16) - 33968LL, (unsigned int)a1[1], v13);
    }
  }
  *(_BYTE *)(v7 + 1061) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v2;
}
