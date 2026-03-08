/*
 * XREFs of EtwpCovSampCaptureQueueApc @ 0x1406010A0
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x140461CA8 (EtwpCovSampLookasidePop.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     KeTryToInsertQueueApc @ 0x140570BD0 (KeTryToInsertQueueApc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // r12d
  __int64 v3; // r9
  int v5; // r14d
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // r15
  PSLIST_ENTRY v12; // rax
  PSLIST_ENTRY v13; // rbp
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v16; // rax
  __int64 v17; // rbx
  __int64 Next; // rdx
  __int64 v20; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = qword_140C31888;
  v20 = qword_140C31888;
  v5 = 1;
  if ( CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1)
    || CurrentThread->SuspendCount
    || (CurrentThread->MiscFlags & 0x4000) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  v6 = (volatile signed __int32 *)(&CurrentThread[1].SwapListEntry + 1);
  if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
  {
    v8 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v9, v8);
    v10 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 4) & 0x1FF;
    v11 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * (v8 ^ (1 << v9)) + 8);
    v12 = EtwpCovSampLookasidePop(v3, v11 + 8 * (v10 + 2));
    v13 = v12;
    if ( !v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 8 * v10 + 308), 1u);
      v7 = -1073741670;
      goto LABEL_23;
    }
    v14 = (__int64)(&v12[3].Next + 1);
    KeInitializeApc(
      (__int64)(&v12[3].Next + 1),
      (__int64)CurrentThread,
      0,
      (__int64)EtwpCovSampCaptureApc,
      (__int64)EtwpCovSampCaptureApcRundown,
      (__int64)EtwpCovSampCaptureApc,
      0,
      v20);
    *((_QWORD *)&v13[7].Next + 1) = 0LL;
    LODWORD(v13[9].Next) = MEMORY[0xFFFFF78000000320];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        v16 = KeGetCurrentThread();
        v2 = 1;
        --v16->KernelApcDisable;
      }
      if ( !(unsigned __int8)KeInsertQueueApc(v14, a1, 0LL, 0) )
      {
        v7 = -1073741823;
        goto LABEL_18;
      }
    }
    else if ( !KeTryToInsertQueueApc(v14, a1) )
    {
      if ( (CurrentThread->MiscFlags & 0x4000) != 0 )
        KeIsThreadRunning((__int64)CurrentThread);
      v7 = -1073741823;
      goto LABEL_21;
    }
    v5 = 0;
    v13 = 0LL;
    v7 = 0;
LABEL_18:
    if ( v2 )
      KeLeaveCriticalRegion();
    if ( !v13 )
    {
LABEL_22:
      if ( !v5 )
        return v7;
LABEL_23:
      _InterlockedAnd(v6, 0xFF7FFFFF);
      return v7;
    }
LABEL_21:
    v17 = qword_140C31888;
    memset(&v13[3].Next + 1, 0, 0x58uLL);
    Next = (__int64)v13[3].Next;
    LODWORD(v13[9].Next) = 0;
    EtwpCovSampCaptureReleaseToLookaside(v17, Next, v13);
    goto LABEL_22;
  }
  return (unsigned int)-1073740008;
}
