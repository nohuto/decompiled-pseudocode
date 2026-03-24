/*
 * XREFs of HalpFlushMapBuffers @ 0x1404C89FC
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x1404C8134 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     MmBuildMdlForNonPagedPool @ 0x140264870 (MmBuildMdlForNonPagedPool.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushIoBuffers @ 0x1403007D0 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8BA0 (HalpDmaGetAdapterCacheAlignment.c)
 */

void __fastcall HalpFlushMapBuffers(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  int AdapterCacheAlignment; // eax
  __int64 v9; // r11
  __int16 v10; // r9
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // r10
  char v16; // bl
  unsigned __int8 CurrentIrql; // r12
  KIRQL v18; // r14
  unsigned int v19; // r11d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r8d
  unsigned __int64 v33; // r15
  unsigned int v34; // r13d
  int v35; // edx
  unsigned int v36; // ecx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned int v44; // [rsp+68h] [rbp+10h]
  int v46; // [rsp+78h] [rbp+20h]

  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  v11 = v10 & 0xFFF;
  v46 = AdapterCacheAlignment;
  v12 = 0LL;
  v13 = a4;
  v14 = v11;
  v15 = v9;
  v16 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v18 = CurrentIrql;
  if ( a4 )
  {
    while ( 1 )
    {
      v19 = v13;
      if ( v13 >= 4096 - v14 )
        v19 = 4096 - v14;
      v20 = *(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFF000uLL;
      if ( v12 )
      {
        if ( v20 != v12 + 4096 )
          break;
      }
      v15 = *(_QWORD *)(v15 + 8);
      v12 = v20;
      v14 = 0;
      v13 -= v19;
      if ( !v13 )
        goto LABEL_9;
    }
    v16 = 0;
LABEL_9:
    v9 = a3;
  }
  if ( v16 )
  {
    v21 = (*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFF000uLL) + v11;
    if ( !a5 && !*(_BYTE *)(a1 + 437) )
    {
      v22 = ~(AdapterCacheAlignment - 1);
      v23 = v21 - (v22 & v21);
      v21 -= v23;
      a4 = v22 & (AdapterCacheAlignment + v23 + a4 - 1);
    }
    if ( CurrentIrql <= 2u )
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 304));
    v24 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)v24 = 0LL;
    *(_WORD *)(v24 + 10) = 0;
    *(_QWORD *)(v24 + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v24 + 8) = 8 * ((((v21 & 0xFFF) + 4095 + a4) >> 12) + 6);
    *(_DWORD *)(v24 + 44) = v21 & 0xFFF;
    *(_DWORD *)(v24 + 40) = a4;
    MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 296));
    if ( !a6 )
    {
      LOBYTE(v25) = 1;
      KeFlushIoBuffers(*(_QWORD *)(a1 + 296), a5 == 0, v25, v26);
    }
    if ( CurrentIrql <= 2u )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 304));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v18 <= 0xFu && v27 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v31 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
    }
  }
  else
  {
    for ( ; a4; a4 -= v44 )
    {
      v32 = a4;
      if ( a4 >= 4096 - v11 )
        v32 = 4096 - v11;
      v44 = v32;
      v33 = (*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFF000uLL) + v11;
      v34 = v32;
      if ( !a5 && !*(_BYTE *)(a1 + 437) )
      {
        v35 = ~(v46 - 1);
        v36 = v33 - (v35 & v33);
        v33 -= v36;
        v34 = v35 & (v32 + v46 + v36 - 1);
      }
      if ( CurrentIrql <= 2u )
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 304));
      v37 = *(_QWORD *)(a1 + 296);
      *(_QWORD *)v37 = 0LL;
      *(_WORD *)(v37 + 10) = 0;
      *(_QWORD *)(v37 + 32) = v33 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v37 + 8) = 8 * ((((v33 & 0xFFF) + 4095 + v34) >> 12) + 6);
      *(_DWORD *)(v37 + 44) = v33 & 0xFFF;
      *(_DWORD *)(v37 + 40) = v34;
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 296));
      if ( !a6 )
      {
        LOBYTE(v38) = 1;
        KeFlushIoBuffers(*(_QWORD *)(a1 + 296), a5 == 0, v38, v39);
      }
      if ( CurrentIrql <= 2u )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 304));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && v18 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              v43 = ~(unsigned __int16)(-1LL << (v18 + 1));
              v31 = (v43 & v42[5]) == 0;
              v42[5] &= v43;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick((__int64)v41);
            }
          }
        }
        __writecr8(v18);
      }
      v11 = 0;
      v9 = *(_QWORD *)(a3 + 8);
      a3 = v9;
    }
  }
}
