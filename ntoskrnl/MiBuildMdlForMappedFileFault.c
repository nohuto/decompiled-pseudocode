__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // r12
  int v13; // r13d
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  unsigned int v24; // eax
  __int64 v25; // r13
  ULONG v26; // r11d
  unsigned int SizeOfBitMap; // r10d
  unsigned __int64 *v28; // r12
  unsigned __int64 v29; // rdx
  unsigned int *v30; // r9
  unsigned int *v31; // r8
  unsigned int *v32; // rcx
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  ULONG v36; // r15d
  _DWORD *v37; // rax
  unsigned int v38; // esi
  ULONG v39; // esi
  unsigned __int64 v40; // r14
  __int16 v41; // r13
  __int64 v42; // rdi
  int v43; // r13d
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r15
  char v54; // al
  __int64 v55; // rax
  unsigned int v56; // eax
  unsigned int v57; // eax
  signed __int64 v58; // rax
  __int64 v59; // r15
  signed __int64 v60; // rax
  unsigned int v61; // ecx
  char v62; // al
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 result; // rax
  ULONG v68; // r14d
  int v69; // esi
  __int64 v70; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v72; // rax
  __int64 v73; // r8
  struct _LIST_ENTRY *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  struct _LIST_ENTRY *v77; // rcx
  __int64 v78; // rcx
  signed __int64 v79; // rdx
  ULONG v81; // [rsp+48h] [rbp-B8h]
  ULONG v82; // [rsp+50h] [rbp-B0h]
  __int64 v83; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+60h] [rbp-A0h]
  __int64 v85; // [rsp+68h] [rbp-98h]
  unsigned __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v96; // [rsp+C0h] [rbp-40h]
  __int128 v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+E0h] [rbp-20h]
  signed __int64 v99; // [rsp+E8h] [rbp-18h]
  __int128 v100; // [rsp+F0h] [rbp-10h]
  __int128 v101; // [rsp+100h] [rbp+0h]
  __int128 v102; // [rsp+110h] [rbp+10h]
  RTL_BITMAP BitMapHeader; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v104[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v105; // [rsp+160h] [rbp+60h]
  int v106; // [rsp+168h] [rbp+68h]

  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v12 = a6;
  v91 = a8;
  v13 = a4;
  v90 = a10;
  v93 = *(_QWORD *)(a1 + 232);
  v85 = a1;
  BitMapHeader.Buffer = (unsigned int *)v104;
  v86 = a2;
  v87 = a6;
  v84 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v104, 0, sizeof(v104));
  v105 = 0LL;
  v106 = 0;
  v94 = v10;
  RtlSetAllBits(&BitMapHeader);
  v92 = 0LL;
  v16 = a2;
  if ( a2 <= a3 )
  {
    do
    {
      v17 = *(_QWORD *)v16;
      if ( v16 >= 0xFFFFF6FB7DBED000uLL
        && v16 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v72 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
          v73 = v17 | 0x20;
          if ( (v72 & 0x20) == 0 )
            v73 = *(_QWORD *)v16;
          v17 = v73;
          if ( (v72 & 0x42) != 0 )
            v17 = v73 | 0x42;
        }
      }
      if ( v17 == v10 )
      {
        v18 = (char *)BitMapHeader.Buffer + ((unsigned __int64)(((unsigned int)v16 >> 3) & 0x1FF) >> 3);
        v19 = (char)*v18;
        _bittestandreset(&v19, ((unsigned int)v16 >> 3) & 7);
        *v18 = v19;
        ++v11;
      }
      v16 += 8LL;
    }
    while ( v16 <= a3 );
    v12 = v87;
    v13 = a4;
  }
  v20 = v11;
  if ( v11 > a5 )
    v20 = a5;
  if ( v12 == -1 )
  {
    v21 = 0LL;
    v83 = 0LL;
    v84 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * v12 - 0x220000000000LL, 0x3FFFFFFFFFLL, 0);
    v83 = 48 * v12 - 0x220000000000LL;
    v21 = 1LL;
    v84 = 1LL;
  }
  if ( v21 == v20 )
  {
    v23 = a9;
  }
  else
  {
    v22 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C657C0 && (v10 & 0x10) == 0 )
        v22 = v10 & ~qword_140C657C0;
      v92 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v22 = *(_QWORD *)(v92 + 16);
    }
    v23 = a9;
    MiGetHardFaultPages((unsigned int)&v83, v20, v13, v91, a9, v85, v22, v90);
    v21 = v84;
  }
  if ( v21 != v11 )
  {
    if ( !v21 )
    {
      if ( v91 && !*(_QWORD *)(v23 + 120) )
        *(_BYTE *)(v91 + 1) = 2;
      return 0LL;
    }
    v68 = ((unsigned int)v93 >> 3) & 0x1FF;
    v69 = v11 - MiReduceMappedFileReadBehind(&BitMapHeader, v68);
    if ( v21 != v69 )
      MiReduceMappedFileReadAhead(&BitMapHeader, v68, v69 - v21);
  }
  LODWORD(v90) = v21;
  v24 = MiProtectionToCacheAttribute(a7);
  v25 = v85;
  v26 = 0;
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v89 = v24;
  v28 = (unsigned __int64 *)(v85 + 320);
  if ( BitMapHeader.SizeOfBitMap )
  {
    v29 = v86 & 0xFFFFFFFFFFFFF000uLL;
    v86 &= 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      if ( SizeOfBitMap <= v26 )
      {
        v36 = v26;
        v39 = 0;
        v82 = v26;
        v81 = 0;
      }
      else
      {
        v25 = v85;
        v81 = 0;
        v30 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
        v31 = &BitMapHeader.Buffer[(unsigned __int64)v26 >> 5];
        v32 = v31 + 1;
        v33 = ((1 << (v26 & 0x1F)) - 1) | *v31;
        while ( 1 )
        {
          v34 = ~v33;
          if ( v34 )
            break;
          if ( v32 > v30 )
            goto LABEL_98;
          v33 = v31[1];
          ++v31;
          ++v32;
        }
        _BitScanForward64((unsigned __int64 *)&v35, v34);
        v36 = v35 + 32 * (v31 - BitMapHeader.Buffer);
        v82 = v36;
        if ( v36 > SizeOfBitMap )
        {
LABEL_98:
          v39 = 0;
          v36 = SizeOfBitMap;
          v82 = SizeOfBitMap;
          goto LABEL_31;
        }
        LOWORD(v10) = v94;
        for ( LODWORD(v37) = ~(((1 << v35) - 1) | v34); ; LODWORD(v37) = *v37 )
        {
          if ( (_DWORD)v37 )
          {
            _BitScanForward64((unsigned __int64 *)&v37, (unsigned int)v37);
            goto LABEL_28;
          }
          v37 = v31 + 1;
          if ( v31 + 1 > v30 )
            break;
          ++v31;
        }
        LODWORD(v37) = 32;
LABEL_28:
        v38 = (_DWORD)v37 + 32 * (v31 - BitMapHeader.Buffer);
        if ( v38 > SizeOfBitMap )
          v38 = SizeOfBitMap;
        v39 = v38 - v36;
        v81 = v39;
LABEL_31:
        v29 = v86;
      }
      if ( v26 )
      {
        if ( v36 != v26 )
        {
          v70 = v36 - v26;
          do
          {
            *v28++ = qword_140C69388;
            --v70;
          }
          while ( v70 );
        }
        *(_DWORD *)(v25 + 192) |= 0x20000u;
      }
      v40 = v29 + 8LL * v36;
      RtlSetBits(&BitMapHeader, v36, v39);
      if ( v39 )
        break;
LABEL_57:
      if ( v21 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v26 = v36 + v81;
        v29 = v86;
        if ( v36 + v81 != BitMapHeader.SizeOfBitMap )
          continue;
      }
      goto LABEL_58;
    }
    v88 = v25 + 32;
    v41 = v10;
    v42 = v88;
    v43 = v41 & 0x400;
    v87 = v39;
    while ( 1 )
    {
      v44 = v83;
      v45 = *(_QWORD *)(v83 + 24) & 0xFFFFFFFFFFLL;
      if ( v45 == 0x3FFFFFFFFFLL )
        v83 = 0LL;
      else
        v83 = 48 * v45 - 0x220000000000LL;
      v84 = v21 - 1;
      v46 = 0xFFFFF6FB7DBED000uLL;
      v47 = 0xAAAAAAAAAAAAAAABuLL * ((v44 + 0x220000000000LL) >> 4);
      *v28++ = v47;
      v48 = *(_QWORD *)v40;
      if ( v40 >= 0xFFFFF6FB7DBED000uLL
        && v40 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v48 & 1) != 0
        && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
      {
        v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v74 )
        {
          v75 = *((_QWORD *)&v74->Flink + ((v40 >> 3) & 0x1FF));
          v76 = v48 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v76 = *(_QWORD *)v40;
          v48 = v76;
          if ( (v75 & 0x42) != 0 )
            v48 = v76 | 0x42;
        }
      }
      if ( !v43 )
        v48 = *(_QWORD *)(v92 + 16);
      v49 = v91;
      *(_QWORD *)(v44 + 16) = v48;
      if ( v49 )
        MiAdvanceFaultList(v49);
      v50 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v51 = *(_QWORD *)v50;
      if ( v50 >= v46
        && v50 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v51 & 1) != 0
        && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
      {
        v77 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v77 )
        {
          v78 = *((_QWORD *)&v77->Flink + ((v50 >> 3) & 0x1FF));
          if ( (v78 & 0x20) != 0 )
            v51 |= 0x20uLL;
          if ( (v78 & 0x42) != 0 )
            v51 |= 0x42uLL;
        }
      }
      v95 = v51;
      v52 = MI_READ_PTE_LOCK_FREE(&v95);
      LODWORD(v88) = 0;
      v53 = v52 >> 12;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v88);
        while ( *(__int64 *)(v44 + 24) < 0 );
      }
      v54 = *(_BYTE *)(v44 + 34);
      *(_QWORD *)(v44 + 40) |= 0x8000000000000000uLL;
      *(_QWORD *)(v44 + 24) &= 0xFFFFFF0000000000uLL;
      *(_WORD *)(v44 + 32) = 1;
      *(_BYTE *)(v44 + 34) = v54 | 0x20;
      v55 = v85;
      *(_QWORD *)v44 = v42;
      v56 = *(_DWORD *)(v55 + 192);
      if ( v40 == v93 )
        v57 = v56 >> 9;
      else
        v57 = v56 >> 12;
      *(_BYTE *)(v44 + 35) = *(_BYTE *)(v44 + 35) & 0xF8 | v57 & 7;
      v58 = *(_QWORD *)(v44 + 40);
      v59 = v53 & 0xFFFFFFFFFFLL;
      v98 = 0LL;
      v99 = v58;
      v96 = 0LL;
      v97 = 0LL;
      v100 = 0LL;
      v101 = 0LL;
      v102 = 0LL;
      v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 40), v59 | v58 & 0xFFFFFF0000000000uLL, v58);
      *((_QWORD *)&v102 + 1) = v60;
      if ( v99 != v60 )
      {
        do
        {
          v99 = v60;
          v79 = v60;
          v60 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v44 + 40),
                  v59 | v60 & 0xFFFFFF0000000000uLL,
                  v60);
          *((_QWORD *)&v102 + 1) = v60;
        }
        while ( v79 != v60 );
      }
      v61 = v89;
      v62 = *(_BYTE *)(v44 + 34) & 0xF8 | 2;
      *(_QWORD *)(v44 + 8) = v40;
      *(_BYTE *)(v44 + 34) = v62;
      if ( *(unsigned __int8 *)(v44 + 34) >> 6 != v61 )
        MiChangePageAttribute(v44, v61, 1LL, 0xFFFFFF0000000000uLL);
      *(_QWORD *)(v44 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
      *(_QWORD *)(v44 + 24) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !v43 )
        goto LABEL_55;
      v63 = 32 * (a7 & 0x1F | ((v47 & 0xFFFFFFFFFFLL) << 7) | 0x40);
      if ( qword_140C657C0 )
      {
        if ( (qword_140C657C0 & v63) != 0 )
          v63 |= 0x10uLL;
        else
          v63 |= qword_140C657C0;
      }
      if ( (unsigned int)MiPteInShadowRange(v40) )
      {
        if ( (unsigned int)MiPteHasShadow(v65, v64, v66) )
        {
          if ( !HIBYTE(word_140C6697C) && (v63 & 1) != 0 )
            v63 |= 0x8000000000000000uLL;
          *(_QWORD *)v40 = v63;
          MiWritePteShadow(v40, v63);
          goto LABEL_55;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v63 & 1) != 0 )
        {
          v63 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v40 = v63;
LABEL_55:
      v21 = v84;
      v40 += 8LL;
      if ( !--v87 )
      {
        LOWORD(v10) = v94;
        v36 = v82;
        v25 = v85;
        goto LABEL_57;
      }
    }
  }
LABEL_58:
  result = (unsigned int)v90;
  *(_DWORD *)(v25 + 184) = (unsigned int)(((__int64)v28 - v25 - 320) >> 3) << 12;
  return result;
}
