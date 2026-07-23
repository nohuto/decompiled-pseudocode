/*
 * XREFs of HalpDmaFlushBuffer @ 0x1404C749C
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x1402E4240 (HalBuildScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x1403885EC (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffersV2 @ 0x140389760 (IoFlushAdapterBuffersV2.c)
 *     HalMapTransferEx @ 0x14039EFE0 (HalMapTransferEx.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B753C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B768C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404B7A1C (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B7B40 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404CD76C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404CD888 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404CD9EC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404CDB44 (HalpDmaMapScatterTransferV2.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     IoBuildPartialMdl @ 0x1402EE630 (IoBuildPartialMdl.c)
 *     KeFlushIoBuffers @ 0x1403007D0 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C76D0 (HalpDmaFlushBufferWithEmergencyResources.c)
 */

void __fastcall HalpDmaFlushBuffer(int a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int8 v12; // di
  _DWORD *SchedulerAssist; // r9
  struct _MDL *v14; // r15
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

  v6 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v10 = *(PVOID *)(a2 + 24);
  else
    v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  v11 = ((a3 & 0xFFF) + v6 + 4095) >> 12;
  if ( v10 && (unsigned int)v11 <= 0x200 )
  {
    v12 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v12 + 1)) & 4;
        }
      }
    }
    v14 = *(struct _MDL **)(qword_140C53F20 + 8LL * KeGetPcr()->Prcb.Number);
    v14->Next = 0LL;
    v14->MdlFlags = 0;
    v14->Size = 8 * (v11 + 6);
    v14->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v14->ByteOffset = a3 & 0xFFF;
    v14->ByteCount = v6;
    IoBuildPartialMdl((PMDL)a2, v14, (PVOID)a3, v6);
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v14, a5 == 0, 1, v15);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && v12 <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    HalpDmaFlushBufferWithEmergencyResources(a1, a2, a3, v6, a5, a6);
  }
}
