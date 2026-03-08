/*
 * XREFs of HalEnableInterrupt @ 0x14028F730
 * Callers:
 *     KeConnectInterrupt @ 0x14028FA54 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpEnableSecondaryInterrupt @ 0x14085E574 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // esi
  unsigned __int8 v4; // al
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  int v9; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+20h] [rbp-40h]
  _DWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+80h] [rbp+20h] BYREF
  int v20; // [rsp+84h] [rbp+24h]
  __int64 v21; // [rsp+88h] [rbp+28h] BYREF

  v21 = 0LL;
  v16[1] = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    v15 = 204;
LABEL_13:
    v9 = 19;
    goto LABEL_15;
  }
  v19 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v17 = a1 + 32;
  v18 = a1 + 48;
  v16[0] = 1;
  v20 = 1;
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v15 = 313;
    goto LABEL_13;
  }
  v3 = *(_DWORD *)(a1 + 64);
  if ( (int)HalpInterruptGsiToLine(v3, &v21) < 0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, v3) )
      return (unsigned int)HalpEnableSecondaryInterrupt(a1);
    v15 = 272;
    v9 = 18;
LABEL_15:
    HalpInterruptSetProblemEx(0, v9, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v15);
    return (unsigned int)-1073741811;
  }
  v4 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  LOBYTE(v5) = *(_BYTE *)(a1 + 16);
  v6 = v4;
  v7 = HalpInterruptSetLineState(
         &v21,
         *(unsigned int *)(a1 + 12),
         v5,
         *(unsigned int *)(a1 + 24),
         *(_DWORD *)(a1 + 20),
         v16,
         &v19);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v7;
}
