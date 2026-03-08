/*
 * XREFs of HalpBlkWdFatalExceptionCheck @ 0x140528C94
 * Callers:
 *     HalpBlkPoBusyWait @ 0x140528290 (HalpBlkPoBusyWait.c)
 *     HalpBlkWdWorkerRoutine @ 0x140528D20 (HalpBlkWdWorkerRoutine.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall HalpBlkWdFatalExceptionCheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r8
  __int64 v2; // rcx
  ULONG_PTR result; // rax

  v1 = (unsigned int)BugCheckParameter2;
  v2 = *(_QWORD *)(HalpBlkPcr + 8LL * (unsigned int)BugCheckParameter2);
  result = *(_QWORD *)(v2 + 120);
  if ( result )
    KeBugCheckEx(0x1DAu, 5uLL, v1, *(unsigned __int8 *)(v2 + 112), result);
  return result;
}
