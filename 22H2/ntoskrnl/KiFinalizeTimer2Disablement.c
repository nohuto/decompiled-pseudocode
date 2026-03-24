/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x140348F6C
 * Callers:
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KiUpdateTimer2Flags @ 0x140348E54 (KiUpdateTimer2Flags.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r12
  char v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  void (__fastcall *v9)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r8
  _QWORD v17[3]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = 0LL;
  v8 = KiWaitAlways;
  v9 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      *(_QWORD *)(a1 + 112) ^ KiWaitNever,
                                                                                      KiWaitNever)));
  if ( v9 )
  {
    v7 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 120) ^ KiWaitNever, KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v8;
    }
    if ( v6 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v18, 1073872896LL, v8, (__int64)SchedulerAssist);
    v9(v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v6 )
  {
    v17[1] = v9;
    v16 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v7 ^ KiWaitAlways), KiWaitNever));
    v17[2] = v16;
    v17[0] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              KiWaitAlways ^ _byteswap_uint64(a1 ^ KiWaitAlways) ^ _byteswap_uint64(a1 ^ __ROL8__(v4 ^ KiWaitNever, KiWaitNever)),
                              KiWaitNever));
    if ( !v9 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v18, 1073872896LL, v16, KiWaitNever);
    EtwTraceTimedEvent(0xF6Cu, 0x40020000u, (__int64)v17, 24, 0x400E02u, (__int64)v18);
  }
}
