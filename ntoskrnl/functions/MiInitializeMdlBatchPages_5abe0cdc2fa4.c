__int64 __fastcall MiInitializeMdlBatchPages(__int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // r12
  unsigned __int64 v6; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  int v9; // eax
  int v10; // r10d
  ULONG_PTR v11; // r8
  char *v12; // r9
  int v13; // ebx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 SchedulerAssist; // r9
  int v17; // eax
  __int64 v18; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // esi
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  char v27; // al
  __int64 result; // rax
  int v29; // r11d
  int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v32; // r9
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  volatile int DpcRequestSummary; // edx
  _KTHREAD *NextThread; // rax
  __int64 v37; // rdx
  unsigned int v38; // edi
  unsigned __int8 v39; // cl
  _DWORD *v40; // r9
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // r8d
  _QWORD *v44; // rsi
  unsigned __int64 v45; // rbp
  char v46; // cl
  __int64 updated; // rax
  struct _KPRCB *v48; // rcx
  signed __int32 *v49; // r8
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // r9
  int v55; // edx
  bool v56; // zf
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  __int64 v61; // [rsp+30h] [rbp-58h]
  int v63; // [rsp+98h] [rbp+10h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+18h]
  __int64 v65; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v61 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(v61 + 48);
  v6 = (unsigned __int64)*(unsigned int *)(v61 + 40) >> 12;
  v7 = (_QWORD *)(v61 + 48);
  v8 = (_QWORD *)(v61 + 48);
  v9 = 0;
  if ( !v6 )
  {
    v14 = a1;
    goto LABEL_13;
  }
  do
  {
    v10 = dword_140C65708;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((48LL * *v7) >> 4);
    if ( dword_140C65704 > (unsigned int)dword_140C65708
      || (v12 = (char *)qword_140C65748 + 16 * dword_140C65704, v11 < *(_QWORD *)v12)
      || dword_140C65704 != dword_140C65708 && v11 >= *((_QWORD *)v12 + 2) )
    {
      v29 = 0;
      if ( dword_140C65708 < 0 )
LABEL_75:
        KeBugCheckEx(0x1Au, 0x6201uLL, v11, 0LL, 0LL);
      while ( 1 )
      {
        v30 = (v29 + v10) >> 1;
        v12 = (char *)qword_140C65748 + 16 * v30;
        if ( v11 < *(_QWORD *)v12 )
        {
          if ( !v30 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v11, (ULONG_PTR)v12, 0LL);
          v10 = v30 - 1;
        }
        else
        {
          if ( v30 == dword_140C65708 || v11 < *((_QWORD *)v12 + 2) )
          {
            dword_140C65704 = (v29 + v10) >> 1;
            break;
          }
          v29 = v30 + 1;
        }
        if ( v10 < v29 )
          goto LABEL_75;
      }
    }
    v13 = *((_DWORD *)v12 + 2);
    if ( v3 )
    {
      if ( v13 == v9 )
      {
        ++v3;
        goto LABEL_9;
      }
      MiInitializeMdlOneNodeBatchPages(a1, v8, v3);
    }
    v3 = 1LL;
    v9 = v13;
    v8 = v7;
LABEL_9:
    ++v4;
    ++v7;
  }
  while ( v4 < v6 );
  v14 = a1;
  if ( v3 )
    MiInitializeMdlOneNodeBatchPages(a1, v8, v3);
  v1 = 0LL;
LABEL_13:
  v15 = *(_QWORD *)(v14 + 72);
  SchedulerAssist = 2LL;
  v17 = *(_DWORD *)(v14 + 56);
  v64 = v15;
  if ( (v17 & 0x80000200) != 0 )
  {
    v18 = 0LL;
    if ( *(_QWORD *)(v14 + 48) != 1LL )
    {
      v44 = (_QWORD *)(v61 + 48);
      if ( v6 )
      {
        v45 = v6;
        do
        {
          MiConvertSmallPageRangeToLarge(*v44++);
          --v45;
        }
        while ( v45 );
        v15 = v64;
        SchedulerAssist = 2LL;
        v1 = 0LL;
      }
      v14 = a1;
    }
  }
  else
  {
    v18 = MiSwizzleInvalidPte(128LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SchedulerAssist);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v37) = 4;
    else
      v37 = (-1LL << (CurrentIrql + 1)) & 4;
    v42 = v37 | *(_DWORD *)(SchedulerAssist + 20);
    v15 = v64;
    *(_DWORD *)(SchedulerAssist + 20) = v42;
    LOWORD(SchedulerAssist) = 2;
  }
  v20 = v1;
  if ( v6 )
  {
    v21 = (v15 >> 3) & 0xFFFFFFFFFFELL;
    v65 = __ROL8__(1LL, CurrentIrql + 1);
    v64 = v21;
    do
    {
      v22 = 48LL * *v5 - 0x220000000000LL;
      v63 = v1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v63);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
        v21 = v64;
        v1 = 0LL;
        LOWORD(SchedulerAssist) = 2;
      }
      v23 = *(_DWORD *)(v14 + 56);
      if ( _bittest64((const signed __int64 *)(v22 + 40), 0x28u) && ((v23 & 0x3001000) == 0 || v23 >= 0) )
      {
        MiConvertLargePfnToSmall(v22, v22, 0xFFFFF68000000000uLL, 1LL);
        v21 = v64;
        v1 = 0LL;
        LOWORD(SchedulerAssist) = 2;
      }
      *(_QWORD *)(v22 + 8) = 0xFFFFF68000000000uLL;
      v24 = *(_QWORD *)(v22 + 40) & 0x7FFFFF0000000000LL;
      *(_QWORD *)(v22 + 16) = v18;
      *(_QWORD *)v22 = v1;
      *(_QWORD *)(v22 + 40) = v24 | 0x3FFFFFFFFELL;
      *(_QWORD *)v22 = v21;
      if ( (v23 & 0x100) != 0 )
      {
        v46 = *(_BYTE *)(v22 + 34);
        if ( (v46 & 7) != 5 )
          *(_BYTE *)(v22 + 34) = v46 & 0xF8 | 5;
        *(_QWORD *)(v22 + 24) &= 0xC000000000000000uLL;
      }
      else
      {
        if ( v23 < 0 )
          v25 = 0x8000000000000001uLL;
        else
          v25 = 0xC000000000000001uLL;
        *(_QWORD *)(v22 + 24) = v25 & *(_QWORD *)(v22 + 24) | 1;
        *(_WORD *)(v22 + 32) = SchedulerAssist;
        if ( (v23 & 0x80000200) != 0 )
          v26 = v1;
        else
          v26 = 0xFFFFF68000000000uLL;
        *(_QWORD *)(v22 + 8) = v26;
        if ( (v23 & 0x200) != 0 )
        {
          MiAbortCombineScan(v22);
          MiSetPfnIdentity(v22, 3LL);
          if ( (v23 & 0x20000) == 0 )
            _InterlockedIncrement64(&qword_140C65828);
          updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), 1LL);
          v21 = v64;
          v1 = 0LL;
          *(_QWORD *)(v22 + 16) = updated;
        }
        *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 6;
        if ( v23 < 0 )
        {
          MiSetPfnIdentity(v22, 1LL);
          v21 = v64;
          v1 = 0LL;
        }
      }
      v27 = *(_BYTE *)(v22 + 36);
      *(_BYTE *)(v22 + 35) &= 0xF8u;
      *(_DWORD *)(v22 + 36) = v1;
      *(_BYTE *)(v22 + 36) = v27 & 3;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u || (v20 & 0xF) != 0 )
        goto LABEL_30;
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = (unsigned int)v1;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v32 = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_47;
        if ( CurrentPrcb->QuantumEnd )
        {
          v38 = 1;
          v1 = 0LL;
          goto LABEL_55;
        }
      }
      else
      {
        if ( !CurrentPrcb->NestingLevel )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v38 = 2;
            v1 = 0LL;
            goto LABEL_55;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v38 = 3;
            v1 = 0LL;
            goto LABEL_55;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v38 = 4;
            v1 = 0LL;
            goto LABEL_55;
          }
LABEL_47:
          if ( DpcWatchdogCount <= 7 )
          {
            v1 = 0LL;
            goto LABEL_49;
          }
          if ( !(_DWORD)v32 && !(_DWORD)v1 )
            goto LABEL_108;
          goto LABEL_104;
        }
        LODWORD(v1) = 1;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_47;
        if ( CurrentPrcb->QuantumEnd )
        {
          v38 = 7;
          v1 = 0LL;
          goto LABEL_55;
        }
      }
LABEL_104:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v38 = 5;
        v1 = 0LL;
        goto LABEL_55;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v38 = 6;
        v1 = 0LL;
        goto LABEL_55;
      }
LABEL_108:
      _disable();
      v1 = 0LL;
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v48 = KeGetCurrentPrcb();
      v49 = (signed __int32 *)v48->SchedulerAssist;
      if ( v49 )
      {
        _m_prefetchw(v49);
        v50 = *v49;
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange(v49, v50 & 0xFFDFFFFF, v50);
        }
        while ( v51 != v50 );
        if ( (v50 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v48);
          v1 = 0LL;
        }
      }
      _enable();
      v38 = 0;
LABEL_55:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      {
        EtwTraceShouldYieldProcessor(v38, DpcWatchdogCount, DpcTimeCount, v32);
        v1 = 0LL;
      }
      if ( v38 )
      {
        if ( KiIrqlFlags )
        {
          v52 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v52 - 2) <= 0xDu )
          {
            v53 = KeGetCurrentPrcb();
            v54 = v53->SchedulerAssist;
            v55 = ~(unsigned __int16)-(__int16)v65;
            v56 = (v55 & v54[5]) == 0;
            v54[5] &= v55;
            if ( v56 )
            {
              KiRemoveSystemWorkPriorityKick(v53);
              v1 = 0LL;
            }
          }
        }
        __writecr8(CurrentIrql);
        v39 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
          {
            v40 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v39 == 2 )
              LODWORD(v41) = 4;
            else
              v41 = (-1LL << (v39 + 1)) & 4;
            v43 = v41 | v40[5];
            v21 = v64;
            v40[5] = v43;
            goto LABEL_30;
          }
        }
      }
LABEL_49:
      v21 = v64;
LABEL_30:
      v14 = a1;
      ++v20;
      ++v5;
      LOWORD(SchedulerAssist) = 2;
    }
    while ( v20 < v6 );
  }
  if ( KiIrqlFlags )
  {
    v57 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v57 <= 0xFu && CurrentIrql <= 0xFu && v57 >= 2u )
    {
      v58 = KeGetCurrentPrcb();
      v59 = v58->SchedulerAssist;
      v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v56 = (v60 & v59[5]) == 0;
      v59[5] &= v60;
      if ( v56 )
      {
        KiRemoveSystemWorkPriorityKick(v58);
        v1 = 0LL;
      }
    }
  }
  __writecr8(CurrentIrql);
  result = v61;
  *(_WORD *)(v61 + 10) |= 2u;
  *(_QWORD *)(v61 + 16) = v1;
  return result;
}
