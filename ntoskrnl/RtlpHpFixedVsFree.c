/*
 * XREFs of RtlpHpFixedVsFree @ 0x140201840
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpFixedVsFree(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rsi
  unsigned int v7; // r11d
  __int64 v8; // r12
  int v9; // r13d
  int v10; // r15d
  unsigned __int8 v11; // r14
  __m128i v12; // xmm0
  __int64 *v13; // rdx
  bool v14; // zf
  __int64 result; // rax
  bool i; // zf
  __int64 v17; // r8
  __int64 *v18; // r9
  unsigned __int8 v19; // al
  __int32 v20; // eax
  volatile LONG *v21; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  unsigned __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v4 = (unsigned __int64)a3 >> 12;
  v6 = (a2 - a1) >> 12;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v11 = -1;
  }
  else
  {
    v19 = RtlpHpAcquireLockExclusive(a1 + 24, *(unsigned int *)(a1 + 32));
    v7 = a3;
    v11 = v19;
  }
  v12 = *(__m128i *)(a1 + 48);
  v27 = *(_QWORD *)(a1 + 48);
  v28 = a1 ^ _mm_srli_si128(v12, 8).m128i_u64[0];
  if ( v6 >= v27 )
    goto LABEL_15;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64((const signed __int64 *)(v28 + 8 * (v6 >> 6)), v6 & 0x3F) )
      goto LABEL_11;
LABEL_15:
    RtlpLogHeapFailure(8, a1, v9, v7, v8, 0LL);
    __fastfail(0x32u);
  }
  if ( v27 - v6 < v4 )
    goto LABEL_15;
  v13 = (__int64 *)(v28 + 8 * (v6 >> 6));
  v17 = *v13;
  v18 = (__int64 *)(v28 + 8 * ((v6 + v4 - 1) >> 6));
  if ( v13 == v18 )
  {
    v14 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6) & v17) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6;
  }
  else
  {
    for ( i = ((-1LL << v6) & v17) == -1LL << v6; ; i = *v13 == -1 )
    {
      if ( !i )
        goto LABEL_15;
      if ( ++v13 == v18 )
        break;
    }
    v14 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1)) & *v13) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1);
  }
  if ( !v14 )
    goto LABEL_15;
LABEL_11:
  result = RtlClearBitsEx(&v27, v6, v4);
  if ( !v10 )
  {
    v20 = *(_DWORD *)(a1 + 32);
    v21 = (volatile LONG *)(a1 + 24);
    if ( v20 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v14 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = v11;
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      result = KeAbPostRelease((ULONG_PTR)v21);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14 )
      {
        result = (__int64)&CurrentThread->152;
        if ( *(_QWORD *)result != result )
          return KiCheckForKernelApcDelivery();
      }
    }
  }
  return result;
}
