__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  void *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // edx
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+18h] BYREF

  RegionSize = 0LL;
  v4 = 0LL;
  *(_BYTE *)(a1 + 8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(void **)(a1 + 144);
  BaseAddress = v6;
  v7 = v5 + a2;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v7 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= *(_QWORD *)(a1 + 152)
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    v4 = v5;
    *(_QWORD *)(a1 + 160) = v7;
    goto LABEL_9;
  }
  if ( v7 <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  v8 = *(unsigned __int8 *)(a1 + 8);
  KxReleaseSpinLock((volatile signed __int64 *)a1);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v4;
}
