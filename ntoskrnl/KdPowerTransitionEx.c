/*
 * XREFs of KdPowerTransitionEx @ 0x1403A7D80
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x140565128 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x14056537C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransition @ 0x1405655B0 (KdPowerTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405976B0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PpmCancelExitLatencyTrace @ 0x1403A7EC8 (PpmCancelExitLatencyTrace.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // esi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  int v6; // esi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v11; // rcx
  unsigned __int8 v12; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 ^ a1 & 0x40000000;
    if ( (_BYTE)KdDebuggerEnabled || (a1 & 0x40000000) != 0 )
    {
      CurrentIrql = -1;
      v6 = v4 & (((v4 >> 31) & 0x60000000) + 0x20000000);
      v7 = v6 ^ v4;
      if ( KdTransportMaxPacketSize != 1152 )
        v6 = 0;
      if ( a2 )
      {
        if ( ObGetCurrentIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v14) = 4;
              else
                v14 = (-1LL << (CurrentIrql + 1)) & 4;
              SchedulerAssist[5] |= v14;
            }
          }
        }
        KxAcquireSpinLock(&KdDebuggerLock);
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 && (unsigned int)(v9 - 1) > 1 )
          v3 = -1073741811;
        else
          v3 = KdPower(v6 | 4u, &KdpContext);
      }
      else
      {
        PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
        v12 = ObGetCurrentIrql();
        if ( v12 >= 2u )
        {
          LOBYTE(v11) = 1;
          ((void (__fastcall *)(__int64, _QWORD))off_140C01B48[0])(v11, 0LL);
        }
        v3 = KdPower(v6 | 1u, &KdpContext);
        if ( v12 >= 2u )
          ((void (__fastcall *)(_QWORD, _QWORD))off_140C01B48[0])(0LL, 0LL);
      }
      if ( a2 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            v15 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v17 = CurrentPrcb->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v18 & v17[5]) == 0;
              v17[5] &= v18;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
