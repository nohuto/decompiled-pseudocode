/*
 * XREFs of ViAdapterCallback @ 0x140AC4860
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x1405CC650 (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC1290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  char v13; // al
  _DWORD *v15; // rdx
  volatile signed __int64 *v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  _QWORD *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 224) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 228) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)a4 + 1);
  v11 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v12 = v10(a1, a2, v6, v11);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v12;
  a4[13] = v12;
  v13 = *(_BYTE *)(v4 + 228);
  if ( v12 != 1 )
  {
    if ( !v13 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v12 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v15 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v15 && *v15 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v16 = (volatile signed __int64 *)(v4 + 176);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 176));
    v18 = *((_QWORD *)a4 + 9);
    v19 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v18 + 8) != a4 + 18 || (_DWORD *)*v19 != a4 + 18 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v17);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v12;
  }
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 216), 0xFFFFFFFF);
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 80));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 288) = a4[12];
  return 1LL;
}
