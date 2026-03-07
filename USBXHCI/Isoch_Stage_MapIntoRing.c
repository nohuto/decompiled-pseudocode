__int64 __fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  __int64 v1; // r11
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // r14
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 v9; // cf
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // r10
  unsigned int v16; // r12d
  unsigned int v17; // eax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rtt
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // ebx
  __int64 v29; // rax
  unsigned int v30; // r15d
  _OWORD *v31; // rsi
  _OWORD *v32; // rax
  char v33; // r11
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int16 v36; // r8
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r11d
  __int16 v40; // r10
  unsigned int v41; // r9d
  unsigned int v42; // ecx
  unsigned int v43; // r8d
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // ecx
  unsigned int v48; // r10d
  unsigned int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned int v53; // r9d
  unsigned int v54; // r9d
  unsigned int v55; // ecx
  unsigned int v56; // r10d
  unsigned int v57; // ecx
  __int64 v58; // rax
  int v59; // r8d
  char v60; // cl
  int v61; // eax
  unsigned int v62; // r15d
  unsigned int v63; // ecx
  _BYTE *v64; // rsi
  __int64 v65; // r14
  int v66; // r9d
  __int64 v67; // rdx
  _DWORD *v68; // r10
  unsigned int v69; // edx
  __int64 v70; // rbx
  unsigned int v71; // eax
  KSPIN_LOCK *v72; // r14
  KIRQL v73; // al
  __int64 v74; // r10
  unsigned int v75; // eax
  __int64 v76; // r9
  __int64 v77; // r9
  int v78; // r8d
  _DWORD *v79; // rdx
  int v80; // edx
  int v81; // eax
  int v82; // r9d
  int v83; // r8d
  __int64 result; // rax
  __int64 v85; // rsi
  int v86; // ecx
  int v87; // ebx
  unsigned int v88; // edx
  unsigned int *v89; // r8
  unsigned int v90; // edx
  __int64 v91; // rcx
  __int64 v92; // r9
  unsigned int v93; // r10d
  unsigned int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r8
  int v98; // r12d
  __int64 *v99; // rsi
  _QWORD *v100; // rax
  __int64 v101; // rcx
  int v102; // r9d
  bool v103; // zf
  unsigned int v104; // r9d
  int v105; // r8d
  __int64 v106; // rcx
  int v107; // r8d
  __int64 v108; // rax
  __int64 **v109; // rdx
  __int64 *v110; // rax
  __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rcx
  unsigned int v114; // r9d
  unsigned int v115; // eax
  __int64 v116; // r8
  __int64 v117; // rsi
  KIRQL v118; // dl
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // eax
  __int64 v124; // r10
  unsigned int v125; // ecx
  __int64 v126; // rax
  KIRQL v127; // al
  signed __int32 v128[10]; // [rsp+0h] [rbp-D9h] BYREF
  unsigned int v129; // [rsp+60h] [rbp-79h]
  unsigned int v130; // [rsp+64h] [rbp-75h]
  unsigned int v131; // [rsp+68h] [rbp-71h]
  __int64 v132; // [rsp+70h] [rbp-69h]
  __int128 v133; // [rsp+78h] [rbp-61h]
  unsigned int v134; // [rsp+88h] [rbp-51h]
  unsigned int v135; // [rsp+8Ch] [rbp-4Dh]
  int v136; // [rsp+90h] [rbp-49h]
  unsigned int *v137; // [rsp+98h] [rbp-41h]
  unsigned int v138; // [rsp+A0h] [rbp-39h]
  unsigned int v139; // [rsp+A4h] [rbp-35h]
  unsigned int v140; // [rsp+A8h] [rbp-31h]
  __int64 v141; // [rsp+B0h] [rbp-29h]
  __int64 v142; // [rsp+B8h] [rbp-21h]
  int v143; // [rsp+C0h] [rbp-19h]
  _DWORD *v144; // [rsp+C8h] [rbp-11h]
  __int128 v145; // [rsp+D0h] [rbp-9h]
  char v147; // [rsp+148h] [rbp+6Fh]
  char v148; // [rsp+150h] [rbp+77h]
  char v149; // [rsp+158h] [rbp+7Fh]

  v1 = *a1;
  v147 = 0;
  v138 = 0;
  v3 = 512;
  v134 = 0;
  v4 = *(_QWORD *)(v1 + 56);
  v5 = *((unsigned int *)a1 + 10);
  v6 = (_DWORD *)(*(_QWORD *)(v1 + 48) + 128LL);
  v130 = 0;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(unsigned int *)(v4 + 192);
  v136 = 0;
  v139 = 0;
  v9 = _bittest64((const signed __int64 *)(v7 + 336), 0x21u);
  v140 = 0;
  v10 = a1[9];
  if ( v9 )
    v3 = 0;
  v137 = (unsigned int *)a1[9];
  v143 = v3;
  v141 = v1;
  v11 = *(_QWORD *)(v10 + 16);
  v129 = *(_DWORD *)(v10 + 24);
  *((_DWORD *)a1 + 22) = v8;
  v12 = *(_QWORD *)(v4 + 56);
  v13 = *(_QWORD *)(v1 + 48) + 140LL;
  v144 = v6;
  v131 = v5;
  v135 = *(_DWORD *)(v12 + 152);
  LODWORD(v12) = *(_DWORD *)(v1 + 96) - 1;
  v132 = v11;
  v142 = v8;
  if ( (_DWORD)v5 == (_DWORD)v12 )
    v14 = *(_DWORD *)(v1 + 80);
  else
    v14 = *(_DWORD *)(v13 + 12LL * (unsigned int)(v5 + 1));
  v15 = *(_QWORD *)(v4 + 40);
  v16 = v14 - *(_DWORD *)(v13 + 12 * v5);
  if ( !_bittest64((const signed __int64 *)(v15 + 336), 0x29u) )
    goto LABEL_17;
  v17 = (_DWORD)v5 ? v5 : 0;
  v18 = v17 / *(_DWORD *)(v4 + 356) + *v6;
  v136 = v18;
  v19 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v15 + 444) / 10000LL;
  v20 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v15 + 88) + 40LL) + 2) >> 3) & 0x7FF;
  _m_prefetchw((const void *)(v15 + 432));
  v21 = *(_QWORD *)(v15 + 432);
  do
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 432), v21, v21);
  }
  while ( v22 != v21 );
  v23 = v20 | (v19 + ((_DWORD)v21 << 11) - (v21 >> 21)) & 0xFFFFF800;
  v24 = ((_WORD)v19 + ((_WORD)v21 << 11) - (unsigned __int16)(v21 >> 21)) & 0x7FF;
  if ( v24 < (unsigned int)v20 )
  {
    v20 = (unsigned int)v20 - v24;
    v115 = v23 - 2048;
    if ( (unsigned int)v20 <= 0x400 )
      v115 = v23;
    v23 = v115;
  }
  else if ( v24 - (unsigned int)v20 > 0x400 )
  {
    v23 += 2048;
  }
  v25 = _InterlockedExchange64(
          (volatile __int64 *)(v15 + 432),
          ((unsigned __int64)v23 >> 11) | ((v19 - (v23 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v25) = 5;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(v15 + 72),
      v25,
      4,
      177,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v23);
    v11 = v132;
    v1 = v141;
  }
  if ( (int)(v23 - v18) < 0 )
  {
LABEL_17:
    v26 = *(unsigned int *)(v4 + 192);
    v27 = 0LL;
    v28 = 4;
    if ( (unsigned int)v26 >= *(_DWORD *)(v4 + 196) )
    {
      LOBYTE(v11) = 1;
      v27 = *(_QWORD *)(v4 + 184) + 16 * v26;
      Isoch_InsertLinkTrb(v4, a1, 4LL, v11);
      v11 = v132;
      v142 = 0LL;
    }
    v29 = *(_QWORD *)(v4 + 40);
    v149 = *(_BYTE *)(v29 + 603);
    v148 = *(_BYTE *)(v29 + 602);
    while ( 1 )
    {
      v30 = *(_DWORD *)(v4 + 192);
      v31 = (_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * v30);
      v32 = v31;
      v133 = 0LL;
      if ( v27 )
        v32 = (_OWORD *)v27;
      v33 = 0;
      v27 = (__int64)v32;
      if ( v28 == 4 )
        break;
      switch ( v28 )
      {
        case 6:
          goto LABEL_79;
        case 5:
          v46 = DWORD2(v133);
          v52 = 1024;
          goto LABEL_44;
        case 7:
LABEL_79:
          *(_QWORD *)&v133 = 1LL;
          v59 = HIDWORD(v133) & 0xFFFF03DF | 0x1C20;
          WORD1(v133) = v5;
          v65 = (unsigned int)(v5 + 1);
          HIDWORD(v133) = v59;
          DWORD1(v133) = *v144;
          v131 = v65;
          if ( v28 == 7 || (v66 = *(_DWORD *)(v141 + 96), (_DWORD)v65 == v66) )
          {
            v54 = DWORD2(v133);
            v28 = 9;
          }
          else
          {
            if ( (v65 & 0x7F) != 0 )
            {
              v59 = v143 | v59 & 0xFFFFFDFF;
              HIDWORD(v133) = v59;
            }
            v67 = *(_QWORD *)(v141 + 48) + 140LL;
            v130 = 0;
            v68 = (_DWORD *)(v67 + 12 * v65);
            if ( (_DWORD)v65 == v66 - 1 )
            {
              v28 = 4;
              v16 = *(_DWORD *)(v141 + 80) - *v68;
              v54 = DWORD2(v133);
            }
            else
            {
              v54 = DWORD2(v133);
              v28 = 4;
              v16 = *(_DWORD *)(v67 + 12LL * (unsigned int)(v65 + 1)) - *v68;
            }
          }
          goto LABEL_59;
      }
      v60 = v28 - 10;
      v59 = 1042;
      if ( v28 == 10 )
      {
        v60 = 1;
        HIDWORD(v133) = 1042;
        v54 = DWORD2(v133) & 0xFFC00000;
        v147 = 1;
        v28 = 6;
      }
      else
      {
        HIDWORD(v133) = 1042;
        v54 = DWORD2(v133) & 0xFFC00000;
        v147 = 1;
        v28 = 7;
      }
LABEL_60:
      if ( v31 != (_OWORD *)v27 )
        HIDWORD(v133) = (*(_DWORD *)(v4 + 200) ^ v59) & 1 ^ v59;
      DWORD2(v133) = v54 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      *v31 = v133;
      v61 = ++*(_DWORD *)(v4 + 192);
      if ( v60 )
      {
        Isoch_InsertLinkTrb(v4, a1, 5LL, 0LL);
        v147 = 0;
        v61 = *(_DWORD *)(v4 + 192);
      }
      if ( v28 != 4 && v28 != 9 )
      {
        v62 = v131;
        goto LABEL_67;
      }
      v64 = (_BYTE *)(v4 + 333);
      *((_DWORD *)a1 + 26) = v61;
      *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192)) = 0LL;
      if ( v28 == 9 )
      {
        v72 = (KSPIN_LOCK *)(v4 + 96);
        v73 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
        v74 = v141;
        v62 = v131;
        *(_BYTE *)(v4 + 104) = v73;
        v75 = v62 - *(_DWORD *)(v74 + 108);
        ++*(_DWORD *)(v74 + 116);
        v76 = *(_QWORD *)(v74 + 48);
        *(_DWORD *)(v74 + 104) = v75;
        v77 = v76 + 140;
        v78 = *((_DWORD *)a1 + 11);
        v79 = (_DWORD *)(v77 + 12LL * *((unsigned int *)a1 + 10));
        if ( v78 == *(_DWORD *)(v74 + 96) - 1 )
          v80 = *(_DWORD *)(v74 + 80) - *v79;
        else
          v80 = *(_DWORD *)(v77 + 12LL * (unsigned int)(v78 + 1)) - *v79;
        *(_DWORD *)(v74 + 88) += v80;
        ++*(_DWORD *)(v4 + 376);
        v81 = v136;
        *(_DWORD *)(v4 + 328) |= 0x20u;
        *(_DWORD *)(v4 + 364) = v81;
LABEL_98:
        *(_DWORD *)(v4 + 328) |= 0x10u;
        *(_DWORD *)(v4 + 328) |= 1u;
LABEL_99:
        KeReleaseSpinLock(v72, *(_BYTE *)(v4 + 104));
        goto LABEL_73;
      }
      if ( *v64 )
      {
        v72 = (KSPIN_LOCK *)(v4 + 96);
        v127 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
        v103 = *v64 == 0;
        v62 = v131;
        *(_BYTE *)(v4 + 104) = v127;
        if ( !v103 )
          goto LABEL_98;
        goto LABEL_99;
      }
      v62 = v131;
LABEL_73:
      *(_BYTE *)(v27 + 12) ^= 1u;
      _InterlockedOr(v128, 0);
      v27 = 0LL;
      if ( *v64 )
      {
        *v64 = 0;
        v111 = *(_QWORD *)(v4 + 56);
        v112 = *(unsigned int *)(v4 + 64);
        v113 = *(_QWORD *)(v111 + 16);
        v114 = *(_DWORD *)(v111 + 144);
        if ( *(_QWORD *)(v113 + 160) )
        {
          UsbDevice_DirectWriteDoorbell(v113, v114, v112);
        }
        else if ( !*(_BYTE *)(v4 + 280) )
        {
          XilUsbDevice_SendRequestToRingDoorbell(v113 + 608, v114, v112);
        }
      }
      if ( v28 != 9 )
      {
        v139 = v134;
        if ( v134 < *v137 )
          v140 = v132 - v137[6 * v134 + 4];
        v142 = *(unsigned int *)(v4 + 192);
      }
LABEL_67:
      v63 = *(_DWORD *)(v4 + 192);
      if ( v63 == *(_DWORD *)(v4 + 196) )
      {
        if ( v28 == 9 )
        {
LABEL_105:
          v82 = *((_DWORD *)a1 + 22);
          *((_DWORD *)a1 + 26) = v63;
          TR_AddTRBRangeToSecureTransferRing(v4, (_DWORD)a1 + 24, a1[12], v82, v63, (__int64)(a1 + 16));
          result = *(_QWORD *)(v4 + 56);
          v85 = *(_QWORD *)(result + 16);
          if ( *(_QWORD *)(v85 + 160) )
          {
            v86 = *(_DWORD *)(result + 144);
            v87 = (*(_DWORD *)(v4 + 64) << 16) | (unsigned __int8)v86;
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
              McTemplateK0uqq_EtwWriteTransfer(
                v86,
                *(_DWORD *)(v4 + 64),
                v83,
                *(unsigned __int8 *)(v85 + 135),
                v86,
                *(_DWORD *)(v4 + 64));
            result = *(_QWORD *)(v85 + 160);
            *(_DWORD *)result = v87;
            _InterlockedOr(v128, 0);
          }
          return result;
        }
        v88 = *(_DWORD *)(v4 + 192);
        if ( v28 != 4 )
        {
          v89 = v137;
          v90 = v140;
          v91 = v139;
          v92 = v141;
          v93 = v142;
          *(_DWORD *)(v4 + 192) = v142;
          v134 = v91;
          v91 *= 3LL;
          v94 = v89[2 * v91 + 6] - v90;
          v130 = 0;
          v129 = v94;
          v95 = *(_QWORD *)&v89[2 * v91 + 4] + v90;
          v96 = *(_QWORD *)(v92 + 48);
          v132 = v95;
          v97 = v96 + 140;
          if ( v62 == *(_DWORD *)(v92 + 96) - 1 )
            v98 = *(_DWORD *)(v92 + 80);
          else
            v98 = *(_DWORD *)(v97 + 12LL * (v62 + 1));
          v16 = v98 - *(_DWORD *)(v97 + 12LL * v62);
          v28 = 4;
          v88 = v93;
          v63 = v93;
        }
        v99 = (__int64 *)a1[1];
        v100 = a1 + 1;
        v27 = *(_QWORD *)(v4 + 184) + 16LL * v63;
        v145 = 0LL;
        if ( v99 == a1 + 1 )
        {
          v63 = v88;
        }
        else
        {
          if ( (_QWORD *)v99[1] != v100 )
            goto LABEL_177;
          v101 = *v99;
          if ( *(__int64 **)(*v99 + 8) != v99 )
            goto LABEL_177;
          *v100 = v101;
          v102 = 6144;
          *(_QWORD *)(v101 + 8) = v100;
          v99[1] = (__int64)v99;
          *v99 = (__int64)v99;
          v103 = *(_DWORD *)(v4 + 200) == 0;
          *((_QWORD *)&v145 + 1) = 0LL;
          if ( v103 )
            v102 = 6145;
          if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 0x800LL) != 0 )
            v102 |= 0x10u;
          v104 = v102 & 0xFFFFFFFD;
          v105 = *(unsigned __int16 *)(v4 + 112);
          v106 = 2LL * *(unsigned int *)(v4 + 192);
          *(_QWORD *)&v145 = v99[3];
          v107 = DWORD2(v145) & 0x3FFFFF | (v105 << 22);
          v108 = *(_QWORD *)(v4 + 184);
          *((_QWORD *)&v145 + 1) = __PAIR64__(v104, v107);
          *(_QWORD *)(v108 + 8 * v106) = v145;
          *(_DWORD *)(v108 + 8 * v106 + 8) = v107;
          *(_DWORD *)(v108 + 8 * v106 + 12) = v104;
          *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
          v109 = (__int64 **)a1[4];
          v110 = *(__int64 **)(v4 + 176);
          if ( *v109 != a1 + 3 )
LABEL_177:
            __fastfail(3u);
          *v110 = (__int64)(a1 + 3);
          v110[1] = (__int64)v109;
          *v109 = v110;
          a1[4] = (__int64)v110;
          *(_QWORD *)(v4 + 176) = v99;
          *(_QWORD *)(v4 + 184) = v99[2];
          *(_DWORD *)(v4 + 192) = 0;
          a1[12] = (__int64)v99;
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
          v63 = *(_DWORD *)(v4 + 192);
          v142 = 0LL;
        }
      }
      if ( v28 == 9 )
        goto LABEL_105;
      LODWORD(v5) = v131;
      v11 = v132;
    }
    v34 = v5;
    if ( *(_DWORD *)(v4 + 356) != 1 )
      v34 = (unsigned int)v5 / *(_DWORD *)(v4 + 356);
    v35 = *v144 + v34;
    v36 = v35;
    v136 = v35;
    v37 = *(_QWORD *)(v4 + 56);
    v38 = ((v36 & 0x7FF) << 20) | 0x1400;
    v39 = v38;
    v40 = *(_WORD *)(v37 + 100);
    v41 = *(_DWORD *)(v37 + 148);
    v42 = v40 & 0x7FF;
    if ( v148 )
    {
      v123 = (v16 + v42 - 1) / v42;
      if ( !v123 )
        v123 = 1;
      v46 = (DWORD2(v133) ^ (((v41 + v123) / (v41 + 1) - 1) << 17)) & 0x3E0000 ^ DWORD2(v133);
    }
    else
    {
      v43 = v16 + v42 - 1;
      if ( v42 == 200 )
        v44 = v43 / 0xC8;
      else
        v44 = v43 / v42;
      if ( !v44 )
        v44 = 1;
      v45 = v41 + v44;
      if ( v41 )
        v45 /= v41 + 1;
      v46 = DWORD2(v133);
      v38 = v39 | ((((_BYTE)v45 - 1) & 3) << 7);
    }
    v33 = v148;
    v47 = v40 & 0x7FF;
    v48 = v16 + v47 - 1;
    if ( v47 == 200 )
      v49 = v48 / 0xC8;
    else
      v49 = v48 / v47;
    v50 = v49;
    if ( !v49 )
      v50 = 1;
    if ( v41 )
      v51 = v50 % (v41 + 1);
    else
      v51 = 0;
    if ( v51 )
      v41 = v51 - 1;
    v52 = (v38 ^ (v41 << 16)) & 0xF0000 ^ v38;
    v53 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 320LL) )
      v53 = v49;
    v138 = v53;
    v11 = v132;
LABEL_44:
    if ( v129 > v16 )
    {
      *(_QWORD *)&v133 = v132;
      v129 -= v16;
      v54 = v46 ^ (v16 ^ v46) & 0x1FFFF;
      v132 += v16;
      if ( v130 + (v54 & 0x1FFFF) > v135 )
        v54 = v46 ^ (v16 ^ v46) & 0x1FFFF ^ (v46 ^ (v16 ^ v46) & 0x1FFFF ^ (v135 - v130)) & 0x1FFFF;
      if ( v149 )
        v52 = v52 & 0xFFFFFE7F | 0x80;
      v55 = v130;
LABEL_50:
      v28 = 6;
      goto LABEL_51;
    }
    v16 -= v129;
    *(_QWORD *)&v133 = v11;
    v69 = *v137;
    v54 = v46 ^ (v129 ^ v46) & 0x1FFFF;
    v70 = v134 + 1;
    v134 = v70;
    if ( (unsigned int)v70 < v69 )
    {
      v132 = *(_QWORD *)&v137[6 * v70 + 4];
      v71 = v137[6 * v70 + 6];
      LODWORD(v5) = v131;
    }
    else
    {
      v71 = 0;
      v132 = 0LL;
    }
    v55 = v130;
    v129 = v71;
    if ( v130 + (v54 & 0x1FFFF) > v135 )
    {
      v54 ^= (v54 ^ (v135 - v130)) & 0x1FFFF;
      if ( v16 )
      {
        v124 = v132;
        v125 = v129;
        while ( v125 <= v16 )
        {
          v70 = (unsigned int)(v70 + 1);
          v16 -= v125;
          v134 = v70;
          if ( (unsigned int)v70 >= v69 )
          {
            v55 = v130;
            v129 = 0;
            v132 = 0LL;
            goto LABEL_88;
          }
          v124 = *(_QWORD *)&v137[6 * v70 + 4];
          v125 = v137[6 * v70 + 6];
          v132 = v124;
          v129 = v125;
          if ( !v16 )
            goto LABEL_159;
        }
        v129 = v125 - v16;
        v132 = v16 + v124;
        v16 = 0;
LABEL_159:
        v55 = v130;
      }
    }
    else
    {
LABEL_88:
      if ( v16 )
      {
        v28 = 5;
        goto LABEL_51;
      }
    }
    if ( v149 )
      v52 = v52 & 0xFFFFFE7F | 0x80;
    if ( (_DWORD)v5 != *((_DWORD *)a1 + 11) )
      goto LABEL_50;
    v28 = 7;
LABEL_51:
    v56 = v52;
    v130 = (v54 & 0x1FFFF) + v55;
    if ( !v33 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 320LL) && (unsigned int)(v28 - 6) > 1 )
      {
        v57 = v138 - v130 / (*(_WORD *)(*(_QWORD *)(v4 + 56) + 100LL) & 0x7FFu);
        if ( v57 > 0x1F )
          v57 = 31;
      }
      else
      {
        v57 = 0;
      }
      v54 ^= (v54 ^ (v57 << 17)) & 0x3E0000;
    }
    v58 = *(_QWORD *)(v4 + 40);
    v59 = v52 | 0x10;
    HIDWORD(v133) = v59;
    if ( _bittest64((const signed __int64 *)(v58 + 336), 0x2Fu) )
    {
      v126 = *(_QWORD *)(v4 + 48);
      if ( *(_DWORD *)(v126 + 20) == 1 )
      {
        if ( *(_DWORD *)(v126 + 40) )
        {
          if ( v28 == 6 )
          {
            if ( *(_DWORD *)(v4 + 196) - v30 - 1 < *(_DWORD *)(v4 + 432) )
            {
              v28 = 10;
              goto LABEL_59;
            }
LABEL_58:
            v59 = v56 | 0x12;
            HIDWORD(v133) = v56 | 0x12;
LABEL_59:
            v60 = v147;
            goto LABEL_60;
          }
          if ( v28 == 7 )
          {
            v28 = 11;
            goto LABEL_59;
          }
        }
      }
    }
    if ( v28 != 6 && v28 != 7 )
      goto LABEL_59;
    goto LABEL_58;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqDDD(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      v20,
      v11,
      v128[8],
      *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      *(_QWORD *)(v1 + 24),
      (char)a1,
      v23,
      v5,
      v18);
  Isoch_Stage_FreeScatterGatherList(v4, a1, v20, v11);
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v117 = *a1;
  if ( *((_BYTE *)a1 + 56) )
  {
    IoFreeMdl((PMDL)a1[8]);
    a1[8] = 0LL;
    *((_BYTE *)a1 + 56) = 0;
  }
  LOBYTE(v116) = 1;
  TR_ReleaseSegments(v4, a1 + 1, v116);
  TR_ReleaseSegments(v4, a1 + 3, 0LL);
  StageQueue_Release(v117 + 128, a1);
  v118 = *(_BYTE *)(v4 + 104);
  *(_DWORD *)(v4 + 328) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v118);
  v119 = *(_QWORD *)(v4 + 56);
  v120 = *(unsigned int *)(v4 + 64);
  v121 = *(_QWORD *)(v119 + 16);
  v122 = *(unsigned int *)(v119 + 144);
  if ( *(_QWORD *)(v121 + 160) )
    result = UsbDevice_DirectWriteDoorbell(v121, v122, v120);
  else
    result = XilUsbDevice_SendRequestToRingDoorbell(v121 + 608, v122, v120);
  *(_DWORD *)(v4 + 352) = 1;
  return result;
}
