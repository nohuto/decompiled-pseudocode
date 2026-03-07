LONG __fastcall MiZeroPageFile(PVOID P)
{
  __int64 *v2; // r14
  unsigned __int8 v3; // cf
  unsigned int v4; // ebx
  int v5; // r15d
  unsigned int v6; // r12d
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned int v9; // r8d
  KIRQL v10; // si
  unsigned __int64 v11; // rdi
  unsigned int v12; // r9d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  KIRQL v19; // al
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r8
  _DWORD *v22; // rdi
  int v23; // eax
  int v25; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v26; // [rsp+30h] [rbp-A1h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-99h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-91h]
  _BYTE MemoryDescriptorList[176]; // [rsp+48h] [rbp-89h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v2 = (__int64 *)*((_QWORD *)P + 4);
  Event = (PRKEVENT)*((_QWORD *)P + 5);
  ExFreePoolWithTag(P, 0);
  v3 = _bittest16((const signed __int16 *)v2 + 102, 0xBu);
  *(_QWORD *)&MemoryDescriptorList[32] = 0LL;
  *(_QWORD *)&MemoryDescriptorList[40] = 0LL;
  if ( v3 )
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 131120;
    memset64(&MemoryDescriptorList[48], qword_140C69390, 0x10uLL);
  }
  else
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 48;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
  v8 = *v2;
  v9 = 1;
  v25 = 1;
  v10 = v7;
  if ( (unsigned __int64)*v2 > 1 )
  {
    v11 = 1LL;
    do
    {
      v12 = v6;
      if ( _bittest64(*(const signed __int64 **)(v2[14] + 16), v11) )
      {
        if ( v4 )
          goto LABEL_14;
      }
      else
      {
        v6 = v9;
        if ( v4 )
          v6 = v12;
        if ( ++v4 == 16 || v11 == v8 - 1 )
          v5 = 1;
      }
      if ( v5 )
      {
LABEL_14:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v10);
        if ( _bittest16((const signed __int16 *)v2 + 102, 0xBu) )
        {
          *(_DWORD *)&MemoryDescriptorList[40] = v4 << 12;
          MiTransferMemoryPagefileData(v2, MemoryDescriptorList, v6, 0LL);
        }
        else
        {
          v18 = v2[7];
          v27 = (unsigned __int64)v6 << 12;
          v26 = (unsigned __int64)v4 << 12;
          MmZeroPageWrite(v18, (__int64)&v27, (__int64 *)&v26, 0);
        }
        v5 = 0;
        v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
        v9 = v25;
        v10 = v19;
        v4 = 0;
      }
      v8 = *v2;
      v11 = ++v9;
      v25 = v9;
    }
    while ( v9 < (unsigned __int64)*v2 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v10 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v17 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
  }
  __writecr8(v10);
  if ( _bittest16((const signed __int16 *)v2 + 102, 0xBu) && (MemoryDescriptorList[10] & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)&MemoryDescriptorList[24], (PMDL)MemoryDescriptorList);
  return KeSetEvent(Event, 0, 0);
}
