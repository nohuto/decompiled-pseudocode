/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x18002C2B0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketAllocate @ 0x180087FC0 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x180003144 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800070C0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002F380 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006F350 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007EE00 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18008A6A4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // ebx
  int v8; // r14d
  _QWORD *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r11
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // dx
  unsigned int v17; // eax
  volatile signed __int64 *v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  volatile signed __int64 *v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned int v25; // ecx
  unsigned int v26; // ebx
  struct _TEB *v27; // r14
  unsigned __int16 HeapData_high; // bp
  __int16 v29; // ax
  unsigned int v30; // r8d
  volatile signed __int64 *v31; // r14
  volatile signed __int64 *v32; // rbp
  signed __int64 v33; // r10
  signed __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  int v37; // ecx
  bool v38; // zf
  signed __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // r14d
  unsigned int v42; // ebp
  char v43; // cl
  int v44; // r13d
  unsigned __int64 v45; // r8
  __int64 v46; // r12
  signed __int16 *v47; // r15
  unsigned __int64 v48; // r9
  int v49; // edx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int16 *v52; // rbx
  signed __int16 v53; // ax
  signed __int16 v54; // tt
  __int64 v55; // r10
  unsigned int v56; // ebx
  __int16 v57; // bx
  __int64 v58; // rdi
  volatile signed __int64 *v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  char v63; // cl
  unsigned int v64; // eax
  signed __int64 v65; // rdi
  signed __int64 v66; // rax
  unsigned __int64 v67; // rdi
  volatile signed __int64 *v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned int v71; // ecx
  unsigned int v72; // ebx
  struct _TEB *v73; // rax
  unsigned __int16 v74; // ax
  unsigned __int16 v75; // r15
  __int16 v76; // ax
  unsigned int v77; // r8d
  volatile signed __int64 *v78; // r15
  volatile signed __int64 *v79; // r13
  signed __int64 v80; // r10
  signed __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  int v84; // ecx
  signed __int64 v85; // rax
  int v86; // eax
  __int64 v87; // r15
  unsigned int v88; // r13d
  char v89; // cl
  int v90; // r10d
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // r9
  signed __int16 *v94; // r12
  unsigned __int64 v95; // rdx
  signed __int16 *v96; // rbx
  signed __int16 v97; // ax
  signed __int16 v98; // tt
  __int64 v99; // r9
  int v100; // r11d
  unsigned int v101; // ebx
  __int16 v102; // bx
  char v103; // cl
  int v104; // r10d
  unsigned int v105; // r9d
  __int64 v106; // r10
  __int64 v107; // rcx
  int (__fastcall *v108)(__int64, __int64, _QWORD); // rax
  unsigned int v109; // r9d
  char v110; // cl
  __int64 v111; // r8
  __int64 v112; // r11
  signed __int16 *v113; // r10
  unsigned int v114; // eax
  int v115; // r9d
  signed __int16 *v116; // r8
  signed __int16 v117; // dx
  volatile signed __int64 *v118; // rcx
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // r8
  unsigned __int64 v121; // r9
  __int64 v122; // rax
  _QWORD *v123; // rdi
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // r9
  int v127; // ecx
  __int64 v128; // rcx
  __int64 *v129; // rax
  __int64 *v130; // rcx
  __int64 v131; // r12
  _QWORD *v132; // r8
  __int64 v133; // rax
  __int64 v134; // r9
  _QWORD *v135; // rdx
  __int64 *v136; // rdx
  unsigned __int64 v137; // rdx
  __int16 RandomValue32; // ax
  unsigned int v139; // eax
  volatile signed __int64 *v140; // rax
  unsigned __int64 v141; // rax
  char v142; // cl
  int v143; // r12d
  __int16 v144; // ax
  volatile signed __int64 *v145; // rax
  __int64 v146; // rdx
  unsigned __int64 *v147; // rcx
  unsigned __int64 v148; // rcx
  signed __int16 v149; // ax
  unsigned int v150; // [rsp+40h] [rbp-98h]
  unsigned int v151; // [rsp+40h] [rbp-98h]
  unsigned int v152; // [rsp+40h] [rbp-98h]
  int v153; // [rsp+40h] [rbp-98h]
  unsigned int v154; // [rsp+40h] [rbp-98h]
  int v155; // [rsp+40h] [rbp-98h]
  unsigned int v156; // [rsp+44h] [rbp-94h]
  unsigned int v157; // [rsp+44h] [rbp-94h]
  unsigned int v158; // [rsp+44h] [rbp-94h]
  unsigned int v159; // [rsp+44h] [rbp-94h]
  char v160[8]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v161; // [rsp+50h] [rbp-88h]
  int v162; // [rsp+58h] [rbp-80h]
  __int64 v163; // [rsp+60h] [rbp-78h]
  int v164; // [rsp+68h] [rbp-70h]
  unsigned int v165; // [rsp+6Ch] [rbp-6Ch]
  __int64 v166; // [rsp+70h] [rbp-68h]
  __int64 v167; // [rsp+78h] [rbp-60h]
  __int64 p_HeapData; // [rsp+80h] [rbp-58h]
  int v169; // [rsp+88h] [rbp-50h] BYREF
  __int64 v170; // [rsp+90h] [rbp-48h]
  int v171; // [rsp+98h] [rbp-40h]
  int v172; // [rsp+9Ch] [rbp-3Ch]
  __int64 v174; // [rsp+E8h] [rbp+10h]
  unsigned int v175; // [rsp+F8h] [rbp+20h]

  v175 = a4;
  v174 = (__int64)a2;
  v5 = 0LL;
  v6 = a3;
  v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v164 = 0;
  v8 = 0;
  v166 = 0LL;
  while ( !v7 )
  {
    if ( !v8 )
    {
      v8 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 16), (unsigned __int64)a2, a3, a4);
    }
LABEL_5:
    v10 = (_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 8) )
    {
      v11 = *(_QWORD *)(v6 + 24);
      v12 = v6 + 24;
      v13 = 4096;
      if ( !v7 )
        v13 = 1;
      if ( v11 != v12 )
      {
        while ( 2 )
        {
          LOWORD(v14) = *(_WORD *)(v11 + 32);
          v164 = 0;
          while ( 1 )
          {
            v15 = v13;
            if ( v13 >= (unsigned __int16)v14 )
              v15 = v14;
            if ( (unsigned __int16)v14 <= v15 && v8 == 1 )
              break;
            v16 = v14 - v15;
            v14 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 32), v14 - v15, v14);
            v17 = v16 + v15;
            if ( v14 == v17 )
            {
              if ( *(_WORD *)(v11 + 32) )
                goto LABEL_15;
              v131 = v11;
              if ( *(_BYTE *)(v11 + 38) )
              {
                if ( *(_BYTE *)(v11 + 38) == 1 )
                {
                  v12 = v6 + 40;
                  v132 = 0LL;
                }
                else
                {
                  if ( *(_BYTE *)(v11 + 38) != 2 )
                    goto LABEL_15;
                  v12 = 0LL;
                  v132 = 0LL;
                }
              }
              else
              {
                v132 = (_QWORD *)(v6 + 8);
              }
              v133 = v6 + 40;
              if ( v12 )
              {
                v134 = *(_QWORD *)v11;
                if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
                {
                  v135 = *(_QWORD **)(v11 + 8);
                  if ( *v135 == v11 )
                  {
                    *v135 = v134;
                    *(_QWORD *)(v134 + 8) = v135;
                    if ( v132 )
                      --*v132;
                    goto LABEL_157;
                  }
                }
LABEL_245:
                __fastfail(3u);
              }
LABEL_157:
              *(_BYTE *)(v11 + 38) = 1;
              if ( v6 != -40 )
              {
                v136 = *(__int64 **)(v6 + 48);
                if ( *v136 != v133 )
                  goto LABEL_245;
                *(_QWORD *)v11 = v133;
                v131 = 0LL;
                *(_QWORD *)(v11 + 8) = v136;
                *v136 = v11;
                *(_QWORD *)(v6 + 48) = v11;
              }
              if ( (*(_BYTE *)v6 & 1) == 0 && *v10 > 8uLL )
              {
                v131 = *(_QWORD *)v133;
                if ( *(_QWORD *)(*(_QWORD *)v133 + 8LL) != v133 )
                  goto LABEL_245;
                v146 = *(_QWORD *)v131;
                if ( *(_QWORD *)(*(_QWORD *)v131 + 8LL) != v131 )
                  goto LABEL_245;
                *(_QWORD *)v133 = v146;
                *(_QWORD *)(v146 + 8) = v133;
                --MEMORY[0];
                *(_BYTE *)(v131 + 38) = 2;
              }
              if ( v131 && *(_BYTE *)(v131 + 38) == 2 )
                *(_QWORD *)(v131 + 16) = 0LL;
LABEL_15:
              if ( v15 > 1u )
                *(_QWORD *)(v6 + 56) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v15 - 1)) & 0xFFF;
              goto LABEL_17;
            }
            if ( v14 < v17 )
              v164 = 1;
          }
          v11 = *(_QWORD *)v11;
          if ( v11 != v12 )
            continue;
          break;
        }
      }
      v11 = 0LL;
LABEL_17:
      v18 = (volatile signed __int64 *)(v6 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v18);
      else
        RtlReleaseSRWLockShared(v18);
      if ( v11 )
      {
        v22 = (volatile signed __int64 *)(v11 + 48);
        v23 = 3LL;
        v24 = 2 * (*(unsigned __int16 *)(v11 + 34) + (unsigned __int64)*(unsigned __int8 *)(v11 + 39));
        v25 = RtlpSearchWidth[*(unsigned __int8 *)(v6 + 1)];
        v165 = (unsigned int)v11 >> 12;
        v26 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
        v156 = v25;
        if ( v175 >= (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12)) )
          v23 = 1LL;
        v162 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
        v163 = v23;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v30 = 0;
        }
        else
        {
          v27 = NtCurrentTeb();
          HeapData_high = (unsigned __int8)HIWORD(v27->HeapData);
          if ( HeapData_high == HIBYTE(HIWORD(v27->HeapData)) )
          {
            RandomValue32 = RtlpHeapGenerateRandomValue32();
            v23 = v163;
            v29 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
          }
          else
          {
            v29 = (unsigned __int8)(HIWORD(v27->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v27->HeapData);
          }
          v25 = v156;
          v22 = (volatile signed __int64 *)(v11 + 48);
          HIWORD(v27->HeapData) = v29;
          v30 = RtlpLowFragHeapRandomData[HeapData_high];
        }
        v31 = &v22[(2 * (unsigned __int64)*(unsigned __int16 *)(v11 + 36)) >> 6];
        v32 = &v22[(v24 - 1) >> 6];
LABEL_27:
        if ( v24 < 0x40 )
        {
          v33 = *v31;
          v64 = v24;
          if ( (unsigned int)v24 >= v25 )
            v64 = v25;
          v25 = v64;
        }
        else
        {
          while ( 1 )
          {
            v33 = *v31;
            if ( (*v31 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v60 = v31++;
            if ( v60 == v32 )
              v31 = v22;
          }
          if ( v31 == v32 && (v24 & 0x3F) != 0 && (v24 & 0x3F) < v25 )
            v25 = v24 & 0x3F;
        }
        v157 = v25;
        v30 = ((v25 * v30) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v34 = ~v33;
          if ( v25 < 0x40 )
          {
            _BitScanForward64(&v61, v34 & 0x5555555555555555LL);
            v62 = 1LL << v25;
            v30 += v61;
            v63 = v61;
            v23 = v163;
            v35 = ((v62 - 1) << v63) & 0x5555555555555555LL;
          }
          else
          {
            v35 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v36, __ROR8__(v34 & v35, v30));
          v37 = ((_BYTE)v30 + (_BYTE)v36) & 0x3F;
          v172 = v37;
          v39 = _InterlockedCompareExchange64(v31, v33 | (v23 << v37), v33);
          v38 = v33 == v39;
          v33 = v39;
          if ( v38 )
            break;
          v25 = v157;
          v23 = v163;
          if ( (v39 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v145 = v31 + 1;
            v31 = v22;
            if ( v145 <= v32 )
              v31 = v145;
            goto LABEL_27;
          }
        }
        v40 = HIWORD(v162);
        v26 = (unsigned __int16)v26;
        v41 = (v37 + ((unsigned int)(v31 - v22) << 6)) >> 1;
        *(_WORD *)(v11 + 36) = v41;
        LODWORD(v167) = (unsigned __int16)v26;
        v42 = v40 + (unsigned __int16)v26 * v41;
        if ( *(_BYTE *)(v11 + 45) <= 1u )
          goto LABEL_45;
        v43 = *(_BYTE *)(v11 + 44);
        v44 = 0;
        v45 = v42 >> v43;
        v46 = 2 * v45;
        v47 = (signed __int16 *)(2 * v45 + v11 + *(unsigned __int16 *)(v11 + 46));
        _m_prefetchw(v47);
        v158 = 0;
        v48 = 0xFFFFFFFFLL;
        v49 = *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int16)((unsigned int)v11 >> 12);
        v150 = -1;
        v161 = 0LL;
        v162 = WORD4(RtlpHpHeapGlobals) ^ v49;
        v50 = ((v162 + v42 - 1) >> v43) - (unsigned int)v45 + 1;
        v51 = (unsigned __int64)&v47[v50];
        if ( (unsigned __int64)v47 >= v51 )
          goto LABEL_45;
        v52 = &v47[v50];
        do
        {
          while ( 1 )
          {
            v53 = *v47;
            while ( v53 > 0 )
            {
              v54 = v53;
              v53 = _InterlockedCompareExchange16(v47, v53 + 1, v53);
              if ( v54 == v53 )
              {
                v45 = v158;
                v48 = v150;
                LODWORD(v55) = v161;
                goto LABEL_41;
              }
            }
            if ( v44 )
              break;
            v44 = 1;
            RtlAcquireSRWLockExclusive(v11 + 24, v51, v45, v48);
          }
          v48 = v150;
          if ( v53 )
          {
            v45 = v158 + 1;
            v55 = v46 >> 1;
            ++v158;
            v161 = v46 >> 1;
            if ( v150 == -1 )
            {
              v48 = (unsigned int)v55;
              v150 = v46 >> 1;
            }
            *v47 = v53 + 1;
          }
          else
          {
            LODWORD(v55) = v161;
            v45 = --v158;
            *v47 = 1;
          }
LABEL_41:
          ++v47;
          v46 += 2LL;
        }
        while ( v47 < v52 );
        v26 = v167;
        if ( (_DWORD)v45 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
            ((_DWORD)v45 << *(_BYTE *)(v11 + 44)) / 4096);
        if ( (_DWORD)v48 == -1 )
        {
          if ( !v44 )
            goto LABEL_45;
LABEL_126:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 24));
          goto LABEL_45;
        }
        v103 = *(_BYTE *)(v11 + 44);
        v104 = v55 - v48 + 1;
        v105 = (_DWORD)v48 << v103;
        v106 = (unsigned int)(v104 << v103);
        v107 = *(_QWORD *)a1;
        v108 = (int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
        v154 = v105;
        v161 = v106;
        if ( v108(v107, v11 + v105, (unsigned int)v106) < 0 )
        {
          RtlpHpLfhSubsegmentDecBlockCounts(a1, v11, v42, v162);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 24));
          _InterlockedAnd64(
            (volatile signed __int64 *)(v11 + 8 * ((unsigned __int64)(2 * v41) >> 6) + 48),
            ~(3LL << ((2 * v41) & 0x3F)));
        }
        else
        {
          v109 = v154;
          v110 = *(_BYTE *)(v11 + 44);
          v111 = v154 >> v110;
          v112 = 2 * v111;
          v113 = (signed __int16 *)(2 * v111 + v11 + *(unsigned __int16 *)(v11 + 46));
          _m_prefetchw(v113);
          v114 = v109 - 1 + v161;
          v115 = -1;
          v116 = &v113[(v114 >> v110) - (unsigned int)v111 + 1];
          if ( v113 >= v116 )
            goto LABEL_126;
          do
          {
            v117 = *v113;
            while ( v117 > 0 )
            {
              v149 = _InterlockedCompareExchange16(v113, v117 + 1, v117);
              v38 = v117 == v149;
              v117 = v149;
              if ( v38 )
                goto LABEL_121;
            }
            if ( v117 )
            {
              LODWORD(v5) = v5 + 1;
              if ( v115 == -1 )
                v115 = v112 >> 1;
            }
            else
            {
              LODWORD(v5) = v5 - 1;
            }
            *v113 = v117 + 1;
LABEL_121:
            ++v113;
            v112 += 2LL;
          }
          while ( v113 < v116 );
          if ( (_DWORD)v5 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
              ((_DWORD)v5 << *(_BYTE *)(v11 + 44)) / 4096);
          if ( v115 == -1 )
            goto LABEL_126;
LABEL_45:
          v5 = v11 + v42;
          if ( v175 < v26 )
          {
            v56 = v26 - v175;
            if ( v56 == 1 )
              v57 = 0x8000;
            else
              v57 = v56 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int64)(unsigned __int16)v165)
                     + v5
                     - 2) = v57;
          }
        }
        if ( !v5 )
          RtlpHpLfhSubsegmentFreeBlock(a1, v11, 0LL, a5);
        goto LABEL_51;
      }
      v8 = 2;
      RtlAcquireSRWLockExclusive(v6 + 16, v19, v20, v21);
    }
    else
    {
      v118 = (volatile signed __int64 *)(v6 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v118);
      else
        RtlReleaseSRWLockShared(v118);
      v122 = v174;
      v123 = (_QWORD *)(v174 + 24);
      if ( (_QWORD *)*v123 != v123 )
      {
        RtlAcquireSRWLockExclusive(v174 + 16, v119, v120, v121);
        if ( (_QWORD *)*v123 == v123 )
          v58 = 0LL;
        else
          v58 = RtlpHpLfhOwnerMoveSubsegment(v174, *v123, 2LL);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v174 + 16));
        if ( v58 )
          goto LABEL_134;
        v122 = v174;
      }
      v58 = RtlpHpLfhSubsegmentCreate(a1, v122, a5);
      if ( !v58 )
        goto LABEL_52;
LABEL_134:
      v8 = 2;
      RtlAcquireSRWLockExclusive(v6 + 16, v124, v125, v126);
      if ( *(_WORD *)(v58 + 32) == *(_WORD *)(v58 + 34) )
      {
        *(_QWORD *)(v58 + 16) = v6;
      }
      else
      {
        v141 = _InterlockedExchange64((volatile __int64 *)(v58 + 16), v6);
        if ( (v141 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 32), v141 >> 1);
      }
      if ( *v10 && *(_WORD *)(v58 + 32) == *(_WORD *)(v58 + 34) )
        goto LABEL_205;
      v127 = *(unsigned __int8 *)(v58 + 38);
      if ( v127 == 2 )
      {
        v128 = 0LL;
LABEL_139:
        a2 = 0LL;
        goto LABEL_140;
      }
      if ( *(_BYTE *)(v58 + 38) )
      {
        if ( v127 != 1 )
          goto LABEL_149;
        v128 = v6 + 40;
        goto LABEL_139;
      }
      v128 = v6 + 24;
      a2 = (_QWORD *)(v6 + 8);
LABEL_140:
      v129 = (__int64 *)(v6 + 24);
      if ( v128 )
      {
        a3 = *(_QWORD *)v58;
        if ( *(_QWORD *)(*(_QWORD *)v58 + 8LL) != v58 )
          goto LABEL_245;
        v147 = *(unsigned __int64 **)(v58 + 8);
        if ( *v147 != v58 )
          goto LABEL_245;
        *v147 = a3;
        *(_QWORD *)(a3 + 8) = v147;
        if ( a2 )
          --*a2;
      }
      *(_BYTE *)(v58 + 38) = 0;
      if ( v6 != -24 )
      {
        v130 = *(__int64 **)(v6 + 32);
        if ( (__int64 *)*v130 != v129 )
          goto LABEL_245;
        *(_QWORD *)v58 = v129;
        *(_QWORD *)(v58 + 8) = v130;
        *v130 = v58;
        *(_QWORD *)(v6 + 32) = v58;
        if ( v6 != -8 )
          ++*v10;
        v58 = 0LL;
      }
      if ( (*(_BYTE *)v6 & 1) == 0 && *v10 > 8uLL )
      {
        v58 = *v129;
        if ( *(__int64 **)(*v129 + 8) != v129 )
          goto LABEL_245;
        v148 = *(_QWORD *)v58;
        if ( *(_QWORD *)(*(_QWORD *)v58 + 8LL) != v58 )
          goto LABEL_245;
        *v129 = v148;
        *(_QWORD *)(v148 + 8) = v129;
        --*v10;
        *(_BYTE *)(v58 + 38) = 2;
      }
      if ( v58 && *(_BYTE *)(v58 + 38) == 2 )
LABEL_205:
        *(_QWORD *)(v58 + 16) = 0LL;
LABEL_149:
      v166 = v58;
    }
  }
  while ( 1 )
  {
    _m_prefetchw((const void *)(v6 + 56));
    v65 = *(_QWORD *)(v6 + 56);
    if ( (v65 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v65 - 1, v65);
        if ( v65 == v66 )
          break;
        v164 = 1;
        v65 = v66;
        if ( (v66 & 0xFFF) == 0 )
          goto LABEL_171;
      }
      v67 = v65 & 0xFFFFFFFFFFFFF000uLL;
      if ( v67 )
        break;
    }
LABEL_171:
    if ( v8 == 2 )
      goto LABEL_5;
    v8 = 2;
    RtlAcquireSRWLockExclusive(v6 + 16, (unsigned __int64)a2, a3, a4);
  }
  if ( v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 16));
  v68 = (volatile signed __int64 *)(v67 + 48);
  v69 = 3LL;
  v70 = *(unsigned __int8 *)(v6 + 1);
  v163 = 2 * (*(unsigned __int16 *)(v67 + 34) + (unsigned __int64)*(unsigned __int8 *)(v67 + 39));
  v71 = RtlpSearchWidth[v70];
  v162 = (unsigned int)v67 >> 12;
  v72 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v67 + 40) ^ ((unsigned int)v67 >> 12);
  v151 = v71;
  if ( v175 >= (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v67 + 40) ^ ((unsigned int)v67 >> 12)) )
    v69 = 1LL;
  LODWORD(v161) = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v67 + 40) ^ ((unsigned int)v67 >> 12);
  v167 = v69;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v77 = 0;
  }
  else
  {
    v73 = NtCurrentTeb();
    p_HeapData = (__int64)&v73->HeapData;
    v74 = HIWORD(v73->HeapData);
    v75 = (unsigned __int8)v74;
    if ( (unsigned __int8)v74 == HIBYTE(v74) )
    {
      v144 = RtlpHeapGenerateRandomValue32();
      v76 = (v144 << 8) | (unsigned __int8)(v144 + 1);
    }
    else
    {
      v76 = (unsigned __int8)(v74 ^ (v74 + 1)) ^ v74;
    }
    v68 = (volatile signed __int64 *)(v67 + 48);
    *(_WORD *)(p_HeapData + 2) = v76;
    v71 = v151;
    v77 = RtlpLowFragHeapRandomData[v75];
  }
  v78 = &v68[(2 * (unsigned __int64)*(unsigned __int16 *)(v67 + 36)) >> 6];
  v79 = &v68[(unsigned __int64)(v163 - 1) >> 6];
LABEL_82:
  if ( (unsigned __int64)v163 < 0x40 )
  {
    v80 = *v78;
    v139 = v163;
    if ( (unsigned int)v163 >= v71 )
      v139 = v71;
    v71 = v139;
  }
  else
  {
    while ( 1 )
    {
      v80 = *v78;
      if ( (*v78 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v140 = v78++;
      if ( v140 == v79 )
        v78 = v68;
    }
    if ( v78 == v79 && (v163 & 0x3F) != 0 && ((unsigned __int8)v163 & 0x3Fu) < (unsigned __int64)v71 )
      v71 = v163 & 0x3F;
  }
  v152 = v71;
  v77 = ((v71 * v77) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v81 = ~v80;
    if ( v71 < 0x40 )
    {
      _BitScanForward64(&v137, v81 & 0x5555555555555555LL);
      v77 += v137;
      v82 = (((1LL << v71) - 1) << v137) & 0x5555555555555555LL;
    }
    else
    {
      v82 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v83, __ROR8__(v82 & v81, v77));
    v84 = ((_BYTE)v77 + (_BYTE)v83) & 0x3F;
    v171 = v84;
    v85 = _InterlockedCompareExchange64(v78, v80 | (v167 << v84), v80);
    v38 = v80 == v85;
    v80 = v85;
    if ( v38 )
      break;
    v71 = v152;
    if ( (v85 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v78 > v79 )
        v78 = v68;
      goto LABEL_82;
    }
  }
  v86 = WORD1(v161);
  v72 = (unsigned __int16)v72;
  v87 = (v84 + ((unsigned int)(v78 - v68) << 6)) >> 1;
  v170 = v87;
  *(_WORD *)(v67 + 36) = v87;
  v165 = (unsigned __int16)v72;
  v88 = v86 + v87 * (unsigned __int16)v72;
  if ( *(_BYTE *)(v67 + 45) <= 1u )
    goto LABEL_101;
  v89 = *(_BYTE *)(v67 + 44);
  v90 = 0;
  v91 = v88 >> v89;
  v92 = v67 + *(unsigned __int16 *)(v67 + 46);
  v160[0] = -1;
  v93 = 2 * v91;
  v163 = 2 * v91;
  v94 = (signed __int16 *)(2 * v91 + v92);
  _m_prefetchw(v94);
  v159 = 0;
  v153 = -1;
  LODWORD(v167) = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v67 + 40) ^ (unsigned __int16)((unsigned int)v67 >> 12);
  v95 = (unsigned __int64)&v94[((v88 + (_DWORD)v167 - 1) >> v89) - (unsigned int)v91 + 1];
  p_HeapData = 0LL;
  if ( (unsigned __int64)v94 >= v95 )
  {
LABEL_101:
    v5 = v67 + v88;
    if ( v175 < v72 )
    {
      v101 = v72 - v175;
      if ( v101 == 1 )
        v102 = 0x8000;
      else
        v102 = v101 & 0x3FFF;
      *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v162 ^ (unsigned __int64)*(unsigned __int16 *)(v67 + 40))
               + v5
               - 2) = v102;
    }
  }
  else
  {
    v96 = &v94[((v88 + (_DWORD)v167 - 1) >> v89) - (unsigned int)v91 + 1];
    do
    {
      while ( 1 )
      {
        v97 = *v94;
        while ( v97 > 0 )
        {
          v98 = v97;
          v97 = _InterlockedCompareExchange16(v94, v97 + 1, v97);
          if ( v98 == v97 )
          {
            v99 = v163;
            v91 = v159;
            v100 = v153;
            goto LABEL_96;
          }
        }
        if ( v90 )
          break;
        LODWORD(v161) = 1;
        RtlAcquireSRWLockExclusive(v67 + 24, v95, v91, v93);
        v90 = 1;
      }
      v99 = v163;
      v100 = v153;
      if ( v97 )
      {
        v91 = ++v159;
        p_HeapData = v163 >> 1;
        if ( v153 == -1 )
        {
          v100 = v163 >> 1;
          v153 = v100;
        }
      }
      else
      {
        v91 = --v159;
      }
      *v94 = v97 + 1;
LABEL_96:
      v93 = v99 + 2;
      ++v94;
      v163 = v93;
    }
    while ( v94 < v96 );
    v72 = v165;
    if ( (_DWORD)v91 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        ((_DWORD)v91 << *(_BYTE *)(v67 + 44)) / 4096);
    if ( v100 == -1 )
    {
      if ( v90 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v67 + 24));
      goto LABEL_101;
    }
    v142 = *(_BYTE *)(v67 + 44);
    v169 = p_HeapData - v100 + 1;
    v143 = v169 << v142;
    v155 = v100 << v142;
    if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v67 + (unsigned int)(v100 << v142),
           (unsigned int)(v169 << v142)) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v67, v155, v143, (__int64)&v169, 1, (__int64)v160);
      goto LABEL_101;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v67, v88, v167);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v67 + 24));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v67 + 8 * ((unsigned __int64)(unsigned int)(2 * v170) >> 6) + 48),
      ~(3LL << ((2 * v170) & 0x3F)));
  }
  if ( !v5 )
    RtlpHpLfhSubsegmentFreeBlock(a1, v67, 0LL, a5);
LABEL_51:
  v58 = v166;
LABEL_52:
  if ( v164 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v174);
  if ( v58 )
    RtlpHpLfhBucketAddSubsegment(a1, v174, v58, a5);
  return v5;
}
