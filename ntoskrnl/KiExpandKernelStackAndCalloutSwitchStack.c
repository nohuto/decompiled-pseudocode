/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x140315700
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     MmGrowKernelStackEx @ 0x1402F61F0 (MmGrowKernelStackEx.c)
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  struct _KPRCB *StackLimit; // r14
  __int64 v12; // rsi
  struct _KPRCB *v13; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18[6]; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0LL;
  v18[0] = 0LL;
  v19 = 0;
  if ( a3 > 0x11800 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer();
  StackLimit = (struct _KPRCB *)CurrentThread->StackLimit;
  v12 = CurrentStackPointer;
  v13 = (struct _KPRCB *)(*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    v16 = KeGetCurrentStackPointer();
    if ( !KeQueryCurrentStackInformationEx(v16, (char *)&v19, &v17, v18) )
      __fastfail(4u);
    if ( v19 == 1 || v19 == 10 )
    {
      StackLimit = v17;
      v13 = v17;
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
    if ( a3 == (unsigned int)KeKernelStackSize || a3 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
      a4 |= 5u;
  }
  if ( v12 - (__int64)v13 < a3
    || (a4 & 1) != 0
    || v12 - (__int64)StackLimit < a3 && (int)MmGrowKernelStackEx(v12, a3) < 0 )
  {
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, a3, a4, a5);
  }
  else
  {
    return 3221226635LL;
  }
}
