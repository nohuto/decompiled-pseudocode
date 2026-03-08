/*
 * XREFs of PoSetProcessorQoS @ 0x14045A860
 * Callers:
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeCheckAndApplyBamQos @ 0x140458D70 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ED6EC (PpmPerfArbitratorApplyProcessorState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x14059DC24 (PpmHvSetVirtualProcessorQos.c)
 */

char __fastcall PoSetProcessorQoS(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  bool v5; // si
  char v6; // r15
  char v8; // di
  __int64 v9; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  int v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  bool v15; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int16 v21; // [rsp+30h] [rbp-8h]

  v4 = a2;
  v5 = 0;
  v6 = 0;
  v8 = 1;
  if ( a2 == *(_DWORD *)(a1 + 34112) )
    return v8;
  v9 = *(_QWORD *)(a1 + 33976);
  if ( v9 && *(_BYTE *)(v9 + 125) )
  {
    v6 = 1;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v5 = (v21 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 128));
  }
  v11 = *(unsigned __int16 *)(a1 + 34120);
  if ( !_bittest(&v11, v4) )
  {
    v12 = __rdtsc();
    v13 = v12 - *(_QWORD *)(a1 + 34096);
    if ( PpmPerfQosHysteresis[7 * v4 + *(int *)(a1 + 34112)] && v13 < *(_QWORD *)(a1 + 34104) && !*(_BYTE *)(a1 + 34061) )
    {
      v8 = 0;
      goto LABEL_17;
    }
    v14 = 2LL * *(_QWORD *)(a1 + 34104);
    *(_QWORD *)(a1 + 34096) = v12;
    *(_BYTE *)(a1 + 34061) = v13 >= v14;
  }
  v15 = PpmPerfVmQosSupported == 0;
  *(_DWORD *)(a1 + 34112) = v4;
  if ( v15 )
    PpmPerfArbitratorApplyProcessorState(a1, 1u, 0LL, a4);
  else
    PpmHvSetVirtualProcessorQos(a1);
  *(_BYTE *)(a1 + 236) = v4;
LABEL_17:
  if ( v6 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v9 + 128));
    if ( v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        _m_prefetchw(v17);
        v18 = *v17;
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(v17, v18 & 0xFFDFFFFF, v18);
        }
        while ( v19 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
  return v8;
}
