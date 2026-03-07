__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        __m128i *String1,
        int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r12
  __int64 v12; // r13
  __int16 v13; // si
  __int64 KcbAtLayerHeight; // rdi
  volatile signed __int64 *KcbInHashEntryByName; // rax
  __int64 v16; // r15
  __int16 v17; // si
  __int64 v18; // rdi
  ULONG_PTR v19; // rdi
  unsigned __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int16 v25; // r15
  __int16 v26; // si
  __int16 v27; // di
  _QWORD *v28; // r14
  __int64 v29; // rcx
  unsigned __int16 v30; // dx
  __int64 v31; // rcx
  _QWORD *v32; // r13
  int v33; // esi
  __int64 NextElement; // rax
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rdx
  int v38; // edx
  __int16 i; // di
  __int64 v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // r13
  ULONG_PTR v43; // rdx
  ULONG_PTR *v44; // rax
  int v45; // ecx
  ULONG_PTR v46; // rcx
  __int64 *v47; // r15
  __int64 CellFlat; // rax
  __int64 v49; // rcx
  __int64 v50; // r14
  signed __int64 *v51; // rsi
  __int64 v52; // r14
  ULONG_PTR v53; // rcx
  __int64 CellPaged; // rax
  unsigned int v55; // r8d
  ULONG_PTR v56; // rcx
  __int64 v57; // rsi
  ULONG_PTR v58; // r13
  unsigned int v59; // r15d
  bool v60; // zf
  _WORD *v61; // rax
  _WORD *v62; // r11
  __int64 v63; // rax
  __m128i v64; // xmm0
  int v65; // esi
  __int16 v66; // ax
  unsigned __int16 *v67; // r9
  __int64 v68; // r10
  unsigned __int16 v69; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v71; // dx
  unsigned __int16 v72; // r14
  _WORD *v73; // r12
  ULONG_PTR v74; // rdx
  __int64 v75; // rax
  unsigned __int8 *v76; // r15
  unsigned __int16 v77; // r11
  unsigned __int16 v78; // r14
  wchar_t *v79; // r12
  unsigned __int16 v80; // r10
  unsigned int v81; // r9d
  struct _LIST_ENTRY *v82; // rax
  unsigned __int16 v83; // r10
  struct _LIST_ENTRY *v84; // rax
  unsigned __int16 v85; // r9
  LONG v86; // esi
  unsigned int v87; // eax
  __int64 *v88; // r14
  __int64 v89; // rcx
  __int64 v90; // rax
  volatile signed __int64 *v91; // r15
  int v92; // eax
  __int16 v93; // dx
  __int64 v94; // r14
  _QWORD *v95; // r15
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 *v98; // rbx
  signed __int64 v99; // rax
  signed __int64 v100; // rdx
  __int64 v101; // rtt
  __int64 v103; // [rsp+30h] [rbp-D0h]
  __int64 v104; // [rsp+38h] [rbp-C8h]
  int SubKeyInLeafWithStatus; // [rsp+50h] [rbp-B0h]
  __int16 v106; // [rsp+50h] [rbp-B0h]
  __int16 v107; // [rsp+54h] [rbp-ACh]
  __int16 v108; // [rsp+56h] [rbp-AAh]
  __int16 v109; // [rsp+58h] [rbp-A8h]
  unsigned int v110[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v111; // [rsp+68h] [rbp-98h] BYREF
  __int64 v112; // [rsp+70h] [rbp-90h] BYREF
  __int16 v113; // [rsp+78h] [rbp-88h]
  int v114; // [rsp+7Ch] [rbp-84h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  __int64 v116; // [rsp+88h] [rbp-78h]
  int v117; // [rsp+90h] [rbp-70h]
  int v118; // [rsp+94h] [rbp-6Ch]
  __int64 v119; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v120; // [rsp+A0h] [rbp-60h]
  _WORD *v121; // [rsp+A8h] [rbp-58h]
  unsigned int v122; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v123; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v125; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING String2; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v127; // [rsp+E0h] [rbp-20h]
  bool *v128; // [rsp+E8h] [rbp-18h]
  __m128i v129; // [rsp+F0h] [rbp-10h]

  v11 = a1;
  v128 = a5;
  v112 = 0LL;
  v123 = 0LL;
  v12 = a2;
  HvpGetCellContextReinitialize(&v112);
  v13 = *(_WORD *)(v11 + 66) - 1;
  BugCheckParameter2 = 0LL;
  v107 = -1;
  if ( v13 < 0 )
  {
LABEL_4:
    *(_WORD *)(a4 + 2) = -1;
    v17 = 0;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12, v13);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 32), (unsigned int)a8);
      KcbInHashEntryByName = (volatile signed __int64 *)CmpFindKcbInHashEntryByName(
                                                          *(_QWORD *)(KcbAtLayerHeight + 32),
                                                          a8,
                                                          KcbAtLayerHeight,
                                                          (__int64)String1);
      BugCheckParameter2 = (ULONG_PTR)KcbInHashEntryByName;
      v16 = (__int64)KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(*(_QWORD **)(KcbAtLayerHeight + 32), a8);
      if ( --v13 < 0 )
        goto LABEL_4;
    }
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    CmpUnlockHashEntry(*(_QWORD **)(KcbAtLayerHeight + 32), a8);
    CmpPopulateKcbStack(a4, v16);
    v17 = *(_WORD *)(v16 + 66) + 1;
  }
  v108 = v17;
  if ( v17 > *(__int16 *)(v11 + 66) )
  {
    v25 = -1;
  }
  else
  {
    do
    {
      if ( v17 < 2 )
        v18 = *(_QWORD *)(v12 + 8LL * v17 + 8);
      else
        v18 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v17 - 16);
      v19 = *(_QWORD *)(v18 + 32);
      v20 = (unsigned __int64 *)(*(_QWORD *)(v19 + 1648)
                               + 24
                               * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v19 + 1656) - 1)));
      v21 = KeAbPreAcquire((__int64)v20, 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
        ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
      if ( v22 )
        *(_BYTE *)(v22 + 18) = 1;
      v20[1] = (unsigned __int64)KeGetCurrentThread();
      _m_prefetchw((const void *)(v19 + 4232));
      v23 = *(_DWORD *)(v19 + 4232);
      if ( !v23 )
LABEL_204:
        KeBugCheckEx(0x51u, 0x17uLL, v19, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 4232), v23 + 1, v23);
        if ( v24 == v23 )
          break;
        if ( !v23 )
          goto LABEL_204;
      }
      v25 = v17;
      v107 = v17++;
    }
    while ( v17 <= *(__int16 *)(a1 + 66) );
    v11 = a1;
  }
  v26 = 0;
  v113 = v25;
  v27 = 0;
  if ( *(__int16 *)(v12 + 2) < 0 )
  {
    v32 = (_QWORD *)(v12 + 24);
    v124 = 0LL;
    goto LABEL_35;
  }
  do
  {
    v28 = (_QWORD *)(v12 + 24);
    *(_QWORD *)&v110[1] = v12 + 24;
    if ( v27 < 2 )
      v29 = *(_QWORD *)(v12 + 8LL * v27 + 8);
    else
      v29 = *(_QWORD *)(*v28 + 8LL * v27 - 16);
    CmpLockKcbShared(v29);
    v30 = *(_WORD *)(v12 + 2);
    ++v27;
  }
  while ( v27 <= (__int16)v30 );
  v124 = 0LL;
  if ( (v30 & 0x8000u) != 0 )
    goto LABEL_34;
  while ( 1 )
  {
    if ( v30 < 2u )
      v31 = *(_QWORD *)(v12 + 8LL * v30 + 8);
    else
      v31 = *(_QWORD *)(*v28 + 8LL * v30 - 16);
    if ( *(_WORD *)(v31 + 66) && *(_BYTE *)(v31 + 65) == 1 )
      goto LABEL_34;
    if ( *(_DWORD *)(v31 + 40) != -1 )
      break;
    if ( (--v30 & 0x8000u) != 0 )
      goto LABEL_34;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(v12 + 8) + 208LL, &v124, 32LL);
    if ( NextElement )
    {
      do
      {
        v36 = *(_DWORD *)(NextElement + 68);
        if ( v36 == 2 || v36 == 11 )
          break;
        NextElement = CmListGetNextElement(v35 + 208, &v124, 32LL);
      }
      while ( NextElement );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
      {
LABEL_34:
        v32 = *(_QWORD **)&v110[1];
LABEL_35:
        v33 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
        CmpRecordParseFailure(a11, 328192, -1073741772);
        goto LABEL_48;
      }
    }
  }
  v37 = *(_QWORD *)(v11 + 240);
  if ( v37 && !CmEqualTrans(a9, v37) )
  {
    v33 = -1073741772;
    v38 = 328448;
    SubKeyInLeafWithStatus = -1073741772;
LABEL_46:
    CmpRecordParseFailure(a11, v38, -1073741772);
    goto LABEL_47;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
  {
    v33 = -1073741772;
    v38 = 328704;
    SubKeyInLeafWithStatus = -1073741772;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a11 + 168));
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  v41 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
    v26 = *(_WORD *)(BugCheckParameter2 + 66) + 1;
    v109 = v26;
  }
  else
  {
    v109 = 0;
  }
  if ( v26 > *(__int16 *)(v11 + 66) )
    goto LABEL_181;
  while ( 2 )
  {
    if ( v26 < 2 )
      v42 = *(_QWORD *)(v12 + 8LL * v26 + 8);
    else
      v42 = *(_QWORD *)(*v28 + 8LL * v26 - 16);
    v43 = *(unsigned int *)(v42 + 40);
    v44 = (ULONG_PTR *)(v42 + 32);
    v125 = v42;
    if ( (_DWORD)v43 == -1 )
    {
      v45 = -1;
LABEL_164:
      v88 = (__int64 *)v44;
      if ( *(_WORD *)(v11 + 66) || a10 )
        goto LABEL_169;
      v33 = -1073741772;
      v25 = v107;
      SubKeyInLeafWithStatus = -1073741772;
      v90 = *(unsigned __int8 *)(a11 + 258);
      if ( (unsigned __int8)v90 < 4u )
      {
        *(_DWORD *)(a11 + 8 * v90 + 260) = -1073741772;
        *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 264) = 329216;
      }
      break;
    }
    v46 = *v44;
    v47 = (__int64 *)(v42 + 32);
    v127 = (__int64 *)(v42 + 32);
    if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v46, v43);
    else
      CellFlat = HvpGetCellPaged(v46);
    v49 = *v47;
    v50 = CellFlat;
    v116 = CellFlat;
    if ( (*(_DWORD *)(v49 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v49, &v112);
      else
        HvpReleaseCellPaged(v49, &v112);
      v51 = (signed __int64 *)(*v47 + 72);
      v52 = KeAbPreAcquire((__int64)v51, 0LL);
      if ( _InterlockedCompareExchange64(v51, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v51, 0, v52, (__int64)v51);
      if ( v52 )
        *(_BYTE *)(v52 + 18) = 1;
      v53 = *v47;
      if ( (*(_BYTE *)(*v47 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v53, *(unsigned int *)(v42 + 40));
      else
        CellPaged = HvpGetCellPaged(v53);
      v55 = *(_DWORD *)(v42 + 40);
      v56 = *v47;
      v50 = CellPaged;
      v116 = CellPaged;
      CmpUpdateKeyNodeAccessBits(v56, CellPaged, v55);
      v57 = *v47;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v47 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v57 + 72));
      KeAbPostRelease(v57 + 72);
    }
    v58 = *v47;
    v33 = -1073741772;
    SubKeyInLeafWithStatus = -1073741772;
    v111 = 0xFFFFFFFFLL;
    v59 = 0;
    v60 = *(_DWORD *)(v58 + 216) == 0;
    v110[0] = 0;
    v122 = 0;
    v118 = -1;
    v114 = 0;
    if ( v60 )
      goto LABEL_156;
    while ( !*(_DWORD *)(v50 + 4LL * v59 + 20) )
    {
LABEL_147:
      v114 = ++v59;
      if ( v59 >= *(_DWORD *)(v58 + 216) )
        goto LABEL_156;
    }
    if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
      v61 = (_WORD *)HvpGetCellFlat(v58, *(unsigned int *)(v50 + 4LL * v59 + 28));
    else
      v61 = (_WORD *)HvpGetCellPaged(v58);
    v120 = v61;
    v62 = v61;
    if ( !v61 )
    {
LABEL_155:
      v33 = -1073741670;
      SubKeyInLeafWithStatus = -1073741670;
      goto LABEL_156;
    }
    if ( *v61 == 26994 )
    {
      if ( (int)CmpFindSubKeyInRoot(v58, (__int64)v61, (__int64)String1, 0LL, v110) < 0 )
      {
LABEL_149:
        v33 = -1073741670;
        goto LABEL_151;
      }
      if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v58, &v111);
      else
        HvpReleaseCellPaged(v58, &v111);
      if ( v110[0] == -1 )
        goto LABEL_146;
      if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
        v63 = HvpGetCellFlat(v58, v110[0]);
      else
        v63 = HvpGetCellPaged(v58);
      v120 = (_WORD *)v63;
      v62 = (_WORD *)v63;
      if ( !v63 )
        goto LABEL_155;
    }
    if ( *v62 == 26732 )
    {
      v64 = *String1;
      v65 = 0;
      v117 = 0;
      v66 = _mm_cvtsi128_si32(v64);
      v129 = v64;
      if ( v66 )
      {
        v67 = (unsigned __int16 *)v129.m128i_i64[1];
        v68 = (unsigned __int16)(((unsigned __int16)(v66 - 1) >> 1) + 1);
        do
        {
          v69 = *v67;
          if ( *v67 >= 0x61u )
          {
            if ( v69 <= 0x7Au )
            {
              v69 -= 32;
            }
            else
            {
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              v69 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v71);
            }
          }
          ++v67;
          v65 = v69 + 37 * v65;
          --v68;
        }
        while ( v68 );
        v129.m128i_i64[1] = (__int64)v67;
        v117 = v65;
      }
      v72 = 0;
      v110[0] = -1;
      v106 = 0;
      if ( v62[1] )
      {
        while ( 1 )
        {
          v73 = &v62[4 * v72];
          v121 = v73;
          if ( v65 == *((_DWORD *)v73 + 2) )
          {
            v74 = *((unsigned int *)v73 + 1);
            v119 = 0xFFFFFFFFLL;
            v60 = (*(_BYTE *)(v58 + 140) & 1) == 0;
            String2 = 0LL;
            if ( v60 )
              v75 = HvpGetCellPaged(v58);
            else
              v75 = HvpGetCellFlat(v58, v74);
            if ( !v75 )
              goto LABEL_149;
            v76 = (unsigned __int8 *)(v75 + 76);
            if ( (*(_BYTE *)(v75 + 2) & 0x20) != 0 )
            {
              v77 = *(_WORD *)(v75 + 72);
              v78 = (unsigned __int16)String1->m128i_i16[0] >> 1;
              v79 = (wchar_t *)String1->m128i_i64[1];
              if ( v78 )
              {
                while ( v77 )
                {
                  v80 = *v79++;
                  v81 = *v76++;
                  if ( v80 != (_WORD)v81 )
                  {
                    if ( v80 >= 0x61u )
                    {
                      if ( v80 <= 0x7Au )
                      {
                        v80 -= 32;
                      }
                      else
                      {
                        v82 = PsGetCurrentServerSiloGlobals();
                        v80 = NLS_UPCASE((__int64)v82[77].Flink, v83);
                      }
                    }
                    if ( v81 >= 0x61 )
                    {
                      if ( v81 <= 0x7A )
                      {
                        LOWORD(v81) = v81 - 32;
                      }
                      else
                      {
                        v84 = PsGetCurrentServerSiloGlobals();
                        LOWORD(v81) = NLS_UPCASE((__int64)v84[77].Flink, v85);
                      }
                    }
                    v86 = v80 - (unsigned __int16)v81;
                    if ( v80 != (unsigned __int16)v81 )
                      goto LABEL_128;
                  }
                  --v77;
                  if ( !--v78 )
                    break;
                }
              }
              v86 = v78 - v77;
LABEL_128:
              v72 = v106;
              v73 = v121;
            }
            else
            {
              String2.Length = *(_WORD *)(v75 + 72);
              String2.MaximumLength = String2.Length;
              String2.Buffer = (wchar_t *)(v75 + 76);
              v86 = RtlCompareUnicodeString((PCUNICODE_STRING)String1, &String2, 1u);
            }
            if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v58, &v119);
            else
              HvpReleaseCellPaged(v58, &v119);
            if ( !v86 )
            {
              v87 = *((_DWORD *)v73 + 1);
              v59 = v114;
              v33 = 0;
              SubKeyInLeafWithStatus = 0;
              v110[0] = v87;
              goto LABEL_142;
            }
            v62 = v120;
            v65 = v117;
          }
          v106 = ++v72;
          if ( v72 >= v62[1] )
          {
            v59 = v114;
            break;
          }
        }
      }
      v33 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
LABEL_143:
      if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v58, &v111);
      else
        HvpReleaseCellPaged(v58, &v111);
LABEL_146:
      v50 = v116;
      goto LABEL_147;
    }
    SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v58, (__int64)v62, (int)String1, 0, v110, &v122);
    v33 = SubKeyInLeafWithStatus;
    if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
      goto LABEL_152;
    v87 = v110[0];
LABEL_142:
    if ( v87 == -1 )
      goto LABEL_143;
    v118 = v87;
    v33 = 0;
LABEL_151:
    SubKeyInLeafWithStatus = v33;
LABEL_152:
    if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v58, &v111);
    else
      HvpReleaseCellPaged(v58, &v111);
LABEL_156:
    v88 = v127;
    v89 = *v127;
    if ( (*(_BYTE *)(*v127 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v89, &v112);
    else
      HvpReleaseCellPaged(v89, &v112);
    if ( v33 == -1073741772 )
    {
      v45 = -1;
      v44 = (ULONG_PTR *)v88;
      goto LABEL_163;
    }
    if ( v33 < 0 )
    {
      CmpRecordParseFailure(a11, 328960, v33);
      v25 = v107;
    }
    else
    {
      v45 = v118;
      v44 = (ULONG_PTR *)v88;
      if ( v118 == -1 )
      {
LABEL_163:
        v11 = a1;
        goto LABEL_164;
      }
      v11 = a1;
LABEL_169:
      v91 = (volatile signed __int64 *)BugCheckParameter2;
      LODWORD(v104) = a8;
      LODWORD(v103) = a7;
      v92 = CmpCreateKeyControlBlock(
              *v88,
              v45,
              v125,
              BugCheckParameter2,
              0,
              (unsigned __int16 *)String1,
              v103,
              v104,
              &v123);
      SubKeyInLeafWithStatus = v92;
      v33 = v92;
      if ( v92 < 0 )
      {
        CmpRecordParseFailure(a11, 329472, v92);
        v25 = v107;
      }
      else
      {
        if ( v91 )
          CmpDereferenceKeyControlBlockUnsafe(v91);
        v41 = v123;
        BugCheckParameter2 = v123;
        v123 = 0LL;
        ++*(_WORD *)(a4 + 2);
        if ( v109 < 2 )
          *(_QWORD *)(a4 + 8LL * v109 + 8) = v41;
        else
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v109 - 16) = v41;
        if ( v109 != *(_WORD *)(v11 + 66) )
        {
          CmpUnlockHashEntry((_QWORD *)*v88, a8);
          ++v108;
          v41 = BugCheckParameter2;
        }
        v26 = v109 + 1;
        v109 = v26;
        if ( v26 <= *(__int16 *)(v11 + 66) )
        {
          v12 = a2;
          v28 = *(_QWORD **)&v110[1];
          continue;
        }
LABEL_181:
        v33 = 0;
        BugCheckParameter2 = 0LL;
        v25 = v113 - 1;
        SubKeyInLeafWithStatus = 0;
        if ( !a10 )
          v25 = v113;
        v107 = v25;
        *v128 = a10 != 0;
        *a3 = v41;
      }
    }
    break;
  }
LABEL_47:
  v32 = *(_QWORD **)&v110[1];
LABEL_48:
  for ( i = 0; i <= *(__int16 *)(a2 + 2); ++i )
  {
    if ( i < 2 )
      v40 = *(_QWORD *)(a2 + 8LL * i + 8);
    else
      v40 = *(_QWORD *)(*v32 + 8LL * i - 16);
    CmpUnlockKcb(v40);
  }
  v93 = v108;
  if ( v108 <= v25 )
  {
    v94 = 8LL * v108 - 16;
    v95 = v32;
    do
    {
      if ( v93 < 2 )
      {
        v96 = (__int64)v95 + v94;
      }
      else
      {
        v95 = v32;
        v96 = v94 + *v32;
      }
      v97 = *(_QWORD *)(*(_QWORD *)v96 + 32LL);
      v98 = (__int64 *)(*(_QWORD *)(v97 + 1648)
                      + 24
                      * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v97 + 1656) - 1)));
      v98[1] = 0LL;
      _m_prefetchw(v98);
      v99 = *v98;
      v100 = *v98 - 16;
      if ( (*v98 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v100 = 0LL;
      if ( (v99 & 2) != 0 || (v101 = *v98, v101 != _InterlockedCompareExchange64(v98, v100, v99)) )
        ExfReleasePushLock(v98);
      KeAbPostRelease((ULONG_PTR)v98);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v97);
      v94 += 8LL;
      v93 = v108 + 1;
      v108 = v93;
    }
    while ( v93 <= v107 );
    v33 = SubKeyInLeafWithStatus;
  }
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  return (unsigned int)v33;
}
