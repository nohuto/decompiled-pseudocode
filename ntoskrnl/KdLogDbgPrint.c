/*
 * XREFs of KdLogDbgPrint @ 0x140AB2000
 * Callers:
 *     KdpPrint @ 0x140AB2368 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB24E8 (KdpPrompt.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(char **a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  signed __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  char *v13; // rcx
  unsigned int v14; // edi
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  v20 = 0;
  if ( (struct _KPRCB *)qword_140D18228 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v5) = 0x8000;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v5;
  }
  if ( KdPrintCircularBuffer )
  {
    v6 = *(unsigned __int16 *)a1;
    v7 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v7 = 512;
    if ( v6 > v7 )
    {
      v6 = v7;
      _InterlockedIncrement(&KdPrintTruncatedCount);
    }
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v9 = v6 + v8;
      v10 = v9 - (unsigned int)KdPrintBufferSize;
      v11 = v8;
      if ( v9 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v10 = v6 + v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v10, v8);
    }
    while ( v8 != v11 );
    if ( v10 < v11 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    if ( v9 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v14 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v11;
      KdpCopyMemoryChunks(a1[1], v11, v14, 0, 4, &v20);
      if ( v20 < v14 )
        memset((void *)(v11 + v20), 0, v14 - v20);
      v12 = v6 - v14;
      if ( v20 == v14 )
      {
        KdpCopyMemoryChunks(&a1[1][v14], (__int64)KdPrintCircularBuffer, v12, 0, 4, &v20);
        if ( v20 >= v12 )
          goto LABEL_34;
        v12 -= v20;
        v13 = (char *)KdPrintCircularBuffer + v20;
      }
      else
      {
        v13 = (char *)KdPrintCircularBuffer;
      }
    }
    else
    {
      KdpCopyMemoryChunks(a1[1], v11, v6, 0, 4, &v20);
      if ( v20 >= v6 )
        goto LABEL_34;
      v12 = v6 - v20;
      v13 = (char *)(v20 + v11);
    }
    memset(v13, 0, v12);
  }
LABEL_34:
  _InterlockedAdd((_DWORD *)&KdpPrintSpinLock + 1, 0xFFFFFFFF);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
