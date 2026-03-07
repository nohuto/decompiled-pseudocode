__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  struct _FILE_OBJECT *v6; // rax
  _QWORD *p_DataSectionObject; // r14
  KIRQL v8; // al
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  int v12; // edx
  _QWORD *active; // rdi
  __int64 v15; // rax
  __int64 *v16; // rax
  ULONG_PTR v17; // r15
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  int v28; // eax
  _DWORD *v29; // r8
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  int v32; // eax
  _DWORD *v33; // r8
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v40; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v42; // [rsp+20h] [rbp-30h] BYREF
  __int128 v43; // [rsp+30h] [rbp-20h] BYREF
  char *v44; // [rsp+40h] [rbp-10h]
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v44 = 0LL;
  v6 = *(struct _FILE_OBJECT **)(a1 + 56);
  v42 = 0LL;
  FileObject = v6;
  v43 = 0LL;
  p_DataSectionObject = &v6->SectionObjectPointer->DataSectionObject;
  if ( !v3 )
    p_DataSectionObject += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140C651C0);
    v9 = *p_DataSectionObject;
    v10 = v8;
    if ( !*p_DataSectionObject )
    {
      *p_DataSectionObject = a2;
      v15 = KeAbPreAcquire((__int64)p_DataSectionObject, 0LL);
      if ( v15 )
        *(_BYTE *)(v15 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v3 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v3 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  v11 = MiValidateControlAreaPartition(a1, v9);
  if ( v11 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v25 = v23->SchedulerAssist;
        v3 = (v24 & v25[5]) == 0;
        v25[5] &= v24;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
LABEL_55:
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( !(*(_DWORD *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 20);
        if ( (v12 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v9, ((v12 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
          if ( KiIrqlFlags )
          {
            v30 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v33 = v31->SchedulerAssist;
              v3 = (v32 & v33[5]) == 0;
              v33[5] &= v32;
              if ( v3 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
          v11 = -1073740277;
          goto LABEL_55;
        }
      }
      active = (_QWORD *)MiReferenceActiveControlArea(a1, v9);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v37 = v35->SchedulerAssist;
          v3 = (v36 & v37[5]) == 0;
          v37[5] &= v36;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      __writecr8(v10);
      MiReleaseControlAreaWaiters(active);
      *a3 = v9;
      return 0LL;
    }
    v16 = (__int64 *)KeAbPreAcquire((__int64)p_DataSectionObject, 0LL);
    v17 = (ULONG_PTR)v16;
    if ( v16 )
      KeAbPreWait(v16);
    DWORD1(v43) = 0;
    v44 = (char *)&v43 + 8;
    LOWORD(v43) = 263;
    *((_QWORD *)&v43 + 1) = (char *)&v43 + 8;
    BYTE2(v43) = 6;
    DWORD2(v42) = 1;
    *(_QWORD *)&v42 = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(v9 + 80) = &v42;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v29 = v27->SchedulerAssist;
        v3 = (v28 & v29[5]) == 0;
        v29[5] &= v28;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate((__int64)&v43, 18LL, 0);
    if ( v17 )
    {
      KeAbPreAcquire((__int64)p_DataSectionObject, v17);
      KeAbPostReleaseEx((ULONG_PTR)p_DataSectionObject, v17);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
