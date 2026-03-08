/*
 * XREFs of MiAbsorbPossibleEngineChanges @ 0x1402A87C4
 * Callers:
 *     MiInitializeZeroEngines @ 0x140729A34 (MiInitializeZeroEngines.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     MiInitializeDpcGroupAffinity @ 0x1402A9390 (MiInitializeDpcGroupAffinity.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1402A9850 (MiAllocateAcceleratorDescriptor.c)
 *     MiDrainEngineDescriptors @ 0x1402A9904 (MiDrainEngineDescriptors.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403AE45C (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializeZeroingDomains @ 0x140729BBC (MiInitializeZeroingDomains.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiAbsorbPossibleEngineChanges(int *a1, _BYTE *a2)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r14
  KIRQL v8; // al
  unsigned __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 PoolMm; // rax
  unsigned __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r8
  int v19; // r13d
  void *v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  _QWORD *v25; // r8
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  int **v32; // r14
  __int64 v33; // rcx
  void *v34; // r14
  KIRQL v35; // al
  __int64 v36; // r8
  unsigned __int64 v37; // rbp
  __int64 v38; // rcx
  void *v39; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int64 v49; // rbp
  int *v50; // rdx
  int *v51; // rax
  int **v52; // rcx
  int **v53; // r8
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned int i; // r9d
  __int64 v59; // r11
  __int64 v60; // rdx
  __int64 **v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 **v65; // r10
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  __int64 v70; // [rsp+20h] [rbp-58h]
  __int64 v71; // [rsp+28h] [rbp-50h]
  unsigned int v72; // [rsp+80h] [rbp+8h]
  int *v73; // [rsp+90h] [rbp+18h] BYREF
  __int64 v74; // [rsp+98h] [rbp+20h]

  memset(a2, 0, 0x50uLL);
  InitializeSListHead((PSLIST_HEADER)a2 + 3);
  v4 = *((_QWORD *)a1 + 21);
  v5 = *a1;
  v74 = v4;
  v6 = *(unsigned int *)(v4 + 56);
  v71 = *(_QWORD *)(v4 + 48);
  v7 = *(_QWORD *)(qword_140C65720 + 376 * v6 + 368);
  v8 = ExAcquireSpinLockShared(&dword_140C694A0);
  *((_DWORD *)a2 + 1) = *(unsigned __int16 *)(v7 + 8);
  v9 = v8;
  if ( *(unsigned __int16 *)(v7 + 2 * v5 + 10) >= (unsigned int)KeNumberProcessors_0 )
    v10 = KeNumberProcessors_0;
  else
    v10 = *(unsigned __int16 *)(v7 + 2 * v5 + 10);
  if ( *(unsigned __int16 *)(v7 + 2 * v5 + 16) >= (unsigned int)KeNumberProcessors_0 )
    v11 = KeNumberProcessors_0;
  else
    v11 = *(unsigned __int16 *)(v7 + 2 * v5 + 16);
  v72 = v11;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C694A0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v44 = (v43 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v43;
      if ( v44 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  while ( 1 )
  {
    if ( v10 > (unsigned int)KeNumberProcessors_0 )
      v10 = KeNumberProcessors_0;
    if ( v10 == a1[40] && v5 )
      return;
    v12 = *((_DWORD *)a2 + 1);
    v13 = (unsigned int)v6;
    *a2 = 1;
    LODWORD(v13) = v6 | 0x80000000;
    v14 = *(unsigned int *)(v4 + 92);
    *((_DWORD *)a2 + 3) = v14;
    v70 = 16LL * (unsigned int)(3 * v12);
    PoolMm = ExAllocatePoolMm(64LL, v70 + 16 * (3 * v14 + (unsigned int)(2 * v14 * v12)), 1666869581LL, v13);
    *((_QWORD *)a2 + 2) = PoolMm;
    if ( !PoolMm )
      return;
    v16 = ExAcquireSpinLockShared(&dword_140C694A0);
    if ( *((_DWORD *)a2 + 1) == *(unsigned __int16 *)(v7 + 8)
      && (*(unsigned __int16 *)(v7 + 2 * v5 + 10) >= (unsigned int)KeNumberProcessors_0
        ? (v17 = KeNumberProcessors_0)
        : (v17 = *(unsigned __int16 *)(v7 + 2 * v5 + 10)),
          v10 == v17) )
    {
      v18 = *((unsigned int *)a2 + 1);
      v19 = 0;
      v20 = (void *)(*((_QWORD *)a2 + 2) + 16LL * (unsigned int)(2 * v18));
      *((_QWORD *)a2 + 3) = v20;
      memmove(v20, *(const void **)v7, 16 * v18);
    }
    else
    {
      v19 = 1;
      *((_DWORD *)a2 + 1) = *(unsigned __int16 *)(v7 + 8);
      v10 = *(unsigned __int16 *)(v7 + 2 * v5 + 10);
      v72 = *(unsigned __int16 *)(v7 + 2 * v5 + 16);
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C694A0);
    if ( KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v44 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(v16);
    if ( !v19 )
      break;
    ExFreePoolWithTag(*((PVOID *)a2 + 2), 0);
    v4 = v74;
  }
  v21 = v72;
  if ( v72 > (unsigned int)KeNumberProcessors_0 )
    v21 = KeNumberProcessors_0;
  v22 = *((_QWORD *)a2 + 2);
  v23 = 0;
  v24 = *((_DWORD *)a2 + 1);
  v25 = (_QWORD *)(v22 + v70);
  v26 = v22 + 16LL * v24;
  *((_DWORD *)a2 + 2) = v10;
  v27 = *((unsigned int *)a2 + 3);
  *((_QWORD *)a2 + 4) = v25;
  v28 = &v25[6 * v27];
  if ( (_DWORD)v27 )
  {
    v29 = v25 + 2;
    do
    {
      *v25 = v28;
      ++v23;
      v25 += 6;
      v30 = &v28[2 * *((unsigned int *)a2 + 1)];
      v29[1] = v29;
      *(v29 - 1) = v30;
      *v29 = v29;
      v29 += 6;
      v28 = &v30[2 * *((unsigned int *)a2 + 1)];
    }
    while ( v23 < *((_DWORD *)a2 + 3) );
    v24 = *((_DWORD *)a2 + 1);
  }
  MiInitializeDpcGroupAffinity(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), v24, (unsigned int)v5);
  MiInitializeZeroingDomains(a2);
  if ( !(_DWORD)v5 )
  {
    v73 = 0LL;
    MiDrainEngineDescriptors(a1);
    if ( !(unsigned int)MiAllocateAcceleratorDescriptor(a1, (unsigned int)v6, v31, &v73) )
    {
      v39 = (void *)*((_QWORD *)a2 + 2);
      goto LABEL_54;
    }
    v32 = (int **)v73;
    if ( !v73 )
    {
      ExFreePoolWithTag(*((PVOID *)a2 + 2), 0);
      a2[1] = 1;
      return;
    }
    v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*((_QWORD *)a1 + 25) + 23160LL));
    v50 = a1 + 28;
    do
    {
      v51 = *v32;
      v52 = v32;
      v53 = (int **)*((_QWORD *)a1 + 15);
      v32 = (int **)v51;
      v73 = v51;
      if ( *v53 != v50 )
LABEL_76:
        __fastfail(3u);
      *v52 = v50;
      v52[1] = (int *)v53;
      *v53 = (int *)v52;
      *((_QWORD *)a1 + 15) = v52;
    }
    while ( v51 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)a1 + 25) + 23160LL));
    if ( KiIrqlFlags )
    {
      v54 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v44 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    __writecr8(v49);
  }
  v33 = *((_QWORD *)a1 + 25);
  v34 = (void *)*((_QWORD *)a1 + 17);
  *((_QWORD *)a1 + 18) = v26;
  a1[40] = v10;
  a1[26] = *((_DWORD *)a2 + 16);
  v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v33 + 23160));
  v36 = *((_QWORD *)a1 + 16);
  v37 = v35;
  *((_QWORD *)a1 + 17) = *((_QWORD *)a2 + 2);
  if ( v36 )
  {
    for ( i = 0; i < *((_DWORD *)a2 + 3); ++i )
    {
      v59 = *((_QWORD *)a2 + 4);
      v60 = 48LL * i;
      v61 = (__int64 **)(v36 + v60 + 16);
      if ( *v61 )
      {
        while ( 1 )
        {
          v62 = *v61;
          if ( *v61 == (__int64 *)v61 )
            break;
          v63 = *v62;
          if ( (__int64 **)v62[1] != v61 )
            goto LABEL_76;
          if ( *(__int64 **)(v63 + 8) != v62 )
            goto LABEL_76;
          *v61 = (__int64 *)v63;
          *(_QWORD *)(v63 + 8) = v61;
          v64 = v60 + v59 + 16;
          v65 = *(__int64 ***)(v64 + 8);
          if ( *v65 != (__int64 *)v64 )
            goto LABEL_76;
          *v62 = v64;
          v62[1] = (__int64)v65;
          *v65 = v62;
          *(_QWORD *)(v64 + 8) = v62;
          ++*(_DWORD *)(v60 + v59 + 32);
        }
        v36 = *((_QWORD *)a1 + 16);
      }
    }
  }
  v38 = *((_QWORD *)a1 + 25);
  *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 3);
  a1[5] = *((_DWORD *)a2 + 1);
  a1[41] = v21;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v38 + 23160));
  if ( KiIrqlFlags )
  {
    v66 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v66 >= 2u )
    {
      v67 = KeGetCurrentPrcb();
      v68 = v67->SchedulerAssist;
      v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
      v44 = (v69 & v68[5]) == 0;
      v68[5] &= v69;
      if ( v44 )
        KiRemoveSystemWorkPriorityKick(v67);
    }
  }
  __writecr8(v37);
  if ( !*((_QWORD *)a1 + 36) )
    *((_QWORD *)a1 + 36) = MiAllocateZeroPageDecisionTraceBuffer(v71, (unsigned int)v6);
  a2[1] = 1;
  if ( v34 )
  {
    v39 = v34;
LABEL_54:
    ExFreePoolWithTag(v39, 0);
  }
}
