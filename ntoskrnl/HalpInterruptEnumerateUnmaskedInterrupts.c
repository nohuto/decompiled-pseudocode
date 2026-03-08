/*
 * XREFs of HalpInterruptEnumerateUnmaskedInterrupts @ 0x140502010
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140517C68 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedInterrupts(
        __int64 (__fastcall *a1)(__int64, _WORD *),
        __int64 a2,
        _WORD *a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  char v6; // di
  unsigned __int8 v7; // al
  ULONG_PTR *v8; // r12
  unsigned __int64 v9; // r13
  ULONG_PTR *v10; // r9
  ULONG_PTR *v11; // rax
  ULONG_PTR *v12; // r15
  ULONG_PTR *v13; // rsi
  int v14; // ebp
  int v15; // ecx
  int v16; // r8d
  _DWORD *v17; // rdx
  int v18; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  ULONG_PTR *v27; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v28; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)a3[1];
  if ( *a3 && v4 >= 0x20 )
  {
    memset(a3, 0, v4 - 4);
    v5 = 0;
    v6 = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v8 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v9 = v7;
    while ( v8 != &HalpRegisteredInterruptControllers )
    {
      v10 = v8;
      v27 = v8;
      v8 = (ULONG_PTR *)*v8;
      v11 = v10 + 33;
      v12 = (ULONG_PTR *)v10[33];
      v28 = v10 + 33;
      while ( v12 != v11 )
      {
        v13 = v12;
        v12 = (ULONG_PTR *)*v12;
        if ( *((_DWORD *)v13 + 7) != -1 )
        {
          v14 = *((_DWORD *)v13 + 5);
          if ( v14 < *((_DWORD *)v13 + 6) )
          {
            v15 = *((_DWORD *)v13 + 5);
            do
            {
              v16 = v14 - v15;
              v17 = (_DWORD *)(v13[5] + 56LL * (unsigned int)(v14 - v15));
              if ( (v17[3] & 1) != 0 )
              {
                v18 = *((_DWORD *)v13 + 7);
                a3[2] = 0;
                *((_DWORD *)a3 + 4) = v16 + v18;
                *((_DWORD *)a3 + 2) = v17[2];
                *((_DWORD *)a3 + 3) = *v17;
                *((_QWORD *)a3 + 3) = v10[46];
                v6 = a1(a2, a3);
                if ( !v6 )
                  goto LABEL_16;
                v15 = *((_DWORD *)v13 + 5);
                v10 = v27;
              }
              ++v14;
            }
            while ( v14 < *((_DWORD *)v13 + 6) );
            v11 = v28;
          }
        }
      }
    }
LABEL_16:
    KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    if ( v6 && SecondaryIcServicesEnabled )
      return (unsigned int)HalpInterruptEnumerateUnmaskedSecondaryInterrupts(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
