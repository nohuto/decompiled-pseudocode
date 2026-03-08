/*
 * XREFs of MiLogMdlRangeEvent @ 0x140621060
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPidSafe @ 0x1406242B4 (MiGetPfnPidSafe.c)
 */

void __fastcall MiLogMdlRangeEvent(_QWORD *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 PfnPidSafe; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+54h] [rbp-34h]

  v7 = a1;
  v8 = 48LL * *a1 - 0x220000000000LL;
  if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 1 )
  {
    v9 = (unsigned __int8)MiLockPageInline(48LL * *a1 - 0x220000000000LL);
    if ( *(_QWORD *)MiGetLeafPfnBuddy((_QWORD *)v8) == 399680LL )
      PfnPidSafe = 0LL;
    else
      PfnPidSafe = (unsigned int)MiGetPfnPidSafe(v8, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
    v16 = 9LL;
  }
  else
  {
    PfnPidSafe = 0LL;
    v16 = 10LL;
  }
  if ( a3 )
  {
    v17 = 16 * PfnPidSafe;
    do
    {
      v18 = v7;
      v20[1] = *v7;
      v20[0] = v16 | v17;
      do
      {
        v19 = v7++;
        --a3;
      }
      while ( a3 && *v7 == a4 + *v19 );
      v23 = 0;
      v22 = 24;
      v20[2] = v7 - v18;
      v21 = v20;
      EtwTraceKernelEvent((__int64)&v21, 1u, 0x20000001u, a2, 0x11401B04u);
    }
    while ( a3 );
  }
}
