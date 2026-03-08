/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0014574
 * Callers:
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C00ACE20 (VidSchSetPriorityContext.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00ADFC8 (VidSchSubmitGlobalCommand.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C0108830 (VidSchSetAbsolutePriorityContext.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108A08 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C0010564 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0010AD0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0037AC4 (-VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSetPriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  __int64 QuadPart; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v3 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
  if ( *((_DWORD *)a1 + 100) != (_DWORD)v3 )
  {
    v8 = *((unsigned int *)a1 + 101);
    v9 = gulPriorityToPriorityClass[v3];
    *((_DWORD *)a1 + 101) = gulPublicPriorityToSchedulingPriority[v3];
    *((_DWORD *)a1 + 100) = v3;
    *((_QWORD *)a1 + 59) = *(_QWORD *)(v6 + 8 * v9 + 2632);
    *((_QWORD *)a1 + 60) = *(_QWORD *)(v6 + 8 * v9 + 2680);
    if ( (*((_DWORD *)a1 + 46) & 2) == 0 )
      *((_QWORD *)a1 + 55) = *((_QWORD *)a1 + 59);
    if ( (_DWORD)v8 != *((_DWORD *)a1 + 101) )
    {
      if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
      {
        v12 = (__int64 *)((char *)a1 + 8);
        v13 = *((_QWORD *)a1 + 1);
        if ( *(struct _VIDSCH_CONTEXT **)(v13 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
          || (v14 = (__int64 **)*((_QWORD *)a1 + 2), *v14 != v12)
          || (*v14 = (__int64 *)v13,
              *(_QWORD *)(v13 + 8) = v14,
              VidSchiUpdateReadyBitsInNewPriority((struct _VIDSCH_NODE *)v2, a1),
              v15 = 16LL * *((unsigned int *)a1 + 101) + v2 + 2056,
              v16 = *(__int64 ***)(v15 + 8),
              *v16 != (__int64 *)v15) )
        {
          __fastfail(3u);
        }
        *((_QWORD *)a1 + 2) = v16;
        v10 = v8;
        *v12 = v15;
        *v16 = v12;
        *(_QWORD *)(v15 + 8) = v12;
        if ( *(_QWORD *)(v2 + 16 * v8 + 2056) == v2 + 16 * v8 + 2056 )
          *(_DWORD *)(v2 + 1768) &= ~(1 << v8);
        v5 = 1;
      }
      else
      {
        v10 = v8;
      }
      if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *((unsigned int *)a1 + 101) + 1776);
        v17 = *((unsigned int *)a1 + 101);
        if ( *(_DWORD *)(v2 + 4 * v17 + 1776) == 1 )
          *(_DWORD *)(v2 + 1772) |= 1 << v17;
        if ( (*(_DWORD *)(v2 + 4 * v10 + 1776))-- == 1 )
          *(_DWORD *)(v2 + 1772) &= ~(1 << v8);
        if ( *(struct _VIDSCH_CONTEXT **)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568) == a1 )
        {
          PerformanceFrequency.QuadPart = 0LL;
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *((_DWORD *)a1 + 101), QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v11 = *((_QWORD *)a1 + 7);
        if ( !v11 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v11) = (_DWORD)a1;
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(
            *((_DWORD *)a1 + 101),
            (unsigned int)&EventChangePriority,
            v7,
            v11,
            *((_DWORD *)a1 + 100),
            *((_DWORD *)a1 + 101));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1224) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1192), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
