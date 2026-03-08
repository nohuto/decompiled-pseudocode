/*
 * XREFs of PerfLogSpinLockRelease @ 0x1405FE984
 * Callers:
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1404630E8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rbx
  char v8; // r14
  unsigned __int8 v9; // di
  __int64 v10; // rsi
  struct _KPRCB *v11; // r8
  unsigned int v12; // ecx
  unsigned __int8 NestingLevel; // dl
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // r14
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int128 *v24; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (__int64)CurrentPrcb->EtwSupport + 16;
  v8 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
  if ( v8 )
  {
    v9 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
    while ( 1 )
    {
      v10 = v7 + 32LL * --v9;
      if ( *(_QWORD *)(v10 + 8) == a1 )
        break;
      if ( !v9 )
      {
        ++*((_DWORD *)CurrentPrcb->EtwSupport + 70);
        return;
      }
    }
    v11 = KeGetCurrentPrcb();
    if ( *((_BYTE *)CurrentPrcb->EtwSupport + 273) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold || (int)a3 - *(_DWORD *)v10 <= (unsigned int)EtwpSpinLockHoldThreshold )
    {
      v12 = *(_DWORD *)(v10 + 20);
      if ( (v12 < EtwpSpinLockSpinThreshold
         || v11->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate)
        && (v12
         || (v11->SynchCounters.SpinLockAcquireCount - v11->SynchCounters.SpinLockContentionCount)
          % EtwpSpinLockAcquireSampleRate) )
      {
        goto LABEL_20;
      }
    }
    NestingLevel = v11->NestingLevel;
    *((_BYTE *)CurrentPrcb->EtwSupport + 273) = 1;
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a2;
    *((_QWORD *)&v21 + 1) = a3;
    DWORD2(v22) = KeGetCurrentThread()[1].CurrentRunTime;
    BYTE1(v23) = v8;
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(v23) = CurrentIrql;
    *(_QWORD *)&v21 = *(_QWORD *)v10;
    *(_QWORD *)&v22 = *(_QWORD *)(v10 + 16);
    HIDWORD(v22) = v11->InterruptCount - *(_DWORD *)(v10 + 24);
    v15 = *(_BYTE *)(v10 + 28);
    BYTE2(v23) = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v16 = v15 | 0x40;
LABEL_18:
        BYTE2(v23) = v16;
        goto LABEL_19;
      }
    }
    else if ( !NestingLevel )
    {
LABEL_19:
      v26 = 0;
      v24 = &v20;
      v25 = 56;
      EtwTraceKernelEvent((__int64)&v24, 1u, 0x20010000u, 0x529u, 0x602u);
      *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
      v17 = v8 - 1;
      while ( v9 < v17 )
      {
        v18 = 32 * ++v9;
        v19 = *(_OWORD *)(v18 + v7 + 16);
        *(_OWORD *)v10 = *(_OWORD *)(v18 + v7);
        *(_OWORD *)(v10 + 16) = v19;
        v10 += 32LL;
      }
      --*(_BYTE *)(v7 + 256);
      return;
    }
    v16 = v15 | 0x80;
    goto LABEL_18;
  }
}
