__int64 __fastcall HalpInterruptSetRemappedDestinationHv(unsigned int *a1, int *a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int ControllerAndLineState; // eax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  char v21; // [rsp+68h] [rbp+28h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v5 = *a2;
  v21 = 0;
  if ( v5 )
  {
    if ( v5 == 3 )
    {
      v6 = HalpHvRetargetDeviceMsiInterrupt(a2, a3);
      v7 = v6;
      if ( v6 < 0 )
        HalpInterruptSetProblemEx(0, 37, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 723);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v22, &v19);
  if ( ControllerAndLineState < 0 )
  {
    HalpInterruptSetProblemEx(
      v22,
      18,
      ControllerAndLineState,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      741);
    return (unsigned int)-1073741811;
  }
  v9 = v22;
  v10 = HalpHvRetargetIoApicDeviceInterrupt(*(unsigned int *)(v22 + 256), v19, a3, &v21);
  v7 = v10;
  if ( v10 < 0 )
  {
    HalpInterruptSetProblemEx(v9, 37, v10, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 755);
    return v7;
  }
  if ( v21 )
  {
    v11 = HalpInterruptGsiToLine(*a1, &v20);
    if ( v11 < 0 )
    {
      HalpInterruptSetProblemEx(v9, 18, v11, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 769);
      return (unsigned int)-1073741811;
    }
    v12 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v7 = HalpInterruptSetLineStateInternal(v9, (__int64)&v20, v19);
    KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v12);
  }
  return v7;
}
