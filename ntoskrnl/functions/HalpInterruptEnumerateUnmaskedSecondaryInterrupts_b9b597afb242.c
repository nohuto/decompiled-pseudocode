__int64 __fastcall HalpInterruptEnumerateUnmaskedSecondaryInterrupts(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3)
{
  char v7; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64, __int64, __int64); // r13
  unsigned int v11; // edi
  __int64 i; // rsi
  int v13; // edx
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // [rsp+78h] [rbp+20h]

  if ( !SecondaryIcServicesEnabled )
    return 3221225659LL;
  v7 = 1;
  v8 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v9 = SecondaryIcList;
  v20 = v8;
  do
  {
    if ( (__int64 *)v9 == &SecondaryIcList )
      break;
    v10 = *(int (__fastcall **)(__int64, __int64, __int64, __int64))(v9 + 104);
    v11 = 0;
    for ( i = *(_QWORD *)(v9 + 32); v11 < *(_DWORD *)(v9 + 20); ++v11 )
    {
      if ( *(_BYTE *)(v9 + 16 * (v11 + 10LL) + 12) )
      {
        v13 = *(_DWORD *)(v9 + 16);
        *(_WORD *)(a3 + 4) = 1;
        v14 = v11 + v13;
        *(_DWORD *)(a3 + 16) = v14;
        *(_DWORD *)(a3 + 8) = *(_DWORD *)(v9 + 16 * (v11 + 10LL) + 4);
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v9 + 16 * (v11 + 10LL));
        if ( v10(i, v14, a3 + 20, a3 + 24) >= 0 )
        {
          v7 = a1(a2, a3);
          if ( !v7 )
            break;
        }
      }
    }
    v9 = *(_QWORD *)v9;
  }
  while ( v7 );
  KxReleaseSpinLock((volatile signed __int64 *)&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v20 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v20 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v20);
  return 0LL;
}
