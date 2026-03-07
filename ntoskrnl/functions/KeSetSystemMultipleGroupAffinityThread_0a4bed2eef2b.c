__int64 __fastcall KeSetSystemMultipleGroupAffinityThread(__int64 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // cx
  unsigned int v8; // r9d
  _WORD *v9; // r8
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  __int64 v13; // rdi
  int v14; // eax
  char v15; // r13
  __int64 i; // r8
  _WORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r9
  ULONG_PTR v21; // rbp
  bool v22; // zf
  unsigned int v23; // ebx
  int v25; // ecx
  struct _KPRCB *v26; // rdi
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int16 v33; // bp
  unsigned int *j; // rbx
  unsigned __int64 v35; // rdi
  bool v36; // zf
  unsigned __int8 k; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // ecx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  struct _KPRCB *v47; // rcx
  signed __int32 *v48; // r8
  signed __int32 v49; // eax
  signed __int32 v50; // ett
  __int64 v51; // r8
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  void (__fastcall *v59)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v60)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v61; // eax
  __int64 (__fastcall *v62)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v63; // eax
  __int64 (__fastcall *v64)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v65; // eax
  _DWORD v66[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v68; // [rsp+4Ch] [rbp-31Ch]
  __int128 v69; // [rsp+50h] [rbp-318h] BYREF
  int v70; // [rsp+60h] [rbp-308h]
  int v71; // [rsp+68h] [rbp-300h] BYREF
  int v72; // [rsp+6Ch] [rbp-2FCh] BYREF
  _QWORD *v73; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD *v74; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 *v75; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int64 v76; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v77[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v78[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v79[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v80[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v81[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v82[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  __int128 v83; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-298h]
  int v85; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v86; // [rsp+DCh] [rbp-28Ch]
  __int128 v87; // [rsp+F0h] [rbp-278h] BYREF
  unsigned __int16 v88[136]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v89[34]; // [rsp+210h] [rbp-158h] BYREF
  int v90; // [rsp+360h] [rbp-8h]

  v3 = a2;
  v74 = 0LL;
  KeGetCurrentIrql();
  if ( KeGetCurrentIrql() > 2u )
    return (unsigned int)-1073741811;
  if ( a2 > LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a3 + 18) >= 3u )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 24);
  if ( !*(_WORD *)v6 )
    return (unsigned int)-1073741811;
  v7 = *(_WORD *)(v6 + 2);
  if ( *(_WORD *)v6 > v7 || *(_DWORD *)(v6 + 4) || v7 < LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  v8 = 0;
  if ( a2 )
  {
    v9 = (_WORD *)a1 + 6;
    while ( !(*v9 | (unsigned __int16)(v9[1] | *(v9 - 1))) )
    {
      v10 = (unsigned __int16)*(v9 - 2);
      if ( (unsigned __int16)v10 >= LOWORD(KeActiveProcessors[0])
        || (qword_140D1EFE8[v10] & *(_QWORD *)(v9 - 6)) != *(_QWORD *)(v9 - 6) )
      {
        break;
      }
      ++v8;
      v9 += 8;
      if ( v8 >= a2 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
LABEL_14:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v39) = 4;
    else
      v39 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v39;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v71 = 0;
  v13 = *(_QWORD *)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v71);
    while ( *(_QWORD *)(v13 + 64) );
  }
  v14 = *(_DWORD *)(v13 + 116);
  v15 = 1;
  if ( (v14 & 8) != 0 )
  {
    v40 = *(_QWORD *)(v13 + 1104);
    if ( v40 )
    {
      if ( v40 == a3 )
      {
        if ( *(_BYTE *)(a3 + 18) == 1 )
          goto LABEL_85;
        v15 = 0;
LABEL_20:
        if ( (_WORD)v3 )
        {
          for ( i = v3; i; --i )
          {
            v17 = *(_WORD **)(a3 + 24);
            v18 = *((unsigned __int16 *)a1 + 4);
            v19 = *a1;
            if ( *v17 <= (unsigned __int16)v18 )
            {
              if ( v17[1] <= (unsigned __int16)v18 )
                goto LABEL_24;
              *v17 = v18 + 1;
            }
            *(_QWORD *)&v17[4 * v18 + 4] |= v19;
LABEL_24:
            a1 += 2;
          }
        }
        if ( v15 )
        {
          *(_BYTE *)(a3 + 19) |= 1u;
          *(_QWORD *)a3 = *(_QWORD *)(v13 + 1104);
          *(_QWORD *)(v13 + 1104) = a3;
        }
        KiSetSystemAffinityThread(CurrentPrcb, *(unsigned __int16 **)(a3 + 24), 0LL, 0x800u, (__int64)&v74);
        KiReadyDeferredReadyList(CurrentPrcb, &v74);
        v76 = 0LL;
        if ( CurrentIrql >= 2u )
        {
          if ( *(_QWORD *)(CurrentPrcb + 16) && !*(_BYTE *)(CurrentPrcb + 13242) )
          {
            if ( *(_BYTE *)(CurrentPrcb + 32) )
            {
              *(_BYTE *)(CurrentPrcb + 6) = 1;
            }
            else
            {
              memset(v88, 0, 0x108uLL);
              v86 = 0LL;
              if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
              {
                v85 = 3;
                ProcNumber = (struct _PROCESSOR_NUMBER)-1;
                v68 = 1;
                v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v59 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
                _disable();
                v59(*(_QWORD *)(HalpInterruptController + 16), v66, &v85, (unsigned int)(v68 + 46), &ProcNumber);
                if ( (v90 & 0x200) != 0 )
                  _enable();
                return 0;
              }
              KeInitializeAffinityEx2((__int64)v88, 0x20u);
              KeAddProcessorAffinityEx(v88, KeGetPcr()->Prcb.Number);
              v66[0] = 0;
              ProcNumber = 0;
              v84 = 0LL;
              v87 = 0LL;
              v83 = 0LL;
              memset(v89, 0, 0x108uLL);
              v70 = 0;
              v69 = 0LL;
              if ( qword_140C621C8 )
              {
                qword_140C621C8(v88, 47LL);
              }
              else
              {
                KeInitializeAffinityEx2((__int64)v89, 0x20u);
                KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v88, v89, WORD1(v89[0]));
                v33 = v90;
                if ( HalpInterruptClusterModeEnabled )
                {
                  for ( j = (unsigned int *)HalpInterruptClusterData;
                        (unsigned __int64)j < HalpInterruptClusterDataEnd;
                        j += 6 )
                  {
                    if ( (unsigned int)KeAndGroupAffinityEx(v88, (__int64)(j + 2), (char *)&v87) )
                    {
                      v35 = v87;
                      LODWORD(v69) = 6;
                      v36 = (_QWORD)v87 == 0LL;
                      *((_QWORD *)&v69 + 1) = *j;
                      ProcNumber.Group = WORD4(v87);
                      for ( k = 0; ; ++k )
                      {
                        ProcNumber.Number = k;
                        if ( v36 )
                          break;
                        if ( (v35 & 1) != 0 )
                        {
                          v66[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                          HIDWORD(v69) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 12);
                          k = ProcNumber.Number;
                        }
                        v35 >>= 1;
                        v36 = v35 == 0;
                      }
                      v77[0] = -1;
                      v77[1] = 1;
                      v78[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                      v78[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                      v60 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                      _disable();
                      v61 = v60(*(_QWORD *)(HalpInterruptController + 16), v78, &v69, 47LL, v77);
                      if ( (v33 & 0x200) != 0 )
                        _enable();
                      if ( v61 < 0 )
                        return 0;
                    }
                  }
                }
                else if ( !HalpInterruptPhysicalModeOnly )
                {
                  LODWORD(v69) = 5;
                  DWORD2(v69) = 0;
                  KeInitializeEnumerationContext((__int64)&v83, (__int64)v88);
                  while ( !(unsigned int)KeEnumerateNextProcessor(v66, (unsigned __int16 **)&v83) )
                  {
                    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0]) == 5 )
                      DWORD2(v69) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 8);
                  }
                  if ( DWORD2(v69) )
                  {
                    v79[0] = -1;
                    v79[1] = 1;
                    v80[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v80[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v62 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    v63 = v62(*(_QWORD *)(HalpInterruptController + 16), v80, &v69, 47LL, v79);
                    if ( (v33 & 0x200) != 0 )
                      _enable();
                    if ( v63 < 0 )
                      return 0;
                  }
                }
                *((_QWORD *)&v83 + 1) = v89[1];
                *(_QWORD *)&v83 = v89;
                v66[0] = 0;
                LOWORD(v84) = 0;
                do
                {
                  if ( (unsigned int)KeEnumerateNextProcessor(v66, (unsigned __int16 **)&v83) )
                    break;
                  LODWORD(v69) = 4;
                  v81[0] = -1;
                  v81[1] = 1;
                  DWORD2(v69) = *(_DWORD *)(HalpInterruptTargets + 24LL * v66[0] + 8);
                  v82[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v82[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v64 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v65 = v64(*(_QWORD *)(HalpInterruptController + 16), v82, &v69, 47LL, v81);
                  if ( (v33 & 0x200) != 0 )
                    _enable();
                }
                while ( v65 >= 0 );
              }
            }
          }
        }
        else
        {
          v21 = *(_QWORD *)(CurrentPrcb + 8);
          if ( *(_QWORD *)(CurrentPrcb + 16) )
          {
            v25 = *(unsigned __int8 *)(v21 + 792) | *(unsigned __int8 *)(v21 + 870);
            v73 = 0LL;
            v75 = 0LL;
            if ( v25 != 63 )
            {
              v26 = KeGetCurrentPrcb();
              KiAbProcessThreadLocks(v21, 1u, 1, 1, (__int64)&v73, (__int64)&v75, (__int64)&v26->AbSelfIoBoostsList);
              KiAbPropagateBoosts(&v75, (__int64)&v26->AbSelfIoBoostsList, (__int64)&v73);
              KiReadyDeferredReadyList((__int64)v26, &v73);
            }
            v72 = 0;
            v76 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(&v72);
              while ( *(_QWORD *)(CurrentPrcb + 48) );
            }
            v27 = *(_QWORD *)(CurrentPrcb + 16);
            *(_QWORD *)(CurrentPrcb + 16) = 0LL;
            _disable();
            *(_BYTE *)(CurrentPrcb + 32) = 1;
            v28 = __rdtsc();
            v29 = v28 - *(_QWORD *)(CurrentPrcb + 33152);
            *(_QWORD *)(v21 + 72) += v29;
            v30 = *(unsigned int *)(v21 + 80);
            v31 = v29 * *(unsigned int *)(CurrentPrcb + 33208);
            *(_QWORD *)(CurrentPrcb + 33152) = v28;
            v32 = (v31 >> 16) + v30;
            if ( v32 > 0xFFFFFFFF )
              LODWORD(v32) = -1;
            v22 = (*(_BYTE *)(v21 + 2) & 0xBE) == 0;
            *(_DWORD *)(v21 + 80) = v32;
            if ( !v22 )
            {
              LOBYTE(v20) = 1;
              KiEndThreadAccountingPeriodEx(CurrentPrcb, v21, v29, v20);
            }
            v47 = KeGetCurrentPrcb();
            v48 = (signed __int32 *)v47->SchedulerAssist;
            if ( v48 )
            {
              _m_prefetchw(v48);
              v49 = *v48;
              do
              {
                v50 = v49;
                v49 = _InterlockedCompareExchange(v48, v49 & 0xFFDFFFFF, v49);
              }
              while ( v50 != v49 );
              if ( (v49 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
            _enable();
            *(_QWORD *)(CurrentPrcb + 8) = v27;
            if ( *(_BYTE *)(v27 + 388) == 1 )
              *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v27 + 388) = 2;
            *(_BYTE *)(v21 + 643) = 32;
            *(_BYTE *)(v21 + 390) = CurrentIrql;
            KiQueueReadyThread(CurrentPrcb, (__int64 *)&v76, v21);
            LOBYTE(v51) = CurrentIrql;
            v22 = (unsigned __int8)KiSwapContext(v21, v27, v51) == 0;
          }
          else
          {
            v22 = (*(_DWORD *)(v21 + 116) & 0x40) == 0;
          }
          if ( !v22 )
          {
            if ( KiIrqlFlags )
            {
              v52 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v52 - 2) <= 0xDu )
              {
                v53 = KeGetCurrentPrcb();
                v54 = v53->SchedulerAssist;
                v22 = (v54[5] & 0xFFFF0003) == 0;
                v54[5] &= 0xFFFF0003;
                if ( v22 )
                  KiRemoveSystemWorkPriorityKick(v53);
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(v21 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          if ( KiIrqlFlags )
          {
            v55 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v55 - 2) <= 0xDu )
            {
              v56 = KeGetCurrentPrcb();
              v57 = v56->SchedulerAssist;
              v58 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v22 = (v58 & v57[5]) == 0;
              v57[5] &= v58;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
          __writecr8(CurrentIrql);
        }
        return 0;
      }
      if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
        goto LABEL_85;
      v41 = *(unsigned __int8 *)(v40 + 18);
      if ( !v41 )
        goto LABEL_19;
      v42 = v41 - 1;
      if ( v42 )
      {
        if ( v42 == 1 )
          goto LABEL_19;
        goto LABEL_20;
      }
    }
    KeFirstGroupAffinityEx(a3 + 8, *(_WORD **)(v13 + 576));
    *(_BYTE *)(a3 + 19) |= 2u;
    *(_BYTE *)(a3 + 18) = 2;
    goto LABEL_20;
  }
  *(_DWORD *)(v13 + 116) = v14 | 8;
  if ( (*(_BYTE *)(a3 + 19) & 1) == 0 )
  {
LABEL_19:
    *(_BYTE *)(a3 + 18) = 0;
    goto LABEL_20;
  }
LABEL_85:
  *(_QWORD *)(v13 + 64) = 0LL;
  v23 = -1073741811;
  if ( KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v22 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(CurrentIrql);
  return v23;
}
