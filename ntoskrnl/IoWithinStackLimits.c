/*
 * XREFs of IoWithinStackLimits @ 0x1402B7B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r9
  ULONG_PTR StackLimit; // rcx
  _QWORD *InitialStack; // rdx
  char *v8; // rcx
  __int128 v9; // [rsp+0h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v3 = RegionStart + RegionSize;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) == 0 || CurrentThread == KeGetCurrentPrcb()->IdleThread )
  {
    *(_QWORD *)&v9 = CurrentThread->StackBase;
    StackLimit = (ULONG_PTR)CurrentThread->StackLimit;
    InitialStack = CurrentThread->InitialStack;
    while ( RegionStart < StackLimit || v3 > (unsigned __int64)v9 )
    {
      if ( !InitialStack[2] )
        return 0;
      v9 = *((_OWORD *)InitialStack + 1);
      StackLimit = InitialStack[3];
      InitialStack = (_QWORD *)InitialStack[5];
    }
  }
  else
  {
    v8 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    if ( v3 > (unsigned __int64)v8 || RegionStart < (unsigned __int64)&v8[-(unsigned int)KeKernelStackSize] )
      return 0;
  }
  return 1;
}
