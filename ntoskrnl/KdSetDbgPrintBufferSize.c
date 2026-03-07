__int64 __fastcall KdSetDbgPrintBufferSize(unsigned int a1)
{
  unsigned int v1; // r15d
  _BYTE *Pool2; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // cl
  struct _KPRCB *v8; // r10
  _DWORD *v9; // r9
  int v10; // eax
  bool v11; // zf
  size_t v12; // rdi
  PVOID v13; // rbp
  size_t v14; // rbx
  size_t v15; // rax
  size_t v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax

  v1 = a1;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( a1 > 0x1000000 )
    return 3221225711LL;
  if ( a1 <= 0x1000 )
  {
    v1 = 4096;
    Pool2 = &KdPrintDefaultCircularBuffer;
    while ( 1 )
    {
LABEL_9:
      if ( !KdpPrintSpinLock )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v6) = 0x8000;
          else
            v6 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          SchedulerAssist[5] |= v6;
        }
        if ( !_InterlockedCompareExchange64(&KdpPrintSpinLock, 1LL, 0LL) )
        {
          v12 = 0LL;
          v13 = KdPrintCircularBuffer;
          qword_140D18228 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)KdPrintBufferSize )
          {
            if ( KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer >= (unsigned __int64)(unsigned int)KdPrintBufferSize )
              KdPrintRolloverCount = 0;
            v14 = (KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer) & -(__int64)(KdPrintWritePointer
                                                                                       - (_UNKNOWN *)KdPrintCircularBuffer < (unsigned __int64)(unsigned int)KdPrintBufferSize);
            if ( KdPrintRolloverCount )
            {
              v12 = (unsigned int)KdPrintBufferSize - v14;
              memmove(Pool2, (char *)KdPrintCircularBuffer + v14, v12);
            }
            memmove(&Pool2[v12], v13, v14);
            v12 += v14;
            if ( KdPrintRolloverCount )
            {
              v15 = 0LL;
              if ( *Pool2 )
              {
                do
                {
                  if ( v15 >= v12 )
                    break;
                  ++v15;
                }
                while ( Pool2[v15] );
              }
              v16 = v15 + 1;
              if ( v16 < v12 )
              {
                v12 -= v16;
                memmove(Pool2, &Pool2[v16], v12);
              }
            }
          }
          memset(&Pool2[v12], 0, v1 - v12);
          ++KdPrintBufferChanges;
          qword_140D18228 = 0LL;
          KdPrintCircularBuffer = Pool2;
          KdPrintBufferSize = v1;
          KdPrintWritePointer = &Pool2[v12];
          KdPrintRolloverCount = 0;
          _InterlockedExchange((volatile __int32 *)&KdpPrintSpinLock, 0);
          if ( KiIrqlFlags )
          {
            v17 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v19 = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v11 = (v20 & v19[5]) == 0;
              v19[5] &= v20;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          if ( v13 && v13 != &KdPrintDefaultCircularBuffer )
            ExFreePoolWithTag(v13, 0);
          return 0LL;
        }
        if ( KiIrqlFlags )
        {
          v7 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            v8 = KeGetCurrentPrcb();
            v9 = v8->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & v9[5]) == 0;
            v9[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(v8);
          }
        }
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  Pool2 = (_BYTE *)ExAllocatePool2(66LL, a1, 1649435723LL);
  if ( Pool2 )
    goto LABEL_9;
  return 3221225495LL;
}
