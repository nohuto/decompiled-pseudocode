void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v3; // r10d
  ULONG_PTR v4; // r15
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v11; // cl
  _QWORD *v12; // rax
  ULONG_PTR v13; // r8
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v24; // rax
  char v25; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v27; // rdx
  unsigned __int8 v28; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  __int64 v33; // [rsp+28h] [rbp-50h]
  ULONG_PTR v34; // [rsp+30h] [rbp-48h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]
  unsigned __int64 v36; // [rsp+40h] [rbp-38h]
  __int64 v37; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( BugCheckParameter2 != 1 )
  {
    v3 = 4;
    v4 = (unsigned int)BugCheckParameter3;
    v34 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = 4LL;
    while ( 1 )
    {
      v6 = *(&v33 + v5--);
      --v3;
      v7 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL
        && v6 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v7 & 1) == 0 )
          goto LABEL_8;
        if ( (v7 & 0x20) == 0 || (v7 & 0x42) == 0 )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v24 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
            v25 = v7 | 0x20;
            if ( (v24 & 0x20) == 0 )
              v25 = v7;
            LOBYTE(v7) = v25;
            if ( (v24 & 0x42) != 0 )
              LOBYTE(v7) = v25 | 0x42;
          }
        }
      }
      if ( (v7 & 1) == 0 )
        goto LABEL_8;
      if ( (v7 & 0x80u) != 0LL )
        break;
      if ( v5 == 1 )
        goto LABEL_8;
    }
    if ( v3 )
      return;
LABEL_8:
    if ( BugCheckParameter2 < 0xFFFF800000000000uLL || byte_140C6A058[((BugCheckParameter2 >> 39) & 0x1FF) - 256] != 1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 0xFu )
      {
        v11 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v11 == 15 )
              LODWORD(v27) = 0x8000;
            else
              v27 = (-1LL << (v11 + 1)) & 0xFFFC;
            SchedulerAssist[5] |= v27;
          }
        }
      }
      ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
      v12 = (_QWORD *)::BugCheckParameter3;
      if ( ::BugCheckParameter3 )
      {
        do
        {
          v13 = *(v12 - 23);
          if ( BugCheckParameter2 > v13 + (unsigned int)(*((_DWORD *)v12 - 42) - 1) )
          {
            v12 = (_QWORD *)v12[1];
          }
          else
          {
            if ( BugCheckParameter2 >= v13 )
              break;
            v12 = (_QWORD *)*v12;
          }
        }
        while ( v12 );
        if ( v12 )
          v9 = v12 - 29;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
      }
      else
      {
        _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
        _InterlockedDecrement(&PsLoadedModuleSpinLock);
      }
      if ( CurrentIrql < 0xFu )
      {
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v28 - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
      if ( !v9 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v4, 0LL);
      v14 = v9[6];
      if ( v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *(_WORD *)v14 == 23117 )
      {
        v15 = (_DWORD *)(v14 + *(unsigned int *)(v14 + 60));
        if ( (unsigned __int64)v15 >= v14
          && (v14 > 0x7FFFFFFEFFFFLL
           || (_DWORD *)((char *)v15 + 263) >= v15 && (unsigned __int64)v15 + 263 <= 0x7FFFFFFEFFFFLL)
          && *v15 == 17744 )
        {
          v8 = v14 + *(unsigned int *)(v14 + 60);
        }
      }
      v16 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(BugCheckParameter2 - *(unsigned __int16 *)(v8 + 20) - v8 - 24) >> 3);
      if ( (unsigned int)v16 >= *(unsigned __int16 *)(v8 + 6) )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v4, (unsigned int)v16, *(unsigned __int16 *)(v8 + 6));
      v17 = *(_DWORD *)(BugCheckParameter2 + 16);
      v18 = v9[28] + 4LL * (unsigned int)v16;
      if ( v17 < *(_DWORD *)(BugCheckParameter2 + 8) )
        v17 = *(_DWORD *)(BugCheckParameter2 + 8);
      v19 = v14 + *(unsigned int *)(BugCheckParameter2 + 12);
      v20 = *(unsigned int *)(v8 + 56);
      v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v20 > 0x1000 )
        v20 = 4096LL;
      v22 = (((~(v20 - 1) & (v20 + v17 - 1LL + v19)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v4 == 1 )
        MiLockImageSection(v9, v18, v21, v22 - 0x98000000008LL);
      else
        MiUnlockImageSection(v18, v21, v22 - 0x98000000008LL, BugCheckParameter2);
    }
  }
}
