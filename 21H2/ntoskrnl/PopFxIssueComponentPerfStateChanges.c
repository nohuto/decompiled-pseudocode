/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x14056B598
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405692B0 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PopFxQueueWorkOrder @ 0x1403811A8 (PopFxQueueWorkOrder.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14056A698 (PopFxCompleteComponentPerfState.c)
 *     PopPluginRequestComponentPerfState @ 0x14056E1A8 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x1405729BC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140572BC0 (PopDiagTraceFxPerfRequestProgress.c)
 */

void __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r15d
  void *v12; // r12
  char v13; // r14
  int v14; // edx
  char v15; // al
  char v16; // cl
  __int64 v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+30h] [rbp-38h]
  char v20; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  v12 = Src;
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, v12);
  v13 = 1;
  v19 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( (a3 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v18, 0);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v14 = *(_DWORD *)(a2 + 16);
    v20 = 0;
    v15 = PopPluginRequestComponentPerfState(BugCheckParameter2, v14, a4, (_DWORD)v12, (__int64)&v20);
    v16 = v20;
    v13 = v15;
  }
  else
  {
    v16 = 1;
    v20 = 1;
  }
  if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), v16 != 0 ? 1610612736 : 0x20000000);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
  }
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7);
  if ( v13 )
  {
    if ( (a3 & 2) != 0 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      PopFxQueueWorkOrder(v17, v10 + 88, BugCheckParameter2);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      PopFxCompleteComponentPerfState(BugCheckParameter2, *(_DWORD *)(a2 + 16), v10, v20);
    }
  }
  else if ( v19 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 20, 0LL);
  }
}
