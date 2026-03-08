/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x1403A9C3C
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiSetTrimWhileAgingState @ 0x1402FF644 (MiSetTrimWhileAgingState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  int v4; // r13d
  _QWORD *v5; // rax
  KIRQL v6; // al
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 SchedulerAssist; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // [rsp+20h] [rbp-30h]
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 16920);
  v26[0] = 0LL;
  if ( v1 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)MiAllocatePool(64, 0xA60uLL, 0x64576D4Du);
    v1 = result;
    if ( !result )
      return result;
    *(_WORD *)result = 0;
    v4 = 1;
    *(_BYTE *)(result + 2) = 6;
    *(_DWORD *)(result + 4) = 1;
    v5 = (_QWORD *)(result + 8);
    v5[1] = v5;
    *v5 = v5;
    *(_DWORD *)(v1 + 36) = 256;
    *(_DWORD *)(v1 + 136) = 256;
    *(_BYTE *)(a1 + 17528) = *(_BYTE *)(a1 + 17528) & 0xF8 | 2;
  }
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  v7 = *(_QWORD *)(a1 + 16144);
  v8 = *(_QWORD *)(a1 + 17040);
  v25 = *(_QWORD *)(a1 + 16136);
  v9 = v6;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v24 = (v23 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
      *(_DWORD *)(SchedulerAssist + 20) &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    v11 = *(_QWORD *)(v1 + 2648);
    if ( v8 <= v11 )
      *(_QWORD *)(v1 + 2648) = -1LL;
    else
      v8 -= v11;
    v12 = 135168LL;
    if ( v8 < 0x21000 )
    {
      v8 = 135168LL;
      goto LABEL_10;
    }
  }
  v12 = v8;
  if ( v8 <= 0x200000 )
  {
LABEL_10:
    v13 = v8 >> 5;
    v14 = v8 >> 5;
    goto LABEL_11;
  }
  v13 = ((v8 - 0x200000) >> 7) + 0x10000;
  v14 = v8 >> 5;
LABEL_11:
  v15 = 1152LL;
  if ( v13 >= 0x480 )
  {
    v15 = v13;
    if ( v13 > 0x400000 )
      v15 = 0x400000LL;
  }
  *(_QWORD *)(v1 + 2384) = v15;
  if ( v8 > 0x80000 )
    v14 = ((v8 - 0x80000) >> 8) + 0x4000;
  if ( v14 < 0x121 )
  {
    v14 = 289LL;
  }
  else if ( v14 > 0x100000 )
  {
    v14 = 0x100000LL;
  }
  v16 = v15 >> 2;
  *(_QWORD *)(v1 + 2392) = v14;
  *(_QWORD *)(v1 + 2400) = v14;
  if ( v16 < 0x121 )
    v16 = 289LL;
  *(_QWORD *)(v1 + 2376) = v16;
  if ( v4 )
    *(_QWORD *)(a1 + 16920) = v1;
  MiSetTrimWhileAgingState(a1, 3LL, 289LL, SchedulerAssist);
  v17 = 100LL;
  if ( v8 / 0x3E8 > 0x64 )
    v17 = v8 / 0x3E8;
  if ( v17 > v8 )
  {
    v17 = v8 >> 1;
    if ( !(v8 >> 1) )
      v17 = 1LL;
  }
  *(_QWORD *)(v1 + 56) = v17;
  if ( v4 )
  {
    *(_WORD *)(v1 + 96) = 1;
    *(_QWORD *)(v1 + 112) = v1 + 104;
    *(_QWORD *)(v1 + 104) = v1 + 104;
    *(_BYTE *)(v1 + 98) = 6;
    *(_DWORD *)(v1 + 100) = 0;
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      LOWORD(stru_140C69450.Header.Lock) = 0;
      stru_140C69450.Header.WaitListHead.Blink = &stru_140C69450.Header.WaitListHead;
      stru_140C69450.Header.WaitListHead.Flink = &stru_140C69450.Header.WaitListHead;
      stru_140C69450.Header.Size = 6;
      stru_140C69450.Header.SignalState = 0;
    }
  }
  v18 = v25;
  if ( !v25 )
  {
    v19 = *(_QWORD *)(v1 + 2384);
    if ( 2 * v19 > v8 )
    {
      if ( v8 && v8 >= v19 && (v8 - v19) >> 1 )
        v18 = ((v8 - v19) >> 1) + v19;
      else
        v18 = 1LL;
    }
    else
    {
      v18 = 2 * v19;
    }
  }
  v26[0] = v18;
  if ( v7 )
  {
    if ( v7 < v18 )
      v18 = v7;
    v26[0] = v18;
  }
  else
  {
    v7 = v18;
    if ( v18 <= v12 )
    {
      v20 = 2 * v18;
      if ( v20 > v8 )
        v7 += (v12 - v7) >> 1;
      else
        v7 = v20;
    }
  }
  v26[1] = v7;
  v26[2] = a1;
  KeGenericCallDpcEx(MiUpdatePageThresholdsDpc, v26);
  return 1LL;
}
