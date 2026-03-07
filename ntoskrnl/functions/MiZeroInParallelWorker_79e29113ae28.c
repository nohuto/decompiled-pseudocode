__int64 __fastcall MiZeroInParallelWorker(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  int v3; // r14d
  int v4; // edi
  unsigned int v5; // r8d
  volatile signed __int32 *v6; // rcx
  unsigned __int64 v7; // rbp
  volatile signed __int32 **v8; // rdx
  __int64 v9; // rcx
  volatile signed __int32 *v11; // r15
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned int v14; // r12d
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  unsigned __int64 UltraMapping; // r9
  int v18; // r8d
  unsigned __int64 v19; // rdx
  char v20; // cl
  int v21; // esi
  int v22; // esi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r10
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r11
  unsigned __int64 LeafVa; // rdi
  int v29; // r9d
  int v30; // eax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  unsigned int v33; // esi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  unsigned __int64 *v37; // r14
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r14
  unsigned int v43; // edi
  unsigned __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int64 *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int PfnPageSizeIndex; // eax
  unsigned __int64 v52; // rcx
  int v53; // eax
  unsigned __int64 v54; // rcx
  unsigned int v55; // esi
  unsigned __int64 v56; // rbx
  unsigned __int8 *v57; // rdi
  int v58; // [rsp+30h] [rbp-128h]
  int v59; // [rsp+34h] [rbp-124h]
  int v60; // [rsp+38h] [rbp-120h]
  unsigned int v61; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v63; // [rsp+48h] [rbp-110h]
  volatile signed __int32 *v64; // [rsp+50h] [rbp-108h]
  __int64 v65; // [rsp+58h] [rbp-100h]
  __int64 v66; // [rsp+60h] [rbp-F8h]
  __int64 v67; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v68; // [rsp+70h] [rbp-E8h]
  volatile signed __int32 *v69; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v70; // [rsp+88h] [rbp-D0h]
  __int128 v71; // [rsp+90h] [rbp-C8h] BYREF
  _OWORD v72[8]; // [rsp+A0h] [rbp-B8h] BYREF

  v1 = a1;
  v71 = 0LL;
  memset(v72, 0, sizeof(v72));
  v2 = *(_DWORD *)(v1 + 24);
  v3 = *(_DWORD *)(v1 + 20);
  v63 = v2;
  v60 = v3;
  MiInitializePageColorBase(0LL, (unsigned int)(*(_DWORD *)(v1 + 64) + 1), &v71);
  v4 = 15;
  v58 = 15;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v72, (__int64)&v71, 15, 0) )
  {
    v4 = 0;
    v58 = 0;
  }
  v5 = 0;
  v6 = (volatile signed __int32 *)(v1 + 112);
  v69 = (volatile signed __int32 *)(v1 + 112);
  v61 = 0;
  if ( v2 )
  {
    v7 = 1LL;
    while ( 1 )
    {
      v8 = (volatile signed __int32 **)(v6 + 4);
      if ( *v8 == (volatile signed __int32 *)v8 || *v6 || _InterlockedCompareExchange(v6, 1, 0) )
        goto LABEL_7;
      v11 = *v8;
      v64 = *v8;
      if ( *v8 != (volatile signed __int32 *)v8 )
        break;
LABEL_68:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 76), 0xFFFFFFFF) == 1 )
      {
        KeSignalGate(v1 + 88, 1LL);
        goto LABEL_8;
      }
LABEL_7:
      ++v5;
      v6 += 10;
      v61 = v5;
      v69 = v6;
      if ( v5 >= v2 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v12 = 3LL;
      v13 = (*((_QWORD *)v11 + 5) >> 40) & 1LL;
      if ( ((*((_QWORD *)v11 + 5) >> 40) & 1) != 0 )
      {
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(v11, v8, 3LL, 0x140000000uLL);
        v12 = PfnPageSizeIndex;
        if ( PfnPageSizeIndex == -1 )
        {
          v12 = 3LL;
        }
        else if ( PfnPageSizeIndex < 3 )
        {
          v7 = MiLargePageSizes[PfnPageSizeIndex];
        }
      }
      v68 = v7;
      if ( (unsigned int)v12 <= 2 && (*(_DWORD *)(v1 + 16) & 8) == 0 && *((unsigned __int8 *)v11 + 34) >> 6 != v3 )
      {
        MiZeroAndConvertPage((_DWORD)v6, (_DWORD)v11, v12, v3, *(_DWORD *)(v1 + 16));
        goto LABEL_66;
      }
      if ( v4 )
        break;
      v55 = 0;
      v56 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v11 + 0x88000000000LL) >> 4);
      if ( v7 )
      {
        v57 = (unsigned __int8 *)v11 + 34;
        do
        {
          MiZeroPhysicalPage(v6, v56, 0LL, *v57 >> 6);
          ++v55;
          v57 += 48;
          ++v56;
        }
        while ( v55 < v7 );
        goto LABEL_64;
      }
LABEL_65:
      v1 = a1;
LABEL_66:
      v11 = *(volatile signed __int32 **)v11;
      v7 = 1LL;
      v6 = v69;
      v64 = v11;
      *((_QWORD *)v69 + 1) -= v68;
      v8 = (volatile signed __int32 **)(v69 + 4);
      if ( v11 == v69 + 4 )
      {
        v5 = v61;
        v2 = v63;
        goto LABEL_68;
      }
    }
    v14 = 3;
    v59 = 3;
    if ( v13 && (v59 = MiGetPfnPageSizeIndex(v11, v8, v12, 0x140000000uLL), v14 = v59, v59 == -1) )
    {
      v14 = 3;
      v59 = 3;
      v15 = 3LL;
      v65 = 3LL;
    }
    else
    {
      v15 = v14;
      v65 = v14;
      if ( v14 < 3 )
      {
        _mm_lfence();
        v16 = MiLargePageSizes[v14];
LABEL_21:
        v66 = v16;
        UltraMapping = MiGetUltraMapping(&v72[2 * v15], v14, v16);
        v70 = UltraMapping;
        v18 = 4;
        v19 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v11 + 0x88000000000LL) >> 4);
        v20 = *((_BYTE *)v11 + 34) >> 6;
        if ( v20 )
        {
          if ( v20 == 2 )
            v18 = 28;
        }
        else
        {
          v18 = 12;
        }
        v21 = -1543503872;
        if ( v14 > 1 )
          v21 = -1610612736;
        v22 = v18 | v21;
        v67 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = v67;
        if ( v15 <= 1 )
        {
          v52 = 2 - v15;
          do
          {
            v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v52;
          }
          while ( v52 );
        }
        v24 = 0x140000000uLL;
        v25 = (v19 & 0xFFFFFFFFFFLL) << 12;
        v26 = v25 | MmProtectToPteMask[v22 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v23 < 0xFFFFF68000000000uLL || (v27 = 0xFFFFF6FFFFFFFFFFuLL, v23 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v26 = v25 | MmProtectToPteMask[v22 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
          v29 = v22 & 0x4000000;
        }
        else
        {
          LeafVa = (__int64)(v23 << 25) >> 16;
          if ( v23 >= 0xFFFFF6FB40000000uLL && v23 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v23 == 0xFFFFF6FB7DBEDF68uLL )
            {
              v26 = v25 | MmProtectToPteMask[v22 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
            }
            else if ( (v22 & 0x4000000) == 0 )
            {
              v26 = v25 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v22 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
            }
            v53 = MiUserPdeOrAbove(v23);
            v27 = 0xFFFFF6FFFFFFFFFFuLL;
            v24 = 0x140000000uLL;
            if ( v53 )
              v26 |= 4uLL;
          }
          if ( v23 <= 0xFFFFF6BFFFFFFF78uLL )
            v26 |= 4uLL;
          v29 = v22 & 0x4000000;
          if ( (v22 & 0x4000000) != 0 )
            LeafVa = MiGetLeafVa((__int64)(v23 << 25) >> 16);
          if ( LeafVa < 0xFFFF800000000000uLL )
          {
            v30 = HIBYTE(word_140C6697C);
            goto LABEL_41;
          }
          if ( *(_BYTE *)(((LeafVa >> 39) & 0x1FF) - 256 + v24 + 13017176) != 1
            && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v27) )
          {
            if ( LeafVa < qword_140C6A1D8 || LeafVa > qword_140C66CF0 )
              v30 = (unsigned __int8)word_140C6697C;
            else
              v30 = HIBYTE(word_140C6697C);
LABEL_41:
            if ( v30 )
              v26 |= 0x100uLL;
          }
        }
        if ( v22 < 0 )
          v26 |= 0x42uLL;
        v31 = ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ v26;
        v32 = v31 | 0x80;
        if ( !v29 )
          v32 = v31;
        v33 = 0;
        v34 = v32 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        if ( v14 <= 2 )
        {
          v35 = *(_QWORD *)(v24 + 8 * v15 + 90800);
          if ( !v35 )
            goto LABEL_55;
        }
        else
        {
          v35 = 1LL;
        }
        v36 = 0LL;
        while ( 1 )
        {
          v37 = (unsigned __int64 *)(v23 + 8 * v36);
          v38 = v34;
          if ( (unsigned int)MiPteInShadowRange(v37) )
          {
            if ( (unsigned int)MiPteHasShadow(v40, v39, v41) )
            {
              if ( !HIBYTE(word_140C6697C) && (v34 & 1) != 0 )
                v38 = v34 | 0x8000000000000000uLL;
              *v37 = v38;
              MiWritePteShadow(v37, v38);
              goto LABEL_53;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v34 & 1) != 0 )
            {
              v38 = v34 | 0x8000000000000000uLL;
            }
          }
          *v37 = v38;
LABEL_53:
          ++v33;
          v34 ^= (v34 ^ (v34 + 4096)) & 0xFFFFFFFFFF000LL;
          v36 = v33;
          if ( v33 >= v35 )
          {
            v14 = v59;
            v15 = v65;
            v16 = v66;
LABEL_55:
            KeZeroPages(v70, v16 << 12);
            v42 = v67;
            if ( v15 <= 1 )
            {
              v54 = 2 - v15;
              do
              {
                v42 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                --v54;
              }
              while ( v54 );
            }
            v43 = 0;
            if ( v14 > 2 )
            {
              v44 = 1LL;
              goto LABEL_59;
            }
            v44 = MiPtesToSupportLargePageSizes[v15];
            if ( v44 )
            {
LABEL_59:
              v45 = 0LL;
              do
              {
                v46 = ZeroPte;
                v47 = (unsigned __int64 *)(v42 + 8 * v45);
                if ( (unsigned int)MiPteInShadowRange(v47) )
                {
                  if ( (unsigned int)MiPteHasShadow(v49, v48, v50) )
                  {
                    if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                      v46 = ZeroPte | 0x8000000000000000uLL;
                    *v47 = v46;
                    MiWritePteShadow(v47, v46);
                    goto LABEL_62;
                  }
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                    && (ZeroPte & 1) != 0 )
                  {
                    v46 = ZeroPte | 0x8000000000000000uLL;
                  }
                }
                *v47 = v46;
LABEL_62:
                v45 = ++v43;
              }
              while ( v43 < v44 );
            }
            v3 = v60;
            v11 = v64;
LABEL_64:
            v4 = v58;
            goto LABEL_65;
          }
        }
      }
    }
    v16 = 1LL;
    goto LABEL_21;
  }
LABEL_8:
  if ( v4 )
    MiDeleteUltraThreadContext(v72);
  v9 = *(_QWORD *)(v1 + 8);
  if ( v9 )
    PsDereferencePartition(v9);
  return MiDereferencePageChains(v1);
}
