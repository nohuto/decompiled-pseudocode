/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x14090EBCC
 * Callers:
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x1408BD8C8 (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x14090A89C (PspUmsUnInitThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140278E60 (KeInitializeApc.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeInitializeGate @ 0x1402D2C10 (KeInitializeGate.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     memset @ 0x140414200 (memset.c)
 *     PsLookupThreadByThreadId @ 0x140625630 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x1408BD474 (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BD618 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x1408BD688 (KeSynchronizeUmsThread.c)
 */

__int64 __fastcall PspRundownUmsThreadForApcDelivery(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v8; // r13
  char v9; // r15
  __int64 result; // rax
  NTSTATUS v11; // r14d
  __int64 v12; // rdi
  struct _DMA_ADAPTER *v13; // rdi
  HANDLE ThreadId[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v15[22]; // [rsp+50h] [rbp-59h] BYREF
  PETHREAD Thread; // [rsp+110h] [rbp+67h] BYREF
  __int64 v17; // [rsp+120h] [rbp+77h]

  v17 = a3;
  memset(v15, 0, 0x80uLL);
  ThreadId[0] = 0LL;
  Thread = 0LL;
  v8 = *(_QWORD *)(a1 + 496);
  v9 = 0;
  result = KeSetUmsThreadKernelLock(a3, (unsigned __int64 *)ThreadId);
  v11 = result;
  if ( (int)result < 0 )
    return result;
  *a2 |= 4u;
  --*(_WORD *)(a1 + 486);
  if ( a4 )
  {
    v12 = _InterlockedExchange64((volatile __int64 *)(a1 + 504), -1LL);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 504);
    if ( v12 == -1 )
      goto LABEL_18;
  }
  if ( !*(_QWORD *)(v8 + 72) )
  {
    *a2 |= 1u;
LABEL_19:
    v13 = (struct _DMA_ADAPTER *)Thread;
    goto LABEL_20;
  }
  if ( !v12 )
  {
    if ( ThreadId[0] )
    {
      v11 = PsLookupThreadByThreadId(ThreadId[0], &Thread);
      if ( v11 >= 0 )
      {
        v13 = (struct _DMA_ADAPTER *)Thread;
        v9 = 1;
        if ( Thread->Process != *(_KPROCESS **)(a1 + 544) )
        {
          *a2 |= 2u;
          goto LABEL_20;
        }
        goto LABEL_9;
      }
    }
LABEL_18:
    *a2 |= 2u;
    goto LABEL_19;
  }
  v13 = *(struct _DMA_ADAPTER **)(v12 + 96);
  ObReferenceObjectSafe((__int64)v13);
LABEL_9:
  KeInitializeGate((__int64)&v15[13]);
  v15[11] = a2;
  KeInitializeApc((__int64)v15, (__int64)v13, 0, (__int64)PspRelinquishUmsThreadSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc((__int64)v15, (__int64)v13, a1, 2) )
  {
    KeWaitForGate((__int64)&v15[13], 0);
    v11 = v15[12];
    v9 = 1;
    if ( SLODWORD(v15[12]) >= 0 && (*a2 & 1) != 0 )
    {
      KeSynchronizeUmsThread(a1, a4);
LABEL_21:
      HalPutDmaAdapter(v13);
      goto LABEL_22;
    }
  }
  else
  {
    *a2 |= 2u;
    v9 = 1;
  }
LABEL_20:
  KiLeaveGuardedRegionUnsafe(a1);
  if ( v9 )
    goto LABEL_21;
LABEL_22:
  if ( v11 < 0 )
  {
    KeClearUmsThreadKernelLock(v17);
    *a2 &= ~4u;
  }
  return (unsigned int)v11;
}
