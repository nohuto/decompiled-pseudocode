void __fastcall HalpDmaFlushBuffer(int a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int8 v12; // di
  _DWORD *SchedulerAssist; // r10
  int v14; // eax
  struct _MDL *v15; // r15
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf

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
          v14 = 4;
          if ( v12 != 2 )
            v14 = (-1LL << (v12 + 1)) & 4;
          SchedulerAssist[5] |= v14;
        }
      }
    }
    v15 = *(struct _MDL **)(qword_140C70850 + 8LL * KeGetPcr()->Prcb.Number);
    v15->Next = 0LL;
    v15->Size = 8 * (v11 + 6);
    v15->MdlFlags = 0;
    v15->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v15->ByteOffset = a3 & 0xFFF;
    v15->ByteCount = v6;
    IoBuildPartialMdl((PMDL)a2, v15, (PVOID)a3, v6);
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v15, a5 == 0, 1, v16);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v12 <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
