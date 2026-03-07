void __fastcall HalpFlushMapBuffers(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  char v6; // r12
  __int64 v8; // r15
  int AdapterCacheAlignment; // eax
  __int16 v11; // r10
  unsigned int v12; // r10d
  int v13; // r9d
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r11
  unsigned __int8 CurrentIrql; // r13
  KIRQL v19; // bp
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r8d
  unsigned __int64 v33; // r15
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-48h]
  int v43; // [rsp+78h] [rbp+10h]
  __int64 v44; // [rsp+80h] [rbp+18h]
  unsigned int v45; // [rsp+88h] [rbp+20h]

  v44 = a3;
  v6 = a5;
  v8 = a3;
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2);
  v12 = v11 & 0xFFF;
  v43 = AdapterCacheAlignment;
  v13 = AdapterCacheAlignment;
  v14 = 0LL;
  v15 = a4;
  v16 = v12;
  v17 = v8;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  if ( a4 )
  {
    while ( 1 )
    {
      v20 = v15;
      if ( v15 >= 4096 - v16 )
        v20 = 4096 - v16;
      v21 = *(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFF000uLL;
      if ( v14 )
      {
        if ( v21 != v14 + 4096 )
          break;
      }
      v17 = *(_QWORD *)(v17 + 8);
      v14 = v21;
      v16 = 0;
      v15 -= v20;
      if ( !v15 )
      {
        v13 = AdapterCacheAlignment;
        goto LABEL_8;
      }
    }
    do
    {
      v32 = a4;
      if ( a4 >= 4096 - v12 )
        v32 = 4096 - v12;
      v33 = (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL) + v12;
      v42 = v32;
      v45 = v32;
      if ( !v6 && !*(_BYTE *)(a1 + 445) )
      {
        v34 = ~(v43 - 1);
        v35 = (unsigned int)v33 - (v34 & (unsigned int)v33);
        v33 -= v35;
        v45 = v34 & (v32 + v43 + v35 - 1);
      }
      if ( CurrentIrql <= 2u )
        v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
      v36 = *(_QWORD *)(a1 + 304);
      *(_QWORD *)v36 = 0LL;
      *(_WORD *)(v36 + 10) = 0;
      *(_QWORD *)(v36 + 32) = v33 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v36 + 44) = v33 & 0xFFF;
      *(_WORD *)(v36 + 8) = 8 * ((((v33 & 0xFFF) + v45 + 4095LL) >> 12) + 6);
      *(_DWORD *)(v36 + 40) = v45;
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
      if ( !a6 )
        KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, 1, v37);
      if ( CurrentIrql <= 2u )
      {
        KxReleaseSpinLock((volatile signed __int64 *)(a1 + 312));
        if ( KiIrqlFlags )
        {
          v38 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && v19 <= 0xFu && v38 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << (v19 + 1));
            v31 = (v41 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v41;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v19);
      }
      v12 = 0;
      v6 = a5;
      v8 = *(_QWORD *)(v44 + 8);
      v44 = v8;
      a4 -= v42;
    }
    while ( a4 );
  }
  else
  {
LABEL_8:
    v22 = (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL) + v12;
    if ( !a5 && !*(_BYTE *)(a1 + 445) )
    {
      v23 = ~(v13 - 1);
      v24 = v22 - (v23 & v22);
      v22 -= v24;
      a4 = v23 & (v13 + v24 + a4 - 1);
    }
    if ( CurrentIrql <= 2u )
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
    v25 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)v25 = 0LL;
    *(_WORD *)(v25 + 10) = 0;
    *(_QWORD *)(v25 + 32) = v22 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v25 + 8) = 8 * ((((v22 & 0xFFF) + 4095 + a4) >> 12) + 6);
    *(_DWORD *)(v25 + 44) = v22 & 0xFFF;
    *(_DWORD *)(v25 + 40) = a4;
    MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
    if ( !a6 )
      KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, 1, v26);
    if ( CurrentIrql <= 2u )
    {
      KxReleaseSpinLock((volatile signed __int64 *)(a1 + 312));
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && v19 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(v19);
    }
  }
}
