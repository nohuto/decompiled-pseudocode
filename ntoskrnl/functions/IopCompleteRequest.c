void __fastcall IopCompleteRequest(char **a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v7; // rsi
  unsigned int *v8; // r14
  int v9; // eax
  unsigned int v10; // r12d
  struct _MDL *v11; // rcx
  struct _MDL *Next; // rdi
  _DWORD *v13; // r15
  __int64 v14; // rcx
  struct _KEVENT *v15; // rcx
  char *v16; // r13
  char **v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  struct _KTHREAD *v20; // rax
  __int64 v21; // r11
  unsigned __int8 v22; // r10
  __int64 p_Thread; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rdx
  int v27; // ecx
  __int64 *v28; // r10
  __int64 v29; // rcx
  struct _KPRCB *v30; // r11
  char v31; // al
  __int16 v32; // r8
  char *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r14
  char v37; // al
  signed __int64 v38; // rdi
  bool v39; // cc
  signed __int64 v40; // rdi
  volatile signed __int64 *v41; // rcx
  signed __int64 BugCheckParameter4; // rax
  volatile signed __int32 *v43; // rcx
  unsigned __int8 CurrentIrql; // dl
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  int v48; // ecx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  struct _KPRCB *v53; // r11
  char v54; // al
  __int16 v55; // r8
  char *v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  _DWORD *v59; // r9
  __int64 v60; // rdx
  _DWORD *SchedulerAssist; // r9
  int v62; // edx
  unsigned __int64 v63; // rdx
  signed __int64 v64; // rdx
  volatile signed __int64 *v65; // r13
  unsigned __int8 v66; // r11
  char **v67; // r10
  volatile signed __int32 *v68; // rbx
  unsigned __int8 v69; // r15
  __int64 v70; // rdx
  signed __int64 v71; // r14
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdx
  _DWORD *v74; // r9
  __int64 v75; // r10
  _DWORD *v76; // r8
  __int64 v77; // r9
  void *v78; // rcx
  struct _KTHREAD *v79; // rax
  struct _KTHREAD *v80; // rax
  int v81; // r8d
  unsigned __int8 v82; // cl
  struct _KPRCB *v83; // r13
  _DWORD *v84; // r9
  int v85; // eax
  bool v86; // zf
  unsigned __int8 v87; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v89; // r9
  int v90; // eax
  unsigned __int8 v91; // cl
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // cl
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  volatile signed __int64 *v98; // [rsp+40h] [rbp-88h]
  unsigned __int8 v99; // [rsp+40h] [rbp-88h]
  char *v100; // [rsp+48h] [rbp-80h]
  __int64 v101; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *v102; // [rsp+50h] [rbp-78h]
  char **v103; // [rsp+58h] [rbp-70h]
  char **v104; // [rsp+60h] [rbp-68h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  char v107; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v108; // [rsp+E0h] [rbp+18h]
  bool v109; // [rsp+E8h] [rbp+20h]

  v5 = (ULONG_PTR)(a1 - 15);
  v104 = a1 - 15;
  CurrentThread = KeGetCurrentThread();
  v102 = CurrentThread;
  v7 = *a4;
  v109 = a3 && *a3 == 1LL;
  v8 = (unsigned int *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 16);
  if ( (v9 & 0x200000) != 0 )
  {
    IopIoRingCompleteIrp((PIRP)v5);
    return;
  }
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x2000) != 0 )
  {
    v98 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v98 = 0LL;
  }
  IopProcessBufferedIoCompletion(a1 - 15);
  v11 = *(struct _MDL **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
    CurrentThread = v102;
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  v13 = (_DWORD *)(v5 + 48);
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v5 + 65) )
  {
    v78 = *(void **)(v5 + 80);
    if ( v78 && v7 && (*v8 & 4) == 0 )
      ObfDereferenceObject(v78);
    goto LABEL_20;
  }
  v14 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v14 + 4) = *((_DWORD *)v104 + 14);
  else
    *(_QWORD *)(v14 + 8) = v104[7];
  *(_DWORD *)v14 = *v13;
  v15 = *(struct _KEVENT **)(v5 + 80);
  if ( !v15 )
  {
    if ( !v7 )
      goto LABEL_20;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
    {
LABEL_19:
      *(_DWORD *)(v7 + 56) = *v13;
      goto LABEL_20;
    }
LABEL_18:
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    goto LABEL_19;
  }
  KeSetEvent(v15, 0, 0);
  if ( v7 )
  {
    if ( (*v8 & 4) == 0 )
      ObfDereferenceObject(*(PVOID *)(v5 + 80));
    if ( (*(_BYTE *)(v7 + 80) & 2) != 0 && (*v8 & 0x1000) == 0 )
      goto LABEL_18;
  }
LABEL_20:
  if ( (*v13 & 0xC0000000) != 0xC0000000
    || *(_BYTE *)(v5 + 65) && (*v8 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
    v16 = 0LL;
    v100 = 0LL;
    v107 = 0;
    if ( !v7 )
      goto LABEL_23;
    v17 = *(char ***)(v7 + 176);
    if ( !v17 )
      goto LABEL_23;
    if ( (*v8 & 0x2000) != 0 )
    {
      v16 = *v17;
      v100 = v17[1];
LABEL_77:
      if ( v16 )
      {
        v41 = (volatile signed __int64 *)(v16 - 48);
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((_DWORD)v41);
          v41 = (volatile signed __int64 *)(v16 - 48);
        }
        BugCheckParameter4 = _InterlockedIncrement64(v41);
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v16, 0x10uLL, BugCheckParameter4);
      }
LABEL_23:
      if ( (*v8 & 0x100) != 0 )
      {
        v63 = *((unsigned int *)v104 + 14);
        if ( v98 )
        {
          _InterlockedExchangeAdd64(v98 + 197, *((unsigned int *)v104 + 14));
        }
        else
        {
          v79 = KeGetCurrentThread();
          v79->ReadTransferCount += v63;
        }
        __addgsqword(0x2EE8u, v63);
      }
      else if ( (*v8 & 0x200) != 0 )
      {
        v72 = *((unsigned int *)v104 + 14);
        v73 = (unsigned int)v72;
        if ( v98 )
        {
          _InterlockedExchangeAdd64(v98 + 198, v72);
        }
        else
        {
          v80 = KeGetCurrentThread();
          v80->WriteTransferCount += v73;
        }
        __addgsqword(0x2EF0u, v73);
      }
      else
      {
        v18 = (__int64)v104[7];
        if ( v18 >= 0 )
        {
          v19 = (unsigned int)v18;
          if ( v98 )
          {
            _InterlockedExchangeAdd64(v98 + 199, (unsigned int)v18);
          }
          else
          {
            v20 = KeGetCurrentThread();
            v20->OtherTransferCount += v19;
          }
          __addgsqword(0x2EF8u, v19);
        }
      }
      if ( (*v8 & 0x2000) != 0 )
      {
        v43 = (volatile signed __int32 *)(v7 + 184);
        CurrentIrql = KeGetCurrentIrql();
        v99 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
          {
            v62 = 4;
          }
          else
          {
            v62 = (-1LL << (CurrentIrql + 1)) & 4;
            v43 = (volatile signed __int32 *)(v7 + 184);
          }
          SchedulerAssist[5] |= v62;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v43);
        }
        else if ( _interlockedbittestandset64(v43, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v43);
        }
        v45 = (_QWORD *)(v5 + 32);
        v46 = *(_QWORD *)(v5 + 32);
        v47 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v46 + 8) == v5 + 32 && (_QWORD *)*v47 == v45 )
        {
          *v47 = v46;
          *(_QWORD *)(v46 + 8) = v47;
          *(_QWORD *)(v5 + 40) = v5 + 32;
          *v45 = v45;
          ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
          *v8 = *v8 & 0xFFFF5FFF | 0x8000;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 184), 0LL);
          v22 = v99;
          if ( !KiIrqlFlags )
            goto LABEL_92;
          v87 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_92;
          if ( v87 > 0xFu )
            goto LABEL_92;
          if ( v99 > 0xFu )
            goto LABEL_92;
          if ( v87 < 2u )
            goto LABEL_92;
          CurrentPrcb = KeGetCurrentPrcb();
          v89 = CurrentPrcb->SchedulerAssist;
          v90 = ~(unsigned __int16)(-1LL << (v99 + 1));
          v86 = (v90 & v89[5]) == 0;
          v89[5] &= v90;
          if ( !v86 )
            goto LABEL_92;
          goto LABEL_245;
        }
      }
      else
      {
        v21 = (__int64)v102;
        *(_QWORD *)(v5 + 152) = v102;
        v22 = 0;
        v99 = 0;
        if ( v102 )
        {
          p_Thread = (__int64)&v102[1].WaitBlock[0].Thread;
          v22 = KeGetCurrentIrql();
          v99 = v22;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v59 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v22 == 2 )
            {
              LODWORD(v60) = 4;
            }
            else
            {
              v60 = (-1LL << (v22 + 1)) & 4;
              p_Thread = (__int64)&v102[1].WaitBlock[0].Thread;
            }
            v59[5] |= v60;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(p_Thread);
            p_Thread = (__int64)&v102[1].WaitBlock[0].Thread;
            v22 = v99;
            v21 = (__int64)v102;
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)p_Thread, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)p_Thread);
            p_Thread = (__int64)&v102[1].WaitBlock[0].Thread;
            v22 = v99;
            v21 = (__int64)v102;
          }
        }
        else
        {
          p_Thread = 1496LL;
        }
        v24 = (_QWORD *)(v5 + 32);
        v25 = *(_QWORD *)(v5 + 32);
        v26 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v25 + 8) == v5 + 32 && (_QWORD *)*v26 == v24 )
        {
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *(_QWORD *)(v5 + 40) = v5 + 32;
          *v24 = v24;
          if ( !v21 )
            goto LABEL_42;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseSpinLockInstrumented(p_Thread, retaddr);
            v22 = v99;
            v21 = (__int64)v102;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)p_Thread, 0LL);
          }
          if ( !KiIrqlFlags
            || (v91 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
            || v91 > 0xFu
            || v22 > 0xFu
            || v91 < 2u )
          {
LABEL_41:
            __writecr8(v22);
LABEL_42:
            v27 = *v8 & 0x8000;
            if ( v27 )
            {
              v28 = (__int64 *)(v104 + 11);
            }
            else
            {
              v28 = (__int64 *)(v5 + 88);
              *(_QWORD *)(v5 + 88) &= ~1uLL;
            }
            if ( !v27 && *v28 )
            {
              if ( v109 )
                v81 = *(char *)(v5 + 70);
              else
                v81 = 2;
              KeInitializeApc(
                (__int64)a1,
                v21,
                v81,
                (__int64)IopUserRundown,
                (__int64)IopUserRundown,
                *v28,
                *(_BYTE *)(v5 + 64),
                *(_QWORD *)(v5 + 96));
              KeInsertQueueApc((__int64)a1, *(_QWORD *)(v5 + 72), 0LL, 2u);
              goto LABEL_67;
            }
            if ( v16
              && *(_QWORD *)(v5 + 96)
              && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0 || *(_BYTE *)(v5 + 65) || (*v13 & 0xC0000000) == 0x80000000) )
            {
              *a1 = v100;
              *(_DWORD *)(v5 + 184) = 0;
              v48 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
              if ( v48 == 8 || v48 == 20 )
                v10 = 1;
              KeInsertQueueEx((__int64)v16, (_QWORD *)(v5 + 168), v10, 0);
              goto LABEL_67;
            }
            if ( v27 )
            {
              v49 = *v28;
              do
              {
                v50 = v49;
                v51 = ((v49 >> 1) & 3) - 1;
                v49 = _InterlockedCompareExchange64(v28, v49 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v51), v49);
              }
              while ( v50 != v49 );
              if ( (_DWORD)v51 )
                goto LABEL_67;
              if ( !IopDispatchFreeIrp )
              {
                if ( *(_WORD *)v5 == 6 )
                {
                  *(_WORD *)v5 = 0;
                  if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
                    IopFreeIrpExtension(v5, -1, 1);
                  if ( (*(_BYTE *)(v5 + 71) & 0x21) != 0x21 )
                  {
                    v52 = *(unsigned __int16 *)(v5 + 4);
                    if ( (unsigned int)v52 >= (unsigned int)KeNumberProcessors_0 )
                    {
                      v53 = KeGetCurrentPrcb();
                    }
                    else
                    {
                      _mm_lfence();
                      v53 = (struct _KPRCB *)KiProcessorBlock[v52];
                    }
                    v54 = *(_BYTE *)(v5 + 71);
                    if ( (v54 & 8) != 0 )
                    {
                      *(_BYTE *)(v5 + 71) = v54 ^ 8;
                      _InterlockedIncrement(&v53->LookasideIrpFloat);
                    }
                    if ( (*(_BYTE *)(v5 + 71) & 4) == 0 )
                      goto LABEL_192;
                    if ( (IopIrpStackProfilerFlags & 3) != 0 )
                    {
                      v55 = *(_WORD *)(v5 + 2);
                      if ( v55 != 72 * (char)IopLargeIrpStackLocations + 208
                        && v55 != 72 * (char)IopMediumIrpStackLocations + 208
                        && v55 != 280 )
                      {
                        goto LABEL_192;
                      }
                    }
                    v56 = (char *)*(unsigned __int16 *)(v5 + 2);
                    if ( (unsigned __int16)v56 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                    {
                      v57 = 2080LL;
                      v58 = 2088LL;
                    }
                    else if ( (unsigned __int16)v56 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                    {
                      v57 = 2048LL;
                      v58 = 2056LL;
                    }
                    else
                    {
                      v57 = 2064LL;
                      v58 = 2072LL;
                    }
                    v104[7] = v56;
                    v36 = *(_QWORD *)((char *)&v53->MxCsr + v57);
                    ++*(_DWORD *)(v36 + 28);
                    if ( *(_WORD *)v36 >= *(_WORD *)(v36 + 16) )
                    {
                      ++*(_DWORD *)(v36 + 32);
                      v36 = *(_QWORD *)((char *)&v53->MxCsr + v58);
                      ++*(_DWORD *)(v36 + 28);
                      if ( *(_WORD *)v36 >= *(_WORD *)(v36 + 16) )
                      {
                        ++*(_DWORD *)(v36 + 32);
                        ExFreePoolWithTag((PVOID)v5, 0);
                        goto LABEL_67;
                      }
                    }
                    v37 = *(_BYTE *)(v5 + 71);
                    if ( (v37 & 1) == 0 )
                      goto LABEL_66;
                    goto LABEL_121;
                  }
LABEL_255:
                  IopFreeReserveIrp(v5);
                  goto LABEL_67;
                }
LABEL_257:
                KeBugCheckEx(0x44u, v5, 0x2758uLL, 0LL, 0LL);
              }
            }
            else if ( !IopDispatchFreeIrp )
            {
              if ( *(_WORD *)v5 == 6 )
              {
                *(_WORD *)v5 = 0;
                if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
                  IopFreeIrpExtension(v5, -1, 1);
                if ( (*(_BYTE *)(v5 + 71) & 0x21) != 0x21 )
                {
                  v29 = *(unsigned __int16 *)(v5 + 4);
                  if ( (unsigned int)v29 >= (unsigned int)KeNumberProcessors_0 )
                  {
                    v30 = KeGetCurrentPrcb();
                  }
                  else
                  {
                    _mm_lfence();
                    v30 = (struct _KPRCB *)KiProcessorBlock[v29];
                  }
                  v31 = *(_BYTE *)(v5 + 71);
                  if ( (v31 & 8) != 0 )
                  {
                    *(_BYTE *)(v5 + 71) = v31 ^ 8;
                    _InterlockedIncrement(&v30->LookasideIrpFloat);
                  }
                  if ( (*(_BYTE *)(v5 + 71) & 4) == 0 )
                    goto LABEL_192;
                  if ( (IopIrpStackProfilerFlags & 3) != 0 )
                  {
                    v32 = *(_WORD *)(v5 + 2);
                    if ( v32 != 72 * (char)IopLargeIrpStackLocations + 208
                      && v32 != 72 * (char)IopMediumIrpStackLocations + 208
                      && v32 != 280 )
                    {
                      goto LABEL_192;
                    }
                  }
                  v33 = (char *)*(unsigned __int16 *)(v5 + 2);
                  if ( (unsigned __int16)v33 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                  {
                    v34 = 2080LL;
                    v35 = 2088LL;
                  }
                  else if ( (unsigned __int16)v33 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                  {
                    v34 = 2048LL;
                    v35 = 2056LL;
                  }
                  else
                  {
                    v34 = 2064LL;
                    v35 = 2072LL;
                  }
                  v104[7] = v33;
                  v36 = *(_QWORD *)((char *)&v30->MxCsr + v34);
                  ++*(_DWORD *)(v36 + 28);
                  if ( *(_WORD *)v36 >= *(_WORD *)(v36 + 16) )
                  {
                    ++*(_DWORD *)(v36 + 32);
                    v36 = *(_QWORD *)((char *)&v30->MxCsr + v35);
                    ++*(_DWORD *)(v36 + 28);
                    if ( *(_WORD *)v36 >= *(_WORD *)(v36 + 16) )
                    {
                      ++*(_DWORD *)(v36 + 32);
LABEL_192:
                      ExFreePoolWithTag((PVOID)v5, 0);
                      goto LABEL_67;
                    }
                  }
                  v37 = *(_BYTE *)(v5 + 71);
                  if ( (v37 & 1) == 0 )
                  {
LABEL_66:
                    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v36, (PSLIST_ENTRY)v5);
LABEL_67:
                    if ( v16 )
                      ObfDereferenceObject(v16);
                    if ( v107 )
                    {
                      v68 = (volatile signed __int32 *)(v7 + 184);
                      v69 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v69 <= 0xFu )
                      {
                        v76 = KeGetCurrentPrcb()->SchedulerAssist;
                        if ( v69 == 2 )
                          LODWORD(v77) = 4;
                        else
                          v77 = (-1LL << (v69 + 1)) & 4;
                        v76[5] |= v77;
                      }
                      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                      {
                        KiAcquireSpinLockInstrumented(v7 + 184);
                      }
                      else if ( _interlockedbittestandset64(v68, 0LL) )
                      {
                        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184));
                      }
                      v70 = *(_QWORD *)(v7 + 176);
                      v71 = *(_QWORD *)(v70 + 16);
                      *(_QWORD *)(v70 + 16) = v71 - 1;
                      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                        KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
                      else
                        _InterlockedAnd64((volatile signed __int64 *)v68, 0LL);
                      if ( KiIrqlFlags )
                      {
                        v94 = KeGetCurrentIrql();
                        if ( (KiIrqlFlags & 1) != 0 && v94 <= 0xFu && v69 <= 0xFu && v94 >= 2u )
                        {
                          v95 = KeGetCurrentPrcb();
                          v96 = v95->SchedulerAssist;
                          v97 = ~(unsigned __int16)(-1LL << (v69 + 1));
                          v86 = (v97 & v96[5]) == 0;
                          v96[5] &= v97;
                          if ( v86 )
                            KiRemoveSystemWorkPriorityKick(v95);
                        }
                      }
                      __writecr8(v69);
                      if ( v71 <= 0 )
                        KeBugCheckEx(0x18u, v7, *(_QWORD *)(v7 + 176), 0x82uLL, v71);
                    }
                    if ( v7 )
                    {
                      if ( ObpTraceFlags )
                        ObpPushStackInfo(v7 - 48);
                      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 48), 0xFFFFFFFFFFFFFFFFuLL);
                      v39 = v38 <= 1;
                      v40 = v38 - 1;
                      if ( v39 )
                      {
                        if ( *(_QWORD *)(v7 - 40) )
                          KeBugCheckEx(
                            0x18u,
                            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v7 - 48) >> 8)],
                            v7,
                            3uLL,
                            *(_QWORD *)(v7 - 40));
                        if ( v40 < 0 )
                          KeBugCheckEx(0x18u, 0LL, v7, 4uLL, v40);
                        ObpDeferObjectDeletion(v7 - 48);
                      }
                    }
                    return;
                  }
LABEL_121:
                  *(_BYTE *)(v5 + 71) = v37 ^ 1;
                  ExReturnPoolQuota(v5);
                  goto LABEL_66;
                }
                goto LABEL_255;
              }
              goto LABEL_257;
            }
            IovFreeIrpPrivate(v5);
            goto LABEL_67;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v92 = CurrentPrcb->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << (v22 + 1));
          v86 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( !v86 )
          {
LABEL_92:
            v21 = (__int64)v102;
            goto LABEL_41;
          }
LABEL_245:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v22 = v99;
          goto LABEL_92;
        }
      }
      __fastfail(3u);
    }
    v64 = -1LL;
    v101 = -1LL;
    v65 = (volatile signed __int64 *)(v7 + 184);
    v66 = KeGetCurrentIrql();
    v108 = v66;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
    {
      v74 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v66 == 2 )
        LODWORD(v75) = 4;
      else
        v75 = (-1LL << (v66 + 1)) & 4;
      v74[5] |= v75;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 184);
    }
    else
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v65, 0LL) )
      {
LABEL_150:
        v67 = *(char ***)(v7 + 176);
        v103 = v67;
        if ( v67 )
        {
          v64 = (signed __int64)v67[2];
          v101 = v64;
          v67[2] = (char *)(v64 + 1);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
          v67 = v103;
          v64 = v101;
          v66 = v108;
        }
        else
        {
          _InterlockedAnd64(v65, 0LL);
        }
        if ( KiIrqlFlags )
        {
          v82 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v82 <= 0xFu && v66 <= 0xFu && v82 >= 2u )
          {
            v83 = KeGetCurrentPrcb();
            v84 = v83->SchedulerAssist;
            v85 = ~(unsigned __int16)(-1LL << (v66 + 1));
            v86 = (v85 & v84[5]) == 0;
            v84[5] &= v85;
            if ( v86 )
            {
              KiRemoveSystemWorkPriorityKick(v83);
              v67 = v103;
              v66 = v108;
            }
            v64 = v101;
          }
        }
        __writecr8(v66);
        if ( v67 )
        {
          v107 = 1;
          v16 = *v67;
          v100 = v67[1];
          if ( v64 < 0 )
            KeBugCheckEx(0x18u, v7, *(_QWORD *)(v7 + 176), 0x81uLL, v64);
        }
        else
        {
          v107 = 0;
          v16 = 0LL;
          v100 = 0LL;
        }
        goto LABEL_77;
      }
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184));
    }
    v66 = v108;
    v64 = -1LL;
    goto LABEL_150;
  }
  if ( (*v8 & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  if ( (*v8 & 0x8000) == 0 )
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread((_QWORD *)v5);
LABEL_191:
    IoFreeIrp((PIRP)v5);
    return;
  }
  if ( !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)(v5 + 88), -1) )
    goto LABEL_191;
}
