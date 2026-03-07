PHYSICAL_ADDRESS *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  volatile signed __int32 *v9; // rdx
  struct _KPRCB *v10; // rax
  PHYSICAL_ADDRESS *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  PHYSICAL_ADDRESS *HypercallCachedPages; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  _DWORD *SchedulerAssist; // r10
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  volatile signed __int32 *v22; // rdx
  struct _KPRCB *v23; // rax
  __int16 v24; // [rsp+40h] [rbp-8h]

  v4 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = (PHYSICAL_ADDRESS *)v13;
    if ( v13 )
    {
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = CurrentPrcb;
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 24) = v13[1].Next;
    }
    else
    {
      LODWORD(v15) = 4;
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        HypercallCachedPages = (PHYSICAL_ADDRESS *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_DWORD *)a1 = 2;
        CurrentIrql = KeGetCurrentIrql();
        *(_BYTE *)(a1 + 8) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v19 != 2 )
                v15 = (-1LL << (v19 + 1)) & 4;
              SchedulerAssist[5] |= v15;
            }
          }
        }
        PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
      }
      else
      {
        *(_DWORD *)a1 = 4;
        _disable();
        v22 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 )
          _InterlockedOr(v22, 0x200000u);
        *(_DWORD *)(a1 + 12) = a2;
        *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
        v23 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)v23->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((char *)v23->HypercallCachedPages + 4096);
        }
        PhysicalAddress = HypercallCachedPages[2];
      }
      *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    }
    return HypercallCachedPages;
  }
  else
  {
    *(_DWORD *)a1 = 4;
    _disable();
    v9 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v9 )
      _InterlockedOr(v9, 0x200000u);
    *(_DWORD *)(a1 + 12) = a2;
    *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (PHYSICAL_ADDRESS *)v4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 16);
  }
  return result;
}
