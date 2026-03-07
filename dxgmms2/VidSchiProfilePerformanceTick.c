void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // r9
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // r10d
  __int16 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 *v26; // r14
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // ecx
  unsigned __int64 v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // r12
  _BYTE *Pool2; // rcx
  __int64 v38; // r12
  unsigned int v39; // r8d
  unsigned int v40; // edx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // r8d
  __int64 v70; // r9
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // r9
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 *v78; // r14
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 *v84; // r14
  __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rcx
  __int64 *v98; // r14
  __int64 v99; // rax
  __int64 v100; // r10
  int v101; // eax
  __int64 v102; // r11
  __int64 v103; // rdx
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r9
  int v109; // r9d
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // r8
  __int64 v117; // rcx
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 *v122; // r14
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // r8
  __int64 v127; // rcx
  int v128; // [rsp+20h] [rbp-B9h]
  _BYTE *v130; // [rsp+98h] [rbp-41h]
  _BYTE v131[16]; // [rsp+A0h] [rbp-39h] BYREF
  int v132; // [rsp+B0h] [rbp-29h]
  PVOID P; // [rsp+B8h] [rbp-21h]
  _BYTE v134[16]; // [rsp+C0h] [rbp-19h] BYREF
  int v135; // [rsp+D0h] [rbp-9h]

  v8 = a7;
  v9 = a8;
  v10 = 0LL;
  v11 = a3;
  v13 = a1;
  if ( !bTracingEnabled )
    goto LABEL_16;
  if ( (_DWORD)a1 == 2 )
  {
    v15 = *(_QWORD *)(a2 + 504);
    if ( a5 )
    {
      v17 = *(_QWORD *)(a5 + 96);
      v18 = *(_QWORD *)(a5 + 56);
      v19 = *(_DWORD *)(v17 + 1768);
      v20 = *(_WORD *)(v17 + 4);
      if ( !v18 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LOBYTE(v18) = a5;
    }
    else
    {
      LOBYTE(v19) = 0;
      LOBYTE(v20) = 0;
      LOBYTE(v18) = 0;
    }
    if ( (byte_1C00769C1 & 2) != 0 )
    {
      v16 = ((unsigned __int64)*(unsigned int *)(a2 + 84) + 63) >> 6;
      McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(
        v16,
        v15,
        *(_QWORD *)(a2 + 456),
        *(_QWORD *)(a2 + 16),
        v18,
        v20,
        v19,
        v16,
        *(_QWORD *)(a2 + 456),
        v15);
    }
    goto LABEL_15;
  }
  if ( (_DWORD)a1 == 9 )
  {
LABEL_30:
    if ( a7 )
    {
      v72 = *(_QWORD *)(a7 + 48);
      v73 = *(_QWORD *)(v72 + 56);
      if ( !v73 || (LODWORD(a1) = *(_DWORD *)(v72 + 112), (a1 & 0x40) != 0) )
        v73 = *(_QWORD *)(a7 + 48);
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqxqt_EtwWriteTransfer(
          a1,
          v72,
          v13 == 11,
          v73,
          *(_DWORD *)(a7 + 88),
          *(_QWORD *)(a7 + 104),
          *(_DWORD *)(a7 + 96),
          v13 == 11);
      goto LABEL_15;
    }
    if ( !a6 )
      goto LABEL_16;
    v27 = *(_DWORD *)(a6 + 48);
    if ( (_DWORD)a1 == 9 )
    {
      if ( v27 == 4 )
      {
        v28 = *(_QWORD *)(a6 + 88);
        v29 = (*(_DWORD *)(a6 + 272) >> 1) & 1;
        if ( v28 )
        {
          v30 = *(_QWORD *)(v28 + 56);
          if ( !v30 || (*(_DWORD *)(v28 + 112) & 0x40) != 0 )
            v30 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v30 )
            v30 = *(_QWORD *)(a6 + 96);
        }
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0pqqttp_EtwWriteTransfer(v29, v28, *(_DWORD *)(a6 + 112), v30, 4, *(_DWORD *)(a6 + 112), v29);
        goto LABEL_84;
      }
    }
    else if ( (_DWORD)a1 == 11 )
    {
      v29 = 1LL;
      goto LABEL_79;
    }
    v29 = 0LL;
LABEL_79:
    v51 = *(_QWORD *)(a6 + 88);
    if ( v51 )
    {
      v52 = *(_QWORD *)(v51 + 56);
      if ( !v52 || (*(_DWORD *)(v51 + 112) & 0x40) != 0 )
        v52 = *(_QWORD *)(a6 + 88);
    }
    else
    {
      v52 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
      if ( !v52 )
        v52 = *(_QWORD *)(a6 + 96);
    }
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqqttp_EtwWriteTransfer(v29, v51, v27, v52, v27, *(_DWORD *)(a6 + 112), v29);
LABEL_84:
    v53 = *(_DWORD *)(a6 + 48);
    if ( v53 )
    {
      if ( ((v53 - 3) & 0xFFFFFFFB) != 0 )
      {
LABEL_86:
        v9 = a8;
        goto LABEL_15;
      }
    }
    else if ( (*(_DWORD *)(a6 + 72) & 0x4000) == 0 )
    {
      goto LABEL_86;
    }
    if ( (byte_1C00769C3 & 0x20) != 0 )
    {
      McTemplateK0q_EtwWriteTransfer(v29, &EventPresentQueueComplete);
      v9 = a8;
      goto LABEL_15;
    }
    goto LABEL_86;
  }
  if ( (_DWORD)a1 != 20 )
  {
    if ( (_DWORD)a1 == 5 )
    {
      v31 = *(_QWORD *)(a6 + 88);
      v32 = *(_QWORD *)(v31 + 56);
      if ( !v32 || (*(_DWORD *)(v31 + 112) & 0x40) != 0 )
        v32 = *(_QWORD *)(a6 + 88);
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v31,
          (unsigned int)&EventQueueSelect,
          *(_DWORD *)(a6 + 48),
          v32,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112));
      goto LABEL_15;
    }
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (int)a1 )
      {
        case 1:
          v62 = *(_QWORD *)(a5 + 56);
          if ( !v62 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            v62 = a5;
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventAttemptPreemption, a3, v62, a8);
          goto LABEL_15;
        case 7:
          v57 = 0LL;
          if ( *(_DWORD *)(a7 + 88) == 1 )
          {
            v99 = *(_QWORD *)(a7 + 56);
            if ( v99 )
            {
              if ( *(_DWORD *)(v99 + 48) == 8 )
                v57 = *(_QWORD *)(v99 + 88);
            }
          }
          v58 = *(_QWORD *)(a7 + 48);
          if ( *(_DWORD *)(v58 + 984) >= 0x80u )
            VidSchiFlushGpuWorkEntries(*(struct _VIDSCH_CONTEXT **)(a7 + 48));
          if ( *(_QWORD *)(v58 + 992)
            || (v93 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v58 + 992) = v93) != 0LL) )
          {
            *(LARGE_INTEGER *)(*(_QWORD *)(v58 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v58 + 984))++) = KeQueryPerformanceCounter(0LL);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to allocate GpuWorkRecords for long haul logging",
              458LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v8 = a7;
          v59 = *(_QWORD *)(a7 + 48);
          if ( v57 )
          {
            v60 = *(_QWORD *)(v57 + 56);
            if ( !v60 || (*(_DWORD *)(v57 + 112) & 0x40) != 0 )
              LODWORD(v60) = v57;
          }
          else
          {
            LODWORD(v60) = 0;
          }
          v61 = *(_QWORD *)(v59 + 56);
          if ( !v61 || (*(_DWORD *)(v59 + 112) & 0x40) != 0 )
            LODWORD(v61) = *(_QWORD *)(a7 + 48);
          if ( (byte_1C00769C1 & 1) != 0 )
            McTemplateK0ppqxqpq_EtwWriteTransfer(
              *(_QWORD *)(a7 + 64),
              v59,
              v60,
              v61,
              v60,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              *(_QWORD *)(a7 + 64),
              *(_DWORD *)(v59 + 436));
          goto LABEL_111;
        case 8:
        case 10:
        case 12:
          LODWORD(v68) = 0;
          v69 = 0;
          LOBYTE(v70) = 0;
          v71 = 0;
          switch ( v13 )
          {
            case 8:
              v71 = 1;
              break;
            case 10:
              v71 = 2;
              break;
            case 12:
              v68 = *(_QWORD *)(a8 + 40);
              v71 = 9;
              v69 = *(_DWORD *)(a8 + 32);
              v70 = *(_QWORD *)(a8 + 64);
              break;
          }
          if ( (byte_1C00769C1 & 1) != 0 )
          {
            v100 = *(_QWORD *)(a7 + 48);
            v101 = *(_DWORD *)(a7 + 96);
            v102 = *(_QWORD *)(v100 + 56);
            if ( !v102 || (*(_DWORD *)(v100 + 112) & 0x40) != 0 )
              LODWORD(v102) = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqqqxqp_EtwWriteTransfer(
              v71,
              v68,
              v69,
              v102,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              v101,
              v71,
              *(_DWORD *)(v100 + 436),
              v68,
              v69,
              v70);
            v9 = a8;
          }
          goto LABEL_15;
        case 11:
        case 13:
          goto LABEL_30;
        case 14:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          v128 = 1;
          goto LABEL_188;
        case 15:
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
          goto LABEL_15;
        case 16:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          v128 = 3;
          goto LABEL_188;
        case 17:
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
          goto LABEL_15;
        case 18:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_9;
          a1 = 2LL;
          v128 = 2;
LABEL_188:
          McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterWorkerThread, a3, v14, v128);
          goto LABEL_15;
        case 19:
          if ( (byte_1C00769C1 & 1) == 0 )
          {
LABEL_9:
            v11 = a3;
            goto LABEL_16;
          }
          McTemplateK0pq_EtwWriteTransfer(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_15;
    }
    v33 = *(_DWORD *)(a6 + 48);
    if ( v33 == 5 )
    {
      v34 = *(unsigned int *)(a6 + 276);
      v130 = 0LL;
      v132 = 0;
      if ( (unsigned int)v34 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v34 < 8 )
        {
          v35 = 0LL;
LABEL_50:
          v36 = *(unsigned int *)(a6 + 276);
          Pool2 = 0LL;
          P = 0LL;
          v135 = 0;
          if ( (unsigned int)v36 > 2 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v36 < 8 )
            {
              v38 = 0LL;
LABEL_54:
              if ( v35 && v38 )
              {
                v39 = *(_DWORD *)(a6 + 276);
                v40 = 0;
                if ( v39 )
                {
                  do
                  {
                    *(_QWORD *)(8LL * v40 + v35) = *(_QWORD *)(a6 + 8LL * v40 + 280);
                    v41 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v40 + 280) + 48LL);
                    if ( v41 == 4 || v41 == 2 || (v42 = 0LL, v41 == 5) )
                      v42 = *(_QWORD *)(a6 + 8LL * v40 + 536);
                    *(_QWORD *)(8LL * v40++ + v38) = v42;
                    v39 = *(_DWORD *)(a6 + 276);
                  }
                  while ( v40 < v39 );
                  Pool2 = P;
                }
                if ( (byte_1C00769C3 & 0x20) != 0 )
                {
                  v109 = *(_DWORD *)(a6 + 272);
                  if ( (v109 & 0x10) != 0 )
                  {
                    v110 = *(_QWORD *)(a6 + 88);
                    if ( v110 )
                    {
                      v111 = *(_QWORD *)(v110 + 56);
                      if ( !v111 || (*(_DWORD *)(v110 + 112) & 0x40) != 0 )
                        v111 = *(_QWORD *)(a6 + 88);
                    }
                    else
                    {
                      v111 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                      if ( !v111 )
                        v111 = *(_QWORD *)(a6 + 96);
                    }
                    McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
                      v111,
                      v110,
                      v39,
                      0,
                      v111,
                      *(_DWORD *)(a6 + 112),
                      v109,
                      v39,
                      v35,
                      v38,
                      a6);
                    Pool2 = P;
                  }
                }
                v43 = *(_QWORD *)(a6 + 88);
                if ( v43 )
                {
                  v44 = *(_QWORD *)(v43 + 56);
                  if ( !v44 || (*(_DWORD *)(v43 + 112) & 0x40) != 0 )
                    v44 = *(_QWORD *)(a6 + 88);
                }
                else
                {
                  v44 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                  if ( !v44 )
                    v44 = *(_QWORD *)(a6 + 96);
                }
                if ( (byte_1C00769C1 & 1) != 0 )
                {
                  McTemplateK0pqqqPR3XR3p_EtwWriteTransfer(
                    (_DWORD)Pool2,
                    v43,
                    *(_DWORD *)(a6 + 276),
                    v44,
                    *(_DWORD *)(a6 + 112),
                    *(_DWORD *)(a6 + 272),
                    *(_DWORD *)(a6 + 276),
                    v35,
                    v38,
                    a6);
                  Pool2 = P;
                }
              }
              if ( Pool2 != v134 && Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              P = 0LL;
              v135 = 0;
              if ( v130 != v131 && v130 )
                ExFreePoolWithTag(v130, 0);
              v8 = a7;
              v9 = a8;
              goto LABEL_15;
            }
            Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v36, 945908054LL);
            P = Pool2;
          }
          else
          {
            Pool2 = v134;
            P = v134;
            if ( (_DWORD)v36 )
            {
              memset(v134, 0, 8LL * (unsigned int)v36);
              Pool2 = P;
            }
          }
          v135 = v36;
          v38 = (__int64)Pool2;
          goto LABEL_54;
        }
        v130 = (_BYTE *)ExAllocatePool2(64LL, 8 * v34, 945908054LL);
      }
      else
      {
        v130 = v131;
        if ( (_DWORD)v34 )
          memset(v131, 0, 8LL * (unsigned int)v34);
      }
      v35 = (__int64)v130;
      v132 = v34;
      goto LABEL_50;
    }
    if ( v33 )
    {
      switch ( v33 )
      {
        case 3:
          goto LABEL_146;
        case 4:
          v91 = *(_QWORD *)(a6 + 88);
          if ( v91 )
          {
            v92 = *(_QWORD *)(v91 + 56);
            if ( !v92 || (*(_DWORD *)(v91 + 112) & 0x40) != 0 )
              v92 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v92 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v92 )
              v92 = *(_QWORD *)(a6 + 96);
          }
          if ( (byte_1C00769C1 & 1) != 0 )
            McTemplateK0pqqpxp_EtwWriteTransfer(
              v91,
              *(_QWORD *)(a6 + 304),
              *(_QWORD *)(a6 + 280),
              v92,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 272),
              *(_QWORD *)(a6 + 280),
              *(_QWORD *)(a6 + 304),
              a6);
          goto LABEL_15;
        case 7:
LABEL_146:
          if ( (byte_1C00769C3 & 0x20) != 0 )
          {
            v103 = *(_QWORD *)(a6 + 88);
            if ( v103 )
            {
              v104 = *(_QWORD *)(v103 + 56);
              if ( !v104 || (*(_DWORD *)(v103 + 112) & 0x40) != 0 )
                v104 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v104 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v104 )
                v104 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqq_EtwWriteTransfer(
              v33,
              (unsigned int)&EventPresentQueueSubmit,
              *(_DWORD *)(a6 + 112),
              v104,
              v33,
              *(_DWORD *)(a6 + 112));
          }
          break;
      }
      v85 = *(_QWORD *)(a6 + 88);
      if ( v85 )
      {
        v86 = *(_QWORD *)(v85 + 56);
        if ( !v86 || (*(_DWORD *)(v85 + 112) & 0x40) != 0 )
          v86 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v86 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v86 )
          v86 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          v85,
          *(_QWORD *)(a6 + 768),
          v86,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112),
          0,
          0,
          0,
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 280),
          a6,
          *(_QWORD *)(a6 + 768));
        v9 = a8;
        goto LABEL_15;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a6 + 72) & 0x4000) != 0 && (byte_1C00769C3 & 0x20) != 0 )
      {
        v105 = *(_QWORD *)(a6 + 88);
        if ( v105 )
        {
          v106 = *(_QWORD *)(v105 + 56);
          if ( !v106 || (*(_DWORD *)(v105 + 112) & 0x40) != 0 )
            v106 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v106 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v106 )
            v106 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqq_EtwWriteTransfer(
          0,
          (unsigned int)&EventPresentQueueSubmit,
          *(_DWORD *)(a6 + 112),
          v106,
          0,
          *(_DWORD *)(a6 + 112));
      }
      v54 = *(_QWORD *)(a6 + 88);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 56);
        if ( !v55 || (*(_DWORD *)(v54 + 112) & 0x40) != 0 )
          LODWORD(v55) = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v55 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v55 )
          v55 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          v54,
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          *(_QWORD *)(a6 + 768),
          v55,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112),
          *(_DWORD *)(a6 + 324),
          *(_DWORD *)(a6 + 332),
          *(_DWORD *)(a6 + 340),
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 280),
          a6,
          *(_QWORD *)(a6 + 768));
      v56 = *(_DWORD *)(a6 + 472);
      if ( v56 && (byte_1C00769C1 & 0x10) != 0 )
      {
        v107 = *(_QWORD *)(a6 + 88);
        if ( v107 )
        {
          v108 = *(_QWORD *)(v107 + 56);
          if ( !v108 || (*(_DWORD *)(v107 + 112) & 0x40) != 0 )
            v108 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v108 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v108 )
            v108 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqqPR2p_EtwWriteTransfer(v56, v107, a6 + 480, v108, *(_DWORD *)(a6 + 112), v56, a6 + 480, a6);
        v9 = a8;
        goto LABEL_15;
      }
    }
LABEL_111:
    v9 = a8;
LABEL_15:
    v11 = a3;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(a2 + 2536) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
  {
    v112 = *(_QWORD *)(a5 + 440);
    if ( v112 <= 0 && (byte_1C00769C1 & 1) != 0 )
    {
      v113 = *(_QWORD *)(a5 + 56);
      if ( !v113 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v113) = a5;
      McTemplateK0qtpiixi_EtwWriteTransfer(
        v113,
        v112,
        *(_QWORD *)(a5 + 448),
        *(unsigned __int16 *)(a3 + 4),
        a8 != 0,
        v113,
        *(_QWORD *)(a5 + 472),
        v112,
        *(_QWORD *)(a5 + 464),
        *(_QWORD *)(a5 + 448));
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( *(int *)(a2 + 6472) >= 1 )
  {
    if ( v13 == 1 )
    {
      if ( v9 < 0 )
      {
        v9 = -v9;
      }
      else if ( v9 >= 16 )
      {
        v9 = 1;
      }
      ++*(_DWORD *)(v11 + 2660);
      ++*(_DWORD *)(v11 + 4LL * v9 + 2660);
      v63 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v63 + 12) & 0x40) != 0 )
      {
        v67 = 0LL;
      }
      else
      {
        v64 = *(unsigned __int16 *)(v63 + 4);
        v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v63 + 24) + 4LL));
        v66 = *(__int64 **)(v65 + 8);
        if ( (unsigned int)v64 < *(_DWORD *)(v65 + 80) )
          v66 += v64;
        v67 = *v66;
        v11 = a3;
      }
      ++*(_DWORD *)(v67 + 12);
      ++*(_DWORD *)(v67 + 4LL * v9 + 12);
    }
    else if ( v13 == 3 )
    {
      ++*(_DWORD *)(v11 + 2656);
      v87 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v87 + 12) & 0x40) == 0 )
      {
        v88 = *(unsigned __int16 *)(v87 + 4);
        v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v87 + 24) + 4LL));
        v90 = *(_QWORD *)(v89 + 8);
        if ( (unsigned int)v88 < *(_DWORD *)(v89 + 80) )
          v90 += 8 * v88;
        if ( *(_QWORD *)v90 )
          ++*(_DWORD *)(*(_QWORD *)v90 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6472) >= 2 )
  {
    switch ( v13 )
    {
      case 4:
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2724);
        v45 = *(_QWORD *)(a6 + 96);
        if ( v45 )
        {
          v114 = *(_QWORD *)(v45 + 40);
          v115 = *(_QWORD *)(v114 + 16);
          v116 = *(unsigned __int16 *)(v115 + 4);
          v117 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v114 + 8) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v115 + 24) + 4LL));
          if ( !v117 )
          {
LABEL_75:
            if ( v10 )
              ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 76);
            return;
          }
          v50 = *(__int64 **)(v117 + 8);
          if ( (unsigned int)v116 < *(_DWORD *)(v117 + 80) )
            v50 += v116;
        }
        else
        {
          v46 = *(_QWORD *)(a6 + 88);
          v47 = *(_QWORD *)(v46 + 96);
          if ( (*(_DWORD *)(v47 + 12) & 0x40) != 0 )
            goto LABEL_75;
          v48 = *(unsigned __int16 *)(v47 + 4);
          v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v47 + 24) + 4LL));
          v50 = *(__int64 **)(v49 + 8);
          if ( (unsigned int)v48 < *(_DWORD *)(v49 + 80) )
            v50 += v48;
        }
        v10 = *v50;
        goto LABEL_75;
      case 7:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2796);
        v74 = *(_QWORD *)(v8 + 48);
        v75 = *(_QWORD *)(v74 + 96);
        if ( (*(_DWORD *)(v75 + 12) & 0x40) == 0 )
        {
          v76 = *(unsigned __int16 *)(v75 + 4);
          v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v75 + 24) + 4LL));
          v78 = *(__int64 **)(v77 + 8);
          if ( (unsigned int)v76 < *(_DWORD *)(v77 + 80) )
            v78 += v76;
          v10 = *v78;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 148);
        return;
      case 8:
        v79 = 2 * (*(int *)(v8 + 88) + 175LL);
        ++*(_DWORD *)(v11 + 8 * v79);
        v80 = *(_QWORD *)(v8 + 48);
        v81 = *(_QWORD *)(v80 + 96);
        if ( (*(_DWORD *)(v81 + 12) & 0x40) == 0 )
        {
          v82 = *(unsigned __int16 *)(v81 + 4);
          v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v81 + 24) + 4LL));
          v84 = *(__int64 **)(v83 + 8);
          if ( (unsigned int)v82 < *(_DWORD *)(v83 + 80) )
            v84 += v82;
          v10 = *v84;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 152);
        return;
      case 9:
      case 11:
      case 13:
        if ( !a6 )
          return;
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2728);
        v21 = *(_QWORD *)(a6 + 96);
        if ( v21 )
        {
          v124 = *(_QWORD *)(v21 + 40);
          v125 = *(_QWORD *)(v124 + 16);
          v126 = *(unsigned __int16 *)(v125 + 4);
          v127 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 8) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v125 + 24) + 4LL));
          if ( !v127 )
          {
LABEL_28:
            if ( v10 )
              ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 80);
            return;
          }
          v26 = *(__int64 **)(v127 + 8);
          if ( (unsigned int)v126 < *(_DWORD *)(v127 + 80) )
            v26 += v126;
        }
        else
        {
          v22 = *(_QWORD *)(a6 + 88);
          v23 = *(_QWORD *)(v22 + 96);
          if ( (*(_DWORD *)(v23 + 12) & 0x40) != 0 )
            goto LABEL_28;
          v24 = *(unsigned __int16 *)(v23 + 4);
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v23 + 24) + 4LL));
          v26 = *(__int64 **)(v25 + 8);
          if ( (unsigned int)v24 < *(_DWORD *)(v25 + 80) )
            v26 += v24;
        }
        v10 = *v26;
        goto LABEL_28;
      case 10:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2804);
        v94 = *(_QWORD *)(v8 + 48);
        v95 = *(_QWORD *)(v94 + 96);
        if ( (*(_DWORD *)(v95 + 12) & 0x40) == 0 )
        {
          v96 = *(unsigned __int16 *)(v95 + 4);
          v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v95 + 24) + 4LL));
          v98 = *(__int64 **)(v97 + 8);
          if ( (unsigned int)v96 < *(_DWORD *)(v97 + 80) )
            v98 += v96;
          v10 = *v98;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 156);
        return;
      case 12:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2808);
        v118 = *(_QWORD *)(v8 + 48);
        v119 = *(_QWORD *)(v118 + 96);
        if ( (*(_DWORD *)(v119 + 12) & 0x40) == 0 )
        {
          v120 = *(unsigned __int16 *)(v119 + 4);
          v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 + 104) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v119 + 24) + 4LL));
          v122 = *(__int64 **)(v121 + 8);
          if ( (unsigned int)v120 < *(_DWORD *)(v121 + 80) )
            v122 += v120;
          v10 = *v122;
        }
        v123 = 2 * (*(int *)(v8 + 88) + 10LL);
        ++*(_DWORD *)(v10 + 8 * v123);
        return;
      default:
        return;
    }
  }
}
