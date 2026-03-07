char __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1)
{
  unsigned int v1; // r14d
  int v3; // r13d
  unsigned __int16 v4; // di
  int v5; // r11d
  __int64 v6; // rsi
  __int64 v7; // r10
  int v8; // r11d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int16 i; // dx
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  int Processor; // eax
  __int16 v16; // r14
  unsigned int *j; // rbx
  unsigned __int64 v18; // rdi
  bool v19; // zf
  unsigned __int8 k; // al
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 (__fastcall *v34)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v35)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v36)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v39[2]; // [rsp+30h] [rbp-418h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-410h] BYREF
  int v41; // [rsp+3Ch] [rbp-40Ch]
  __int128 v42; // [rsp+40h] [rbp-408h] BYREF
  int v43; // [rsp+50h] [rbp-3F8h]
  int v44; // [rsp+58h] [rbp-3F0h]
  int v45; // [rsp+5Ch] [rbp-3ECh]
  int v46; // [rsp+60h] [rbp-3E8h]
  _QWORD *v47; // [rsp+68h] [rbp-3E0h] BYREF
  _DWORD v48[2]; // [rsp+70h] [rbp-3D8h] BYREF
  _DWORD v49[2]; // [rsp+78h] [rbp-3D0h] BYREF
  _DWORD v50[2]; // [rsp+80h] [rbp-3C8h] BYREF
  _DWORD v51[2]; // [rsp+88h] [rbp-3C0h] BYREF
  _DWORD v52[2]; // [rsp+90h] [rbp-3B8h] BYREF
  _DWORD v53[2]; // [rsp+98h] [rbp-3B0h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-398h]
  int v56; // [rsp+B8h] [rbp-390h] BYREF
  __int128 v57; // [rsp+BCh] [rbp-38Ch]
  __int128 v58; // [rsp+D0h] [rbp-378h] BYREF
  unsigned __int16 v59[136]; // [rsp+E0h] [rbp-368h] BYREF
  _QWORD v60[66]; // [rsp+1F0h] [rbp-258h] BYREF
  int v61; // [rsp+440h] [rbp-8h]

  v1 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v3 = 0;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    do
    {
      v6 = qword_140D1EFE8[v4];
      if ( a1 )
      {
        if ( v4 >= *a1 )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&a1[4 * v4 + 4];
        v7 = v6 ^ v21;
        v60[v4 + 34] = v7;
        if ( KiNonParkedCpuSets[v4] == v7 )
          goto LABEL_10;
      }
      else
      {
        v7 = KiNonParkedCpuSets[v4];
        v60[v4 + 34] = v7;
      }
      v8 = v5 << 6;
      v9 = v6 & v7;
      v3 = 1;
      v10 = v6 ^ v6 & v7;
      if ( (v6 & v7) != 0 )
      {
        do
        {
          _BitScanForward64(&v11, v9);
          v44 = v11;
          v9 ^= 1LL << v11;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v8 + v11)) = 1LL << v11;
        }
        while ( v9 );
      }
      if ( v10 )
      {
        v22 = *((_QWORD *)&unk_140D20578 + 4 * v4);
        v23 = v22 & -(__int64)((v7 & (v6 ^ v22)) != 0 && (v7 & v22) != 0);
        v24 = (v6 ^ v22) & -(__int64)((v7 & (v6 ^ v22)) != 0 && (v7 & v22) != 0);
        v25 = KiSystemAllowedCpuSets[2 * v4] ^ v6;
        v26 = v25 & v7;
        if ( !v25 || !v26 )
          goto LABEL_55;
        v27 = v10 & v25;
        v10 ^= v27;
        while ( v27 )
        {
          _BitScanForward64((unsigned __int64 *)&v28, v27);
          v29 = v26;
          v27 &= ~(1LL << v28);
          v45 = v28;
          if ( _bittest64(&v23, (unsigned int)v28) )
          {
            if ( (v26 & v23) != 0 )
              v29 = v26 & v23;
          }
          else if ( (v26 & v24) != 0 )
          {
            v29 = v26 & v24;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v8 + v28)) = v29;
        }
        if ( v10 )
        {
LABEL_55:
          v30 = v6 & ~v26;
          if ( (v7 & v30) == 0 )
            v30 = v6;
          do
          {
            _BitScanForward64((unsigned __int64 *)&v31, v10);
            v32 = v30;
            v10 &= ~(1LL << v31);
            v46 = v31;
            if ( _bittest64(&v23, (unsigned int)v31) )
            {
              if ( (v7 & v23 & v30) != 0 )
              {
                v33 = v23;
LABEL_62:
                v32 = v30 & v33;
              }
            }
            else if ( (v7 & v24 & v30) != 0 )
            {
              v33 = v24;
              goto LABEL_62;
            }
            *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v8 + v31)) = v32;
          }
          while ( v10 );
        }
      }
LABEL_10:
      v5 = ++v4;
    }
    while ( v4 < v1 );
  }
  v47 = 0LL;
  if ( v3 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v1; KiNonParkedCpuSets[v13] = v60[v13 + 34] )
      v13 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v47);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(Processor) = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v47);
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(Processor) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)Processor )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
        return Processor;
      }
      memset(v59, 0, 0x108uLL);
      v57 = 0LL;
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        v56 = 3;
        ProcNumber = (struct _PROCESSOR_NUMBER)-1;
        v41 = 1;
        v39[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v39[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v34 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
        _disable();
        LOBYTE(Processor) = v34(*(_QWORD *)(HalpInterruptController + 16), v39, &v56, 47LL, &ProcNumber);
        if ( (v61 & 0x200) != 0 )
          _enable();
      }
      else
      {
        KeInitializeAffinityEx2((__int64)v59, 0x20u);
        KeAddProcessorAffinityEx(v59, KeGetPcr()->Prcb.Number);
        v39[0] = 0;
        ProcNumber = 0;
        v55 = 0LL;
        v58 = 0LL;
        v54 = 0LL;
        memset(v60, 0, 0x108uLL);
        v43 = 0;
        v42 = 0LL;
        if ( qword_140C621C8 )
        {
          LOBYTE(Processor) = qword_140C621C8(v59, 47LL);
          return Processor;
        }
        KeInitializeAffinityEx2((__int64)v60, 0x20u);
        KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v59, v60, WORD1(v60[0]));
        v16 = v61;
        if ( HalpInterruptClusterModeEnabled )
        {
          for ( j = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)j < HalpInterruptClusterDataEnd; j += 6 )
          {
            if ( (unsigned int)KeAndGroupAffinityEx(v59, (__int64)(j + 2), (char *)&v58) )
            {
              v18 = v58;
              LODWORD(v42) = 6;
              v19 = (_QWORD)v58 == 0LL;
              *((_QWORD *)&v42 + 1) = *j;
              ProcNumber.Group = WORD4(v58);
              for ( k = 0; ; ++k )
              {
                ProcNumber.Number = k;
                if ( v19 )
                  break;
                if ( (v18 & 1) != 0 )
                {
                  v39[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                  HIDWORD(v42) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 12);
                  k = ProcNumber.Number;
                }
                v18 >>= 1;
                v19 = v18 == 0;
              }
              v48[0] = -1;
              v48[1] = 1;
              v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v35 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              Processor = v35(*(_QWORD *)(HalpInterruptController + 16), v49, &v42, 47LL, v48);
              if ( (v16 & 0x200) != 0 )
                _enable();
              if ( Processor < 0 )
                return Processor;
            }
          }
          goto LABEL_33;
        }
        if ( HalpInterruptPhysicalModeOnly )
          goto LABEL_33;
        LODWORD(v42) = 5;
        DWORD2(v42) = 0;
        KeInitializeEnumerationContext((__int64)&v54, (__int64)v59);
        while ( !(unsigned int)KeEnumerateNextProcessor(v39, (unsigned __int16 **)&v54) )
        {
          if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0]) == 5 )
            DWORD2(v42) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 8);
        }
        if ( !DWORD2(v42) )
          goto LABEL_33;
        v50[0] = -1;
        v50[1] = 1;
        v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v36 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v36(*(_QWORD *)(HalpInterruptController + 16), v51, &v42, 47LL, v50);
        if ( (v16 & 0x200) != 0 )
          _enable();
        if ( Processor >= 0 )
        {
LABEL_33:
          *((_QWORD *)&v54 + 1) = v60[1];
          *(_QWORD *)&v54 = v60;
          v39[0] = 0;
          LOWORD(v55) = 0;
          do
          {
            Processor = KeEnumerateNextProcessor(v39, (unsigned __int16 **)&v54);
            if ( Processor )
              break;
            LODWORD(v42) = 4;
            v52[0] = -1;
            v52[1] = 1;
            DWORD2(v42) = *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 8);
            v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                            + 120);
            _disable();
            Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v53, &v42, 47LL, v52);
            if ( (v16 & 0x200) != 0 )
              _enable();
          }
          while ( Processor >= 0 );
        }
      }
    }
  }
  return Processor;
}
