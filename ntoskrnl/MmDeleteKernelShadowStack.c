/*
 * XREFs of MmDeleteKernelShadowStack @ 0x140643030
 * Callers:
 *     KeUninitThread @ 0x14079B04C (KeUninitThread.c)
 *     KeUserModeCallback @ 0x1407DA1F0 (KeUserModeCallback.c)
 *     KiDeleteKernelShadowStack @ 0x14097141C (KiDeleteKernelShadowStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140642840 (MiKernelShadowStackIdealForCaching.c)
 *     VslResetKernelShadowStack @ 0x14093FF18 (VslResetKernelShadowStack.c)
 */

PSLIST_ENTRY MmDeleteKernelShadowStack(unsigned __int64 a1, int a2, char a3, ...)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // r15d
  struct _KPRCB *CurrentPrcb; // r8
  PSLIST_ENTRY result; // rax
  int *v9; // rbx
  PSLIST_ENTRY v10; // rsi
  int v11; // eax
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  va_list va1; // [rsp+80h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  BugCheckParameter4 = va_arg(va1, _QWORD);
  v13 = 0;
  v12 = 0LL;
  v4 = a2;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 > 2 )
    return (PSLIST_ENTRY)MiDeleteKernelShadowStack((__int64 *)(v5 - 24), a2, BugCheckParameter4);
  v6 = MiKernelShadowStackIdealForCaching(
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL,
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL + 8,
         (__int64)&v12,
         &v13);
  if ( (a3 & 4) != 0 && (_DWORD)v4 == 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    a2 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 == v13 && !CurrentPrcb->CachedShadowStack && (unsigned __int16 *)v12 == MiSystemPartition )
    {
      result = (PSLIST_ENTRY)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&CurrentPrcb->CachedShadowStack,
                               BugCheckParameter4,
                               0LL);
      if ( !result )
        return result;
    }
  }
  v9 = (int *)(*(_QWORD *)(v12 + 16) + 32 * (v4 + 794LL * v13 + 728));
  if ( *(unsigned __int16 *)v9 >= v9[4] )
    return (PSLIST_ENTRY)MiDeleteKernelShadowStack((__int64 *)(v5 - 24), a2, BugCheckParameter4);
  v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v12 + 464));
  if ( !v10 )
    return (PSLIST_ENTRY)MiDeleteKernelShadowStack((__int64 *)(v5 - 24), a2, BugCheckParameter4);
  if ( (_DWORD)v4 != 2 )
  {
    v11 = VslResetKernelShadowStack((unsigned int)v4, (ULONG_PTR *)va);
    if ( v11 < 0 )
      KeBugCheckEx(0x1Au, 0x3502uLL, v5 - 24, v11, BugCheckParameter4);
  }
  v10[1].Next = (_SLIST_ENTRY *)BugCheckParameter4;
  result = RtlpInterlockedPushEntrySList((PSLIST_HEADER)v9, v10);
  if ( v6 )
    *((_BYTE *)v9 + 29) = 1;
  return result;
}
