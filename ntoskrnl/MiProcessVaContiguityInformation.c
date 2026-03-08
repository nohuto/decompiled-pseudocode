/*
 * XREFs of MiProcessVaContiguityInformation @ 0x14065B3D4
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadPagesTradable @ 0x1403481F0 (MiVadPagesTradable.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiGetVadCacheAttribute @ 0x14065E5C4 (MiGetVadCacheAttribute.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x140A3D224 (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  _KPROCESS *Process; // rax
  int v7; // ebx
  unsigned __int64 v8; // r8
  bool i; // cf
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // r13
  __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  __int64 LargePage; // rax
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  struct _KPRCB *v23; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v25; // eax
  __int64 v27; // [rsp+40h] [rbp-20h]
  unsigned __int64 v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  unsigned __int64 v30; // [rsp+58h] [rbp-8h]
  unsigned __int64 v31; // [rsp+A8h] [rbp+48h]
  unsigned int VaRangePhysicallyContiguous; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h]

  VaRangePhysicallyContiguous = 0;
  v4 = 0LL;
  v5 = 512LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v27 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v28 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
  if ( (int)MiAcquireNonPagedResources(v28, 0x200uLL, 1024LL, 6u) < 0 )
    return 3221225626LL;
  v31 = a1 + 16 * a2;
  for ( i = a1 < v31; i; i = a1 < v31 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x1FFFFF) != 0
      || (v8 = *(_QWORD *)a1, (*(_QWORD *)a1 & 0xFFFFFFFFFFE00000uLL) != *(_QWORD *)a1) )
    {
      VaRangePhysicallyContiguous = -1073741811;
      goto LABEL_46;
    }
    if ( v4 )
    {
      if ( v8 >= (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12
        && v8 <= (((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF) )
      {
        goto LABEL_16;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v4);
    }
    v10 = MiObtainReferencedVadEx(*(_QWORD *)a1, 2, (int *)&VaRangePhysicallyContiguous);
    v4 = v10;
    if ( !v10 )
      goto LABEL_48;
    if ( *(_QWORD *)(a1 + 8) + *(_QWORD *)a1 - 1LL > (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
    {
      VaRangePhysicallyContiguous = -1073741800;
      goto LABEL_47;
    }
    if ( !(unsigned int)MiVadSupportsPhysicalContiguityQuery(v10)
      || !(unsigned int)MiVadPagesTradable(v4)
      || (unsigned int)MiGetVadCacheAttribute(v4) != 1
      || (v7 = (*(_DWORD *)(v4 + 48) >> 12) & 0x7F) == 0 )
    {
      VaRangePhysicallyContiguous = -1073741637;
      goto LABEL_47;
    }
LABEL_16:
    if ( v7 )
      v11 = v7 - 1;
    else
      v11 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
    v12 = *(_QWORD *)a1;
    v30 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v30 )
    {
      do
      {
        if ( !(unsigned int)MiQueryVaPhysicalContiguity(v27, v12, 1, 1) )
        {
          CurrentIrql = KeGetCurrentIrql();
          v33 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( (_BYTE)CurrentIrql == 2 )
              LODWORD(v15) = 4;
            else
              v15 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v15;
          }
          LargePage = MiGetLargePage(v28, v12, 1, v11, 1u, 4, 0LL);
          v29 = LargePage;
          if ( LargePage )
            MiConvertEntireLargePageToSmall(LargePage, 1, 2, 1, 0LL, 0LL, 0LL);
          v17 = v33;
          if ( KiIrqlFlags )
          {
            v18 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v18 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
              v22 = (v21 & v20[5]) == 0;
              v8 = (unsigned int)v21 & v20[5];
              v20[5] = v8;
              if ( v22 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                v17 = v33;
              }
            }
          }
          __writecr8(v17);
          if ( !v29 )
          {
            VaRangePhysicallyContiguous = -1073741801;
            goto LABEL_46;
          }
          VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous(v27, v12, v8, v29);
        }
        v12 += 0x200000LL;
      }
      while ( v12 < v30 );
    }
    a1 += 16LL;
  }
  VaRangePhysicallyContiguous = 0;
LABEL_46:
  if ( !v4 )
    goto LABEL_48;
LABEL_47:
  MiUnlockAndDereferenceVadShared((PVOID)v4);
LABEL_48:
  MiReturnCommit(v28, 512LL, v8);
  if ( (unsigned __int16 *)v28 != MiSystemPartition
    || (v23 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v23->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_58:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 17280), v5);
    return VaRangePhysicallyContiguous;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 512) > 0x100 )
  {
LABEL_54:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v23->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( !v5 )
      return VaRangePhysicallyContiguous;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v25 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v23->CachedResidentAvailable,
            CachedResidentAvailable + 512,
            CachedResidentAvailable);
    v22 = (_DWORD)CachedResidentAvailable == v25;
    LODWORD(CachedResidentAvailable) = v25;
    if ( v22 )
      return VaRangePhysicallyContiguous;
    if ( v25 == -1 || (unsigned __int64)(v25 + 512LL) > 0x100 )
      goto LABEL_54;
  }
}
