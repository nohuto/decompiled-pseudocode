/*
 * XREFs of HalpInterruptRemapFixedLines @ 0x1403A9F64
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403A9F1C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1402FC29C (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140A84310 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 HalpInterruptRemapFixedLines()
{
  unsigned int v0; // ebx
  ULONG_PTR *v1; // rsi
  __int64 v2; // rdi
  _QWORD *v3; // rdx
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  bool v19; // cc
  int v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  int v23; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+B0h] [rbp+48h] BYREF
  int v25; // [rsp+B8h] [rbp+50h]
  __int64 v26; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+60h]

  v0 = 0;
  v24 = 0;
  v26 = 0LL;
  if ( HalpInterruptFixedLines && ((*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 || qword_140C62148) )
  {
    v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v23 = 0;
    while ( v1 != &HalpRegisteredInterruptControllers )
    {
      v2 = (__int64)v1;
      v1 = (ULONG_PTR *)*v1;
      if ( *(_DWORD *)(v2 + 240) == 2 )
      {
        v3 = (_QWORD *)(v2 + 264);
        v4 = *(_QWORD **)(v2 + 264);
        if ( v4 != (_QWORD *)(v2 + 264) )
        {
          do
          {
            v5 = v4;
            v4 = (_QWORD *)*v4;
            if ( *((_DWORD *)v5 + 8) == 2 )
            {
              v6 = 0;
              v7 = *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
              v25 = 0;
              if ( v7 > 0 )
              {
                v8 = 0LL;
                v9 = 0LL;
                v22 = 0LL;
                v27 = 0LL;
                while ( 1 )
                {
                  if ( *(_BYTE *)(v9 + v5[6]) )
                  {
                    LODWORD(v26) = *(_DWORD *)(v2 + 256);
                    HIDWORD(v26) = v6 + *((_DWORD *)v5 + 5);
                    v10 = v8 + v5[5];
                    if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
                    {
                      LOBYTE(v21) = 0;
                      v11 = HalpIrtAllocateIndex(&v24, 1LL, 0LL, 0LL, 0LL, v21, 0LL);
                      v0 = v11;
                      if ( v11 < 0 )
                      {
                        HalpInterruptSetProblemEx(
                          v2,
                          31,
                          v11,
                          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                          1804);
                        return v0;
                      }
                      v23 ^= (v24 ^ v23) & 0x3FFFFFFF;
                      HalpIommuUpdateRemappingTableEntry(0, v23 & 0x3FFFFFFF, v10);
                      *(_DWORD *)(v10 + 24) = 7;
                      *(_DWORD *)(v10 + 32) = v23 & 0x3FFFFFFF;
                    }
                    if ( qword_140C62148 )
                    {
                      v12 = HalpHvMapIoApicDeviceInterrupt(*(unsigned int *)(v2 + 256), v10, 0LL);
                      v0 = v12;
                      if ( v12 < 0 )
                      {
                        HalpInterruptSetProblemEx(
                          v2,
                          31,
                          v12,
                          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
                          1832);
                        return v0;
                      }
                    }
                    v13 = HalpAcquireHighLevelLock(&HalpInterruptLock);
                    v0 = HalpInterruptSetLineStateInternal(v2, (__int64)&v26, v10);
                    KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
                    if ( KiIrqlFlags )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0
                        && CurrentIrql <= 0xFu
                        && (unsigned __int8)v13 <= 0xFu
                        && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                        v18 = (v17 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v17;
                        if ( v18 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                    __writecr8(v13);
                    if ( (v0 & 0x80000000) != 0 )
                      return v0;
                    v6 = v25;
                    v9 = v27;
                    v8 = v22;
                  }
                  ++v6;
                  v27 = v9 + 16;
                  v8 += 56LL;
                  v19 = v6 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5);
                  v25 = v6;
                  v9 += 16LL;
                  v22 = v8;
                  if ( !v19 )
                  {
                    v3 = (_QWORD *)(v2 + 264);
                    break;
                  }
                }
              }
            }
          }
          while ( v4 != v3 );
        }
      }
    }
  }
  return v0;
}
