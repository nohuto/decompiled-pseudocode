__int64 __fastcall CmpNotifyChangeKey(__int64 a1, _QWORD *a2, int a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 Pool2; // rax
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 *SListFaultAddress; // rdx
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v26; // rdx
  __int64 **v27; // rcx
  void **p_SListFaultAddress; // rax
  _QWORD *v29; // rdx
  __int64 **v30; // rax
  unsigned __int8 v31; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-68h] BYREF
  char v39; // [rsp+50h] [rbp-58h]
  char v40; // [rsp+51h] [rbp-57h]
  _BYTE v41[5]; // [rsp+52h] [rbp-56h]
  char v42; // [rsp+57h] [rbp-51h]
  _QWORD v43[2]; // [rsp+60h] [rbp-48h] BYREF

  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    CmpFreePostBlock(a2);
    return 3221225852LL;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(257LL, 88LL, 1651395907LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      CmpFreePostBlock(a2);
      return 3221225626LL;
    }
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(Pool2 + 48) = a3 & 0x3FFFFFFF | ((a4 & 1) << 30);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(a1 + 16) = Pool2;
    *(_QWORD *)(Pool2 + 40) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(Pool2 + 56));
    v15 = (__int64 *)(v13 + 1592);
    v16 = *(_QWORD *)(v13 + 1592);
    if ( v16 )
    {
      v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v15 = (__int64 *)v16;
        if ( ((*(_DWORD *)(*(_QWORD *)(v16 + 32) + 8LL) >> 21) & 0x3FFu) > (unsigned int)v11 )
          break;
        v16 = *(_QWORD *)v16;
        if ( !*v15 )
          goto LABEL_8;
      }
      *(_QWORD *)v12 = v16;
      **(_QWORD **)(v16 + 8) = v12;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v16 + 8);
      *(_QWORD *)(v16 + 8) = v12;
    }
    else
    {
LABEL_8:
      *v15 = v12;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = v15;
    }
  }
  v17 = *(_QWORD *)(v12 + 16);
  v18 = (_QWORD *)(v12 + 16);
  if ( *(_QWORD *)(v17 + 8) != v12 + 16 )
    goto LABEL_32;
  *a2 = v17;
  a2[1] = v18;
  *(_QWORD *)(v17 + 8) = a2;
  v19 = a2 + 4;
  *v18 = a2;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v19 = v19;
  }
  else
  {
    v29 = *(_QWORD **)(a7 + 40);
    if ( *v29 != a7 + 32 )
      goto LABEL_32;
    *v19 = a7 + 32;
    a2[5] = v29;
    *v29 = v19;
    *(_QWORD *)(a7 + 40) = v19;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v37, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v26 = KeGetCurrentThread();
    v27 = (__int64 **)(a2 + 2);
    if ( (a2[7] & 0x10000) != 0 )
    {
      p_SListFaultAddress = &v26[1].SListFaultAddress;
      SListFaultAddress = (__int64 *)v26[1].SListFaultAddress;
      if ( (void **)SListFaultAddress[1] == p_SListFaultAddress )
      {
        *v27 = SListFaultAddress;
        a2[3] = p_SListFaultAddress;
        SListFaultAddress[1] = (__int64)v27;
        *p_SListFaultAddress = v27;
        goto LABEL_26;
      }
    }
    else
    {
      SListFaultAddress = (__int64 *)&v26[1].SListFaultAddress;
      v30 = (__int64 **)SListFaultAddress[1];
      if ( *v30 == SListFaultAddress )
      {
        *v27 = SListFaultAddress;
        a2[3] = v30;
        *v30 = (__int64 *)v27;
        SListFaultAddress[1] = (__int64)v27;
LABEL_26:
        if ( KiIrqlFlags )
        {
          v31 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SListFaultAddress = (__int64 *)(-1LL << (CurrentIrql + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = ~(unsigned __int16)SListFaultAddress;
            v35 = (v34 & SchedulerAssist[5]) == 0;
            v11 = (unsigned int)v34 & SchedulerAssist[5];
            SchedulerAssist[5] = v11;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        goto LABEL_16;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  v20 = (_QWORD *)qword_140D53640;
  SListFaultAddress = &CmpAsyncKernelPostList;
  v22 = a2 + 2;
  if ( *(__int64 **)qword_140D53640 != &CmpAsyncKernelPostList )
    goto LABEL_32;
  *v22 = &CmpAsyncKernelPostList;
  a2[3] = v20;
  *v20 = v22;
  qword_140D53640 = (__int64)(a2 + 2);
LABEL_16:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v36 = *((_DWORD *)a2 + 14);
    v39 = v36;
    *(_DWORD *)&v41[1] = 0;
    v38[1] = *(_QWORD *)(a1 + 8);
    v42 = 0;
    v43[0] = v38;
    v38[0] = a2;
    *(_DWORD *)v41 = (v36 & 0x10000) != 0;
    v40 = a4;
    v43[1] = 19LL;
    EtwTraceKernelEvent((__int64)v43, 1u, 0x42000000u, 0x930u, 0x501902u);
  }
  if ( *(int *)(v12 + 48) >= 0 )
    return 259LL;
  CmpPostNotify(v12, (__int64)SListFaultAddress, v11, 268LL, 1, 0LL, 0LL);
  return 0LL;
}
