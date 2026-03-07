char __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // r14d
  bool v6; // zf
  __int64 v7; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // r12d
  _QWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 SystemTimePrecise; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  signed __int64 v26; // rax
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  signed __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 InternalData; // rax
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r10
  signed __int64 v43; // rax
  int v44; // r9d
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  signed __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  _DWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  signed __int32 v73[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v74; // [rsp+30h] [rbp-68h]
  unsigned int v75; // [rsp+34h] [rbp-64h]
  __int64 v76; // [rsp+38h] [rbp-60h] BYREF
  __int64 v77; // [rsp+40h] [rbp-58h] BYREF
  __int128 v78; // [rsp+48h] [rbp-50h] BYREF
  __int64 v79; // [rsp+58h] [rbp-40h]
  int v82; // [rsp+B8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 4248);
  LOBYTE(v4) = 0;
  v5 = 0;
  v76 = 0LL;
  v6 = !_BitScanForward((unsigned int *)&v7, v3);
  v82 = 0;
  v74 = v7;
  v78 = 0LL;
  v9 = a2;
  v79 = 0LL;
  v10 = a1;
  while ( !v6 )
  {
    v3 &= v3 - 1;
    v4 = 32LL * (unsigned int)v7;
    v75 = v3;
    v11 = v4 + v10 + 4284;
    if ( !v11 )
      goto LABEL_109;
    LODWORD(v4) = *(_DWORD *)(v11 + 4);
    if ( (v4 & 4) == 0 )
      goto LABEL_109;
    LODWORD(v4) = *(unsigned __int8 *)(v10 + 2 * v7 + 4232);
    if ( (unsigned int)v4 >= *(_DWORD *)(v10 + 16) )
      goto LABEL_109;
    _mm_lfence();
    v4 = *(_QWORD *)(v10 + 456);
    v12 = *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(v10 + 2 * v7 + 4232));
    if ( (v12 & 1) != 0 )
      goto LABEL_109;
    v13 = v10 + 32LL * v74 + 4284;
    if ( v13 && (*(_DWORD *)(v13 + 4) & 0x100) != 0 )
    {
      v14 = 1 << *(_DWORD *)(v12 + 200);
      v15 = *(_QWORD **)(v4 + 8LL * *(unsigned __int8 *)(v10 + 2 * v7 + 4232));
      if ( (~v5 & v14) != 0 )
      {
        v16 = *(_QWORD *)(v12 + 24);
        if ( !v16 )
        {
          SystemTimePrecise = RtlGetSystemTimePrecise();
          goto LABEL_65;
        }
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 != 1 )
              __fastfail(0x3Du);
            SystemTimePrecise = __rdtsc();
          }
          else
          {
            v77 = 0LL;
            ((void (__fastcall *)(__int64 *))off_140C01DF0[0])(&v77);
            SystemTimePrecise = v77;
          }
          goto LABEL_65;
        }
        v20 = HalpPerformanceCounter;
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
        {
          v21 = 10000000LL;
          if ( !HalpTimerReferencePage )
          {
            if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
            {
              InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
              v35 = (*(__int64 (__fastcall **)(__int64))(v20 + 112))(InternalData);
              v22 = *(_QWORD *)(v20 + 208);
              v32 = v35;
            }
            else
            {
              do
              {
                v22 = *(_QWORD *)(v20 + 208);
                do
                {
                  v23 = *(_QWORD *)(v20 + 200);
                  v24 = HalpTimerGetInternalData(v20);
                  v25 = (*(__int64 (__fastcall **)(__int64))(v20 + 112))(v24);
                  _InterlockedOr(v73, 0);
                  v26 = *(_QWORD *)(v20 + 200);
                }
                while ( v23 != v26 );
              }
              while ( v22 != *(_QWORD *)(v20 + 208) );
              v27 = *(_DWORD *)(v20 + 220);
              v28 = v23 ^ v25;
              if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
              {
                if ( v27 == 64 )
                  v29 = -1LL;
                else
                  v29 = (1LL << v27) - 1;
                v30 = 0LL;
                if ( v27 != 64 )
                  v30 = 1LL << v27;
                v31 = v23 & v29;
                v32 = v25 | v23 ^ v31;
                if ( v25 < v31 )
                  v32 += v30;
                _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 200), v32, v26);
                v9 = a2;
              }
              else if ( v27 == 64 )
              {
                v9 = a2;
                v32 = v25;
              }
              else
              {
                v33 = v23 & ~((1LL << v27) - 1);
                v9 = a2;
                v32 = v25 | v33;
              }
            }
            SystemTimePrecise = HalpTimerScaleCounter(v22 + v32, *(_QWORD *)(v20 + 192), 10000000LL);
            goto LABEL_57;
          }
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v37 = *(_QWORD *)(HalpPerformanceCounter + 72)
                + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
          else
            v37 = *(_QWORD *)(HalpPerformanceCounter + 72);
          v38 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v37);
          v36 = 10000000LL;
          SystemTimePrecise = MEMORY[0xFFFFF780000003B8]
                            + (((unsigned __int64)v38
                              * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        }
        else
        {
          v21 = *(_QWORD *)(HalpPerformanceCounter + 192);
          if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
          {
            v51 = HalpTimerGetInternalData(HalpPerformanceCounter);
            v52 = (*(__int64 (__fastcall **)(__int64))(v20 + 112))(v51);
            v39 = *(_QWORD *)(v20 + 208);
            v49 = v52;
          }
          else
          {
            do
            {
              v39 = *(_QWORD *)(v20 + 208);
              do
              {
                v40 = *(_QWORD *)(v20 + 200);
                v41 = HalpTimerGetInternalData(v20);
                v42 = (*(__int64 (__fastcall **)(__int64))(v20 + 112))(v41);
                _InterlockedOr(v73, 0);
                v43 = *(_QWORD *)(v20 + 200);
              }
              while ( v40 != v43 );
            }
            while ( v39 != *(_QWORD *)(v20 + 208) );
            v44 = *(_DWORD *)(v20 + 220);
            v45 = v40 ^ v42;
            if ( _bittest64((const __int64 *)&v45, (unsigned __int8)(v44 - 1)) )
            {
              if ( v44 == 64 )
                v46 = -1LL;
              else
                v46 = (1LL << v44) - 1;
              v47 = 0LL;
              if ( v44 != 64 )
                v47 = 1LL << v44;
              v48 = v40 & v46;
              v49 = v42 | v40 ^ v48;
              if ( v42 < v48 )
                v49 += v47;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 200), v49, v43);
              v9 = a2;
            }
            else if ( v44 == 64 )
            {
              v9 = a2;
              v49 = v42;
            }
            else
            {
              v50 = v40 & ~((1LL << v44) - 1);
              v9 = a2;
              v49 = v42 | v50;
            }
          }
          SystemTimePrecise = v39 + v49;
          v36 = 10000000LL;
LABEL_57:
          v5 = v82;
        }
        if ( v20 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
        {
          v53 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
          if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
            v53 = v36;
          SystemTimePrecise = HalpTimerScaleCounter(SystemTimePrecise, v21, v53);
        }
        v3 = v75;
LABEL_65:
        v54 = *(unsigned int *)(v12 + 200);
        v76 = SystemTimePrecise;
        EtwpCCSwapTrace(v9, a3, v54, &v76);
        v5 |= v14;
        v82 = v5;
      }
LABEL_93:
      LOBYTE(v4) = 48;
      v67 = (_DWORD *)(v12 + 816);
      if ( a3 )
      {
        LODWORD(v4) = *v67;
        if ( (*v67 & 0x80u) != 0 )
        {
          v4 = v15[125];
          if ( (*(_BYTE *)(v4 + 164) & 0x10) != 0 )
            LOBYTE(v4) = EtwpStackTraceDispatcher(v15, &v76, a3, 4217348LL);
        }
        if ( (*v67 & 0x8000) != 0 )
        {
          v4 = v15[128];
          v68 = 0LL;
          if ( *(_DWORD *)(v4 + 8) )
          {
            while ( 1 )
            {
              v69 = v15[128];
              if ( *(_WORD *)(v69 + 2 * v68 + 12) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v69 + 8);
              v68 = (unsigned int)(v68 + 1);
              if ( (unsigned int)v68 >= (unsigned int)v4 )
                goto LABEL_103;
            }
            LOBYTE(v4) = EtwpTraceLastBranchRecord(v15, &v76, a3, 4217348LL);
          }
        }
LABEL_103:
        if ( (*v67 & 0x4000000) != 0 )
        {
          v4 = v15[129];
          v70 = 0LL;
          if ( *(_DWORD *)(v4 + 24) )
          {
            while ( 1 )
            {
              v71 = v15[129];
              if ( *(_WORD *)(v71 + 2 * v70 + 28) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v71 + 24);
              v70 = (unsigned int)(v70 + 1);
              if ( (unsigned int)v70 >= (unsigned int)v4 )
                goto LABEL_107;
            }
            LOBYTE(v4) = EtwpTraceProcessorTrace(v15, &v76, a3, 4217348LL);
          }
        }
      }
LABEL_107:
      v9 = a2;
      goto LABEL_108;
    }
    v55 = *(_DWORD *)(v12 + 816);
    v15 = (_QWORD *)v12;
    if ( (v55 & 0xC00) == 0 )
      goto LABEL_74;
    if ( (v55 & 0x400) != 0 )
    {
      v56 = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)&v78, (__int64)&v76, 4217348);
      goto LABEL_76;
    }
    if ( (v55 & 0x800) != 0 && (v60 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 8LL)) )
    {
      while ( 1 )
      {
        v61 = *(_QWORD *)(v12 + 1016);
        if ( *(_WORD *)(v61 + 2 * v60 + 12) == 1316 )
          break;
        v60 = (unsigned int)(v60 + 1);
        if ( (unsigned int)v60 >= *(_DWORD *)(v61 + 8) )
          goto LABEL_74;
      }
      v56 = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)&v78, (__int64)&v76, 4217348);
    }
    else
    {
LABEL_74:
      v62 = EtwpReserveTraceBuffer(v12, 0x28u, (__int64)&v78, &v76, 23044);
      if ( !v62 )
        goto LABEL_112;
      v57 = v76;
      v56 = v62 + 16;
      *(_QWORD *)(v62 + 8) = v76;
      *(_DWORD *)v62 = -1072627708;
      *(_DWORD *)(v62 + 4) = 86245416;
    }
LABEL_76:
    if ( v56 )
    {
      *(_OWORD *)v56 = 0LL;
      *(_QWORD *)(v56 + 16) = 0LL;
      if ( v9 )
      {
        *(_DWORD *)(v56 + 4) = *(_DWORD *)(v9 + 1232);
        *(_BYTE *)(v56 + 9) = *(_BYTE *)(v9 + 195);
        *(_BYTE *)(v56 + 12) = *(_BYTE *)(v9 + 643);
        *(_BYTE *)(v56 + 13) ^= (*(_BYTE *)(v56 + 13) ^ *(_BYTE *)(v9 + 391)) & 1;
        *(_BYTE *)(v56 + 14) = *(_BYTE *)(v9 + 388);
        *(_BYTE *)(v56 + 15) = *(_BYTE *)(v9 + 588);
        *(_BYTE *)(v56 + 13) ^= (*(_BYTE *)(v56 + 13) ^ (2 * *(_BYTE *)(v9 + 512))) & 0xE;
        *(_DWORD *)(v56 + 20) = (*(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)v9 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v56 + 10) = IdleStates->ActualState;
        }
        else
        {
          v65 = *(_QWORD *)(v9 + 104);
          if ( v65 )
          {
            v66 = v65 + CurrentPrcb->ScbOffset;
            while ( 1 )
            {
              LODWORD(v65) = *(_DWORD *)(v66 + 116);
              if ( (unsigned int)v65 > 0xFF )
                break;
              if ( !(_BYTE)v65 )
              {
                v66 = *(_QWORD *)(v66 + 408);
                if ( v66 )
                  continue;
              }
              goto LABEL_89;
            }
            LOBYTE(v65) = -1;
          }
LABEL_89:
          *(_BYTE *)(v56 + 10) = v65;
        }
      }
      if ( a3 )
      {
        *(_DWORD *)v56 = *(_DWORD *)(a3 + 1232);
        *(_BYTE *)(v56 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v56 + 11) = *(_BYTE *)(a3 + 564);
        *(_BYTE *)(v56 + 13) ^= (*(_BYTE *)(v56 + 13) ^ (16 * *(_BYTE *)(a3 + 512))) & 0x70;
        *(_DWORD *)(v56 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)&v78);
      goto LABEL_93;
    }
LABEL_112:
    if ( (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                         v57,
                         v56,
                         v58,
                         v59) )
    {
      LOBYTE(v4) = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT);
      if ( (_BYTE)v4 )
        LOBYTE(v4) = EtwpTraceLostSystemEvent(1316LL, v12 + 136, 4217348LL, 3221225495LL);
    }
    else
    {
      LOBYTE(v4) = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT);
      if ( (_BYTE)v4 )
        LOBYTE(v4) = EtwpTraceLostSystemEventOld(1316LL, v12 + 136, 3221225495LL);
    }
LABEL_108:
    v10 = a1;
LABEL_109:
    v6 = !_BitScanForward((unsigned int *)&v7, v3);
    v74 = v7;
  }
  return v4;
}
