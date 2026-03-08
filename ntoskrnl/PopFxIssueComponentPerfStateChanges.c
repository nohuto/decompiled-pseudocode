/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x140588718
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x140585A60 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     PopFxQueueWorkOrder @ 0x1402B8CF4 (PopFxQueueWorkOrder.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1405870F8 (PopFxCompleteComponentPerfState.c)
 *     PopPluginRequestComponentPerfState @ 0x14058A548 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x14059155C (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140591744 (PopDiagTraceFxPerfRequestProgress.c)
 */

NTSTATUS __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r13
  int v15; // r14d
  char v16; // r12
  int v17; // r13d
  unsigned int *v18; // rsi
  unsigned int v19; // edx
  char v20; // cl
  __int64 v21; // r9
  __int64 v23; // r9
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  char v25; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, Src);
  v14 = a3;
  v15 = a3 & 2;
  v16 = 1;
  v17 = v14 & 1;
  if ( v17 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( v15 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v24, 0);
  v18 = (unsigned int *)(a2 + 16);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v19 = *v18;
    v25 = 0;
    v16 = PopPluginRequestComponentPerfState(BugCheckParameter2, v19, a4, (_DWORD)Src, (__int64)&v25);
    if ( !v16 )
      goto LABEL_18;
    v20 = v25;
  }
  else
  {
    v20 = 1;
    v25 = 1;
  }
  _InterlockedOr((volatile signed __int32 *)(v10 + 40), v20 != 0 ? 1610612736 : 0x20000000);
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
LABEL_18:
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7,
    v12,
    v13);
  if ( v16 )
  {
    if ( v15 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      return PopFxQueueWorkOrder(v10 + 88, BugCheckParameter2);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      LOBYTE(v21) = v25;
      return PopFxCompleteComponentPerfState(BugCheckParameter2, *v18, v10, v21);
    }
  }
  else if ( v17 )
  {
    return KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    return (unsigned int)PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, (unsigned __int8)v23 + 20, v23);
  }
}
