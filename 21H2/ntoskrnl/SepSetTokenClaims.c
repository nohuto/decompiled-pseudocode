/*
 * XREFs of SepSetTokenClaims @ 0x1406CBE28
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     SepCompareClaimAttributes @ 0x1406C5F10 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x1406CBEA4 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140925148 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // bp
  __int64 result; // rax
  unsigned int v4; // r14d
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( !P[0] )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
      v7 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v7 + 112) )
      {
        v2 = 1;
        *(PVOID *)(v7 + 112) = P[0];
        v7 = *(_QWORD *)(a1 + 216);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 104);
      KeAbPostRelease(v7 + 104);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
      v5 = P[0];
      if ( v2 )
        goto LABEL_13;
    }
    if ( SepCompareClaimAttributes((unsigned int *)v5, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_13:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
      if ( !v2 )
        SepDeleteClaimAttributes(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v5;
    }
  }
  return v4;
}
