/*
 * XREFs of HalpInterruptParseMadt @ 0x140376468
 * Callers:
 *     HalpInterruptParseAcpiTables @ 0x140376A1C (HalpInterruptParseAcpiTables.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSortProcessorTable @ 0x1403769D8 (HalpInterruptSortProcessorTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptBlockSmtSiblings @ 0x140518160 (HalpInterruptBlockSmtSiblings.c)
 *     HalpInterruptMapParkedPage @ 0x1405182F0 (HalpInterruptMapParkedPage.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptParseMadt(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v5; // r10d
  unsigned __int64 v6; // r12
  unsigned int v7; // r13d
  __int64 *v8; // r8
  char *v10; // r15
  __int64 v11; // rcx
  char *v12; // r9
  char *v13; // rdx
  char v14; // al
  unsigned int v15; // r10d
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rdi
  unsigned int *v22; // rax
  unsigned int v23; // r11d
  _DWORD *v24; // rdx
  __int64 v25; // r9
  bool v27; // zf
  _BYTE *v28; // r14
  __int64 v29; // rcx
  char *v30; // rdi
  char v31; // al
  __int64 MemoryInternal; // rcx
  int v33; // eax
  char v34; // al
  unsigned int v35; // ecx
  _DWORD *v36; // r8
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // esi
  int v40; // ebp
  unsigned int v41; // edi
  _DWORD *v42; // rdx
  unsigned int v43; // eax
  ULONG_PTR v44; // rdx
  __int64 v45; // r10
  ULONG_PTR v46; // r14
  __int64 v47; // r8
  __int64 v48; // r9
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // eax
  int v58; // edx
  __int16 v59; // ax
  int v60; // eax
  __int16 v61; // ax
  BOOL v62; // eax
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned int v66; // ecx
  ULONG_PTR v67; // rsi
  __int64 v68; // rcx
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rax
  _OWORD *v72; // rcx
  _OWORD *v73; // rax
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  __int128 v76; // xmm4
  __int128 v77; // xmm5
  ULONG_PTR v78; // rax
  unsigned __int64 v79; // rcx
  __int128 v80; // xmm2
  __int128 v81; // xmm3
  __int128 v82; // xmm4
  __int128 v83; // xmm5
  ULONG_PTR v84; // rdx
  ULONG_PTR v85; // rax
  unsigned __int64 v86; // rcx
  __int128 v87; // xmm2
  __int128 v88; // xmm3
  __int128 v89; // xmm4
  __int128 v90; // xmm5
  unsigned int v91; // [rsp+78h] [rbp+10h]
  __int64 v92; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a1 + 4);
  v3 = a1 + 44;
  v92 = 0LL;
  v4 = a1 + 46;
  v5 = 0;
  v6 = a1 + v2;
  v91 = 0;
  v7 = 0;
  v8 = 0LL;
  v10 = (char *)(a1 + 44);
  if ( !a2 )
  {
    if ( v4 <= v6 )
    {
      do
      {
        v11 = (unsigned __int8)v10[1];
        if ( (unsigned __int8)v11 < 2u )
          break;
        v12 = &v10[v11];
        if ( (unsigned __int64)&v10[v11] > v6 )
          break;
        v13 = v10;
        v10 += v11;
        v14 = *v13;
        if ( *v13 )
        {
          if ( v14 == 9 )
          {
            if ( (_BYTE)v11 == 16 )
            {
              v27 = (v13[8] & 1) == 0;
              goto LABEL_25;
            }
          }
          else
          {
            if ( v14 == 1 )
            {
              if ( (_BYTE)v11 == 12 )
                ++HalpInterruptIoApicCount;
              continue;
            }
            if ( v14 == 11 && (unsigned __int8)v11 >= 0x28u )
            {
              v27 = (v13[12] & 1) == 0;
              goto LABEL_25;
            }
          }
        }
        else if ( (_BYTE)v11 == 8 )
        {
          v27 = (v13[4] & 1) == 0;
LABEL_25:
          if ( !v27 )
            LODWORD(HalpInterruptProcessorCount) = HalpInterruptProcessorCount + 1;
          LODWORD(v8) = (_DWORD)v8 + 1;
          if ( (unsigned int)v8 > HalpInterruptMaxProcessors )
            HalpInterruptMaxProcessors = (int)v8;
        }
      }
      while ( (unsigned __int64)(v12 + 2) <= v6 );
    }
    HalpInterruptIoApic = HalpMmAllocateMemoryInternal((unsigned int)(16 * HalpInterruptIoApicCount), 1LL);
    if ( !HalpInterruptIoApic )
    {
      HalpInterruptSetProblemEx(0, 30, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 1735);
      return 3221225495LL;
    }
    v15 = 0;
    v16 = a1 + *(unsigned int *)(a1 + 4);
    if ( v4 <= v16 )
    {
      do
      {
        v17 = *(unsigned __int8 *)(v3 + 1);
        if ( (unsigned __int8)v17 < 2u || v3 + v17 > v16 )
          break;
        v18 = v3;
        v3 += v17;
        if ( *(_BYTE *)v18 == 1 && (_BYTE)v17 == 12 )
        {
          v64 = HalpInterruptIoApic;
          v65 = 2LL * v15++;
          *(_DWORD *)(HalpInterruptIoApic + 8 * v65) = *(unsigned __int8 *)(v18 + 2);
          *(_DWORD *)(v64 + 8 * v65 + 4) = *(_DWORD *)(v18 + 4);
          *(_DWORD *)(v64 + 8 * v65 + 8) = *(_DWORD *)(v18 + 8);
        }
      }
      while ( v3 + 2 <= v16 );
    }
    if ( HalpInterruptIoApicCount )
    {
      v19 = (unsigned int)HalpInterruptIoApicCount;
      v20 = (unsigned int)HalpInterruptIoApicCount;
      v21 = HalpInterruptIoApic + 8;
      v22 = (unsigned int *)(HalpInterruptIoApic + 12);
      do
      {
        v23 = *(v22 - 1);
        v24 = (_DWORD *)v21;
        *v22 = -1;
        v25 = v19;
        do
        {
          if ( *v24 > v23 )
          {
            v66 = *v24 - v23;
            if ( v66 < *v22 )
              *v22 = v66;
          }
          v24 += 4;
          --v25;
        }
        while ( v25 );
        v22 += 4;
        --v20;
      }
      while ( v20 );
    }
    return v91;
  }
  if ( v4 > v6 )
  {
LABEL_46:
    if ( (unsigned int)HalpInterruptProcessorCount > 1 )
    {
      v35 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
      {
        v36 = (_DWORD *)(HalpInterruptProcessorState + 8);
        while ( *v36 != HalpInterruptP0LocalId )
        {
          ++v35;
          v36 += 16;
          if ( v35 >= (unsigned int)HalpInterruptProcessorCount )
            goto LABEL_51;
        }
        v5 = v35;
      }
LABEL_51:
      v37 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
      v38 = (unsigned int)v37 & HalpInterruptP0LocalId;
      v39 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
      v40 = v39 & HalpInterruptP0LocalId;
      if ( v5 )
      {
        v72 = (_OWORD *)HalpInterruptProcessorState;
        v73 = (_OWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v5 << 6));
        v74 = *(_OWORD *)HalpInterruptProcessorState;
        v75 = *(_OWORD *)(HalpInterruptProcessorState + 16);
        v76 = *(_OWORD *)(HalpInterruptProcessorState + 32);
        v77 = *(_OWORD *)(HalpInterruptProcessorState + 48);
        *(_OWORD *)HalpInterruptProcessorState = *v73;
        v72[1] = v73[1];
        v72[2] = v73[2];
        v72[3] = v73[3];
        *v73 = v74;
        v73[1] = v75;
        v73[2] = v76;
        v73[3] = v77;
      }
      v41 = 1;
      if ( (unsigned int)HalpInterruptProcessorCount > 1 )
      {
        v42 = (_DWORD *)(HalpInterruptProcessorState + 72);
        do
        {
          if ( ((unsigned int)v37 & *v42) != (_DWORD)v38 )
            break;
          ++v41;
          v42 += 16;
        }
        while ( v41 < (unsigned int)HalpInterruptProcessorCount );
      }
      v43 = v41 + 1;
      if ( v41 + 1 < (unsigned int)HalpInterruptProcessorCount )
      {
        v44 = HalpInterruptProcessorState + ((unsigned __int64)v43 << 6);
        v45 = (unsigned int)HalpInterruptProcessorCount - v43;
        do
        {
          if ( ((unsigned int)v37 & *(_DWORD *)(v44 + 8)) == (_DWORD)v38 )
          {
            v78 = HalpInterruptProcessorState;
            v79 = (unsigned __int64)v41++ << 6;
            v80 = *(_OWORD *)(v79 + HalpInterruptProcessorState);
            v81 = *(_OWORD *)(v79 + HalpInterruptProcessorState + 16);
            v82 = *(_OWORD *)(v79 + HalpInterruptProcessorState + 32);
            v83 = *(_OWORD *)(v79 + HalpInterruptProcessorState + 48);
            *(_OWORD *)(v79 + HalpInterruptProcessorState) = *(_OWORD *)v44;
            *(_OWORD *)(v79 + v78 + 16) = *(_OWORD *)(v44 + 16);
            *(_OWORD *)(v79 + v78 + 32) = *(_OWORD *)(v44 + 32);
            *(_OWORD *)(v79 + v78 + 48) = *(_OWORD *)(v44 + 48);
            *(_OWORD *)v44 = v80;
            *(_OWORD *)(v44 + 16) = v81;
            *(_OWORD *)(v44 + 32) = v82;
            *(_OWORD *)(v44 + 48) = v83;
          }
          v44 += 64LL;
          --v45;
        }
        while ( v45 );
      }
      if ( v41 > 1 )
        HalpInterruptHyperThreading = 1;
      v46 = HalpInterruptProcessorState;
      HalpInterruptSortProcessorTable(HalpInterruptProcessorState + 64, v41 - 1, v37, v38);
      v48 = v41;
      if ( v41 < (unsigned int)HalpInterruptProcessorCount )
      {
        v49 = (_DWORD *)(((unsigned __int64)v41 << 6) + v46 + 8);
        do
        {
          if ( (v39 & *v49) != v40 )
            break;
          ++v41;
          v49 += 16;
        }
        while ( v41 < (unsigned int)HalpInterruptProcessorCount );
      }
      v50 = v41 + 1;
      if ( v41 + 1 < (unsigned int)HalpInterruptProcessorCount )
      {
        v84 = HalpInterruptProcessorState + ((unsigned __int64)v50 << 6);
        v47 = (unsigned int)HalpInterruptProcessorCount - v50;
        do
        {
          if ( (v39 & *(_DWORD *)(v84 + 8)) == v40 )
          {
            v85 = HalpInterruptProcessorState;
            v86 = (unsigned __int64)v41++ << 6;
            v87 = *(_OWORD *)(v86 + HalpInterruptProcessorState);
            v88 = *(_OWORD *)(v86 + HalpInterruptProcessorState + 16);
            v89 = *(_OWORD *)(v86 + HalpInterruptProcessorState + 32);
            v90 = *(_OWORD *)(v86 + HalpInterruptProcessorState + 48);
            *(_OWORD *)(v86 + HalpInterruptProcessorState) = *(_OWORD *)v84;
            *(_OWORD *)(v86 + v85 + 16) = *(_OWORD *)(v84 + 16);
            *(_OWORD *)(v86 + v85 + 32) = *(_OWORD *)(v84 + 32);
            *(_OWORD *)(v86 + v85 + 48) = *(_OWORD *)(v84 + 48);
            *(_OWORD *)v84 = v87;
            *(_OWORD *)(v84 + 16) = v88;
            *(_OWORD *)(v84 + 32) = v89;
            *(_OWORD *)(v84 + 48) = v90;
          }
          v84 += 64LL;
          --v47;
        }
        while ( v47 );
      }
      HalpInterruptSortProcessorTable(HalpInterruptProcessorState + (v48 << 6), v41 - (unsigned int)v48, v47, v48);
      HalpInterruptSortProcessorTable(
        HalpInterruptProcessorState + ((unsigned __int64)v41 << 6),
        (unsigned int)HalpInterruptProcessorCount - v41,
        v51,
        v52);
      if ( HalpInterruptHyperThreading && HalpInterruptBlockHyperthreading )
        HalpInterruptBlockSmtSiblings();
    }
    return v91;
  }
  while ( 1 )
  {
    v28 = v10 + 1;
    v29 = (unsigned __int8)v10[1];
    if ( (unsigned __int8)v29 < 2u || (unsigned __int64)&v10[v29] > v6 )
    {
LABEL_45:
      v5 = 0;
      goto LABEL_46;
    }
    v30 = v10;
    v10 += v29;
    v31 = *v30;
    if ( !*v30 )
    {
      if ( (_BYTE)v29 != 8 )
        goto LABEL_44;
      v53 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v7 << 6));
      if ( (v30[4] & 1) == 0 )
        goto LABEL_44;
      *v53 = (unsigned __int8)v30[3];
      v53[1] = (unsigned __int8)v30[2];
      v54 = (unsigned __int8)v30[3];
LABEL_73:
      v53[2] = v54;
      ++v7;
      goto LABEL_44;
    }
    if ( v31 == 9 )
    {
      if ( (_BYTE)v29 != 16 )
        goto LABEL_44;
      v53 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v7 << 6));
      if ( (v30[8] & 1) == 0 )
        goto LABEL_44;
      *v53 = *((_DWORD *)v30 + 1);
      v53[1] = *((_DWORD *)v30 + 3);
      v54 = *((_DWORD *)v30 + 1);
      goto LABEL_73;
    }
    if ( v31 == 11 )
    {
      if ( (unsigned __int8)v29 >= 0x28u && ((unsigned int)HalpInterruptGicVersion < 3 || (unsigned __int8)v29 >= 0x4Cu) )
      {
        v67 = HalpInterruptProcessorState + ((unsigned __int64)v7 << 6);
        if ( (v30[12] & 1) != 0 )
        {
          v68 = *((_QWORD *)v30 + 3);
          if ( *((_DWORD *)v30 + 4) == 1 && v68 )
          {
            v69 = HalpInterruptMapParkedPage(v68, HalpInterruptProcessorState + ((unsigned __int64)v7 << 6), v8);
            v91 = v69;
            if ( v69 == -1073741670 )
              return 3221225626LL;
            if ( v69 >= 0 )
            {
              if ( (unsigned int)HalpInterruptGicVersion < 3 )
                v70 = *((_DWORD *)v30 + 1);
              else
                v70 = (*(_QWORD *)(v30 + 68) >> 8) & 0xFF000000 | *((_DWORD *)v30 + 17) & 0xFFFFFF;
              *(_DWORD *)v67 = v70;
              *(_DWORD *)(v67 + 4) = *((_DWORD *)v30 + 2);
              *(_DWORD *)(v67 + 8) = *((_DWORD *)v30 + 1);
              *(_DWORD *)(v67 + 40) = *((_DWORD *)v30 + 5);
              if ( *v28 < 0x4Cu )
              {
                *(_QWORD *)(v67 + 48) = 0LL;
                *(_BYTE *)(v67 + 45) = 0;
              }
              else
              {
                *(_QWORD *)(v67 + 48) = *(_QWORD *)(v30 + 68);
                *(_BYTE *)(v67 + 45) = 1;
                if ( *v28 >= 0x4Du )
                  *(_BYTE *)(v67 + 44) = v30[76];
              }
              if ( (v30[12] & 2) != 0 )
                *(_BYTE *)(v67 + 14) = 1;
              ++v7;
              v91 = v69;
            }
          }
          else
          {
            v91 = -1073741811;
          }
        }
      }
      goto LABEL_44;
    }
    if ( v31 == 3 )
      break;
    if ( v31 == 4 && (_BYTE)v29 == 6 )
    {
LABEL_38:
      MemoryInternal = HalpMmAllocateMemoryInternal(24LL, 1LL);
      if ( !MemoryInternal )
        return 3221225626LL;
      *(_OWORD *)MemoryInternal = 0LL;
      *(_QWORD *)(MemoryInternal + 16) = 0LL;
      *(_BYTE *)(MemoryInternal + 8) = 1;
      if ( *v30 == 4 )
      {
        v33 = (unsigned __int8)v30[2];
        *(_DWORD *)(MemoryInternal + 12) = v33;
        if ( v30[2] == -1 )
          v33 = -1;
        *(_DWORD *)(MemoryInternal + 12) = v33;
        *(_DWORD *)(MemoryInternal + 16) = *(unsigned __int16 *)(v30 + 3);
        v34 = v30[5];
      }
      else
      {
        *(_DWORD *)(MemoryInternal + 12) = *((_DWORD *)v30 + 1);
        *(_DWORD *)(MemoryInternal + 16) = *((unsigned __int16 *)v30 + 1);
        v34 = v30[8];
      }
      *(_DWORD *)(MemoryInternal + 20) = -(v34 != 0) - 4;
      *(_QWORD *)MemoryInternal = HalpInterruptNmiSources;
      HalpInterruptNmiSources = MemoryInternal;
      goto LABEL_44;
    }
    if ( v31 == 10 )
    {
      if ( (_BYTE)v29 == 12 )
        goto LABEL_38;
    }
    else if ( v31 == 2 && (_BYTE)v29 == 10 )
    {
      if ( (int)HalpInterruptGsiToLine(*((unsigned int *)v30 + 1), &v92) >= 0 )
      {
        v55 = HalpMmAllocateMemoryInternal(40LL, 1LL);
        v56 = v55;
        if ( !v55 )
          return 3221225626LL;
        *(_OWORD *)v55 = 0LL;
        *(_OWORD *)(v55 + 16) = 0LL;
        *(_QWORD *)(v55 + 32) = 0LL;
        v57 = (unsigned __int8)v30[3];
        if ( v57 >= 8 )
        {
          v57 -= 8;
          v58 = 45057;
        }
        else
        {
          v58 = 45056;
        }
        *(_DWORD *)(v56 + 16) = v58;
        *(_DWORD *)(v56 + 20) = v57;
        *(_QWORD *)(v56 + 24) = v92;
        v59 = *((_WORD *)v30 + 4) & 3;
        if ( !v59 || (v27 = v59 == 1, v60 = 2, v27) )
          v60 = 1;
        *(_DWORD *)(v56 + 36) = v60;
        v61 = *((_WORD *)v30 + 4) & 0xC;
        v62 = !v61 || v61 == 4;
        *(_DWORD *)(v56 + 32) = v62;
        v8 = &HalpInterruptOverrides;
        v63 = (__int64 *)qword_140C60998;
        if ( *(__int64 **)qword_140C60998 != &HalpInterruptOverrides )
          __fastfail(3u);
        *(_QWORD *)v56 = &HalpInterruptOverrides;
        *(_QWORD *)(v56 + 8) = v63;
        *v63 = v56;
        qword_140C60998 = v56;
      }
      v91 = 0;
    }
LABEL_44:
    if ( (unsigned __int64)(v10 + 2) > v6 )
      goto LABEL_45;
  }
  if ( (_BYTE)v29 != 8 )
    goto LABEL_44;
  v71 = HalpMmAllocateMemoryInternal(24LL, 1LL);
  if ( v71 )
  {
    *(_BYTE *)(v71 + 8) = 0;
    *(_DWORD *)(v71 + 16) = *((unsigned __int16 *)v30 + 1);
    *(_DWORD *)(v71 + 20) = *((_DWORD *)v30 + 1);
    *(_QWORD *)v71 = HalpInterruptNmiSources;
    HalpInterruptNmiSources = v71;
    goto LABEL_44;
  }
  return 3221225626LL;
}
