__int64 __fastcall HalpInterruptSetDestination(unsigned int *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r9
  __int64 v5; // r8
  unsigned int v8; // ebx
  int v9; // r8d
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  unsigned int *v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+60h] [rbp+10h] BYREF
  int v21; // [rsp+64h] [rbp+14h]
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF

  v3 = a3;
  v22 = 0LL;
  v5 = *a1;
  v17[1] = 0;
  if ( (_DWORD)v5 == 3 && (unsigned __int8)HalpInterruptIsHvMsiRemappingSupported(a1, a2, v5, v3)
    || !(_DWORD)v5 && (unsigned __int8)HalpInterruptIsHvMsiRemappingSupported(a1, a2, v5, v3) )
  {
    return (unsigned int)HalpInterruptSetRemappedDestinationHv(v3, a1, a2);
  }
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0
    && ((unsigned int)HalpInterruptModel(a1, a2, v5, v3) == 1 || v9) )
  {
    return (unsigned int)HalpInterruptSetRemappedDestination(v3, a1, a2);
  }
  if ( !v3 )
    return (unsigned int)-1073741811;
  if ( (int)HalpInterruptGsiToLine(*v3, &v22) < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 559);
    return (unsigned int)-1073741811;
  }
  v20 = -1;
  v19 = a1 + 10;
  v17[0] = 1;
  v18 = a2;
  v21 = 1;
  v10 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = HalpInterruptSetDestinationInternal(&v22, v17, &v20);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  return v8;
}
