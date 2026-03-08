/*
 * XREFs of MiResolveSharedZeroFault @ 0x14031E5C0
 * Callers:
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned int *v1; // r14
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // r9
  unsigned int v4; // r15d
  unsigned __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 result; // rax
  __int64 v16; // rdi
  char v17; // r15
  unsigned int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r14
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r10
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  _QWORD *v36; // rax
  unsigned __int64 *v37; // r9
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  unsigned __int64 v42; // r13
  signed __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r10
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int128 v51; // xmm1
  __int128 v52; // xmm1
  __int128 v53; // xmm1
  struct _LIST_ENTRY *Flink; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // r9
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  struct _LIST_ENTRY *v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  struct _LIST_ENTRY *v64; // rax
  __int64 v65; // rax
  char v66; // r8
  __int64 v67; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v68; // [rsp+28h] [rbp-D8h]
  unsigned int v69; // [rsp+30h] [rbp-D0h]
  __int128 v70; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-B8h]
  _OWORD v72[7]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v80; // [rsp+F8h] [rbp-8h]
  __int64 v81; // [rsp+100h] [rbp+0h]
  __int128 v82; // [rsp+108h] [rbp+8h]
  __int128 v83; // [rsp+118h] [rbp+18h]
  __int128 v84; // [rsp+128h] [rbp+28h]
  __int128 v85; // [rsp+138h] [rbp+38h]
  unsigned __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 v88; // [rsp+1A8h] [rbp+A8h]
  int v89; // [rsp+1B0h] [rbp+B0h] BYREF
  int v90; // [rsp+1B8h] [rbp+B8h] BYREF

  v74 = 0LL;
  v1 = a1;
  memset(v72, 0, 0x68uLL);
  v2 = (unsigned __int64 *)*((_QWORD *)v1 + 1);
  v70 = 0LL;
  v87 = *v2;
  v3 = v87;
  v4 = v1[8];
  v5 = (unsigned __int64 *)(((*v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = *((_QWORD *)v1 + 3);
  v69 = v4;
  v7 = 0LL;
  v79 = 0LL;
  v8 = (__int64)((((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16;
  v9 = 0;
  while ( v8 > 0x7FFFFFFEFFFFLL )
  {
    ++v9;
    v8 = (__int64)(v8 << 25) >> 16;
    if ( v9 >= 3 )
      goto LABEL_8;
  }
  v10 = (((unsigned __int64)((__int64)((((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16) >> 18) & 0x3FFFFFF8)
      - 0x904C0000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v55 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
      v56 = v11 | 0x20;
      if ( (v55 & 0x20) == 0 )
        v56 = v11;
      v11 = v56;
      if ( (v55 & 0x42) != 0 )
        v11 = v56 | 0x42;
    }
  }
  v73 = v11;
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v73) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  v89 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v89);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 16) ^= ((unsigned int)*(_QWORD *)(v12 + 16) ^ ((unsigned int)*(_QWORD *)(v12 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
  v84 = 0LL;
  v85 = 0LL;
  if ( (unsigned __int64)((v13 >> 47) + 1) <= 1 )
  {
    *(_QWORD *)&v84 = (((unsigned __int64)v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v84 + 1) = (((unsigned __int64)v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v85 = ((*((_QWORD *)&v84 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v85 + 1) = (((unsigned __int64)v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v3 = v87;
LABEL_8:
  if ( v4 == 256 )
  {
    v14 = v6 << 16;
    result = v14 | 0x400;
    if ( qword_140C657C0 )
    {
      result = v14 | 0x410;
      if ( ((v14 | 0x400) & qword_140C657C0) == 0 )
        result = qword_140C657C0 | v14 | 0x400;
    }
  }
  else
  {
    result = MiSwizzleInvalidPte(32 * (v4 & 0x1F | 0xFFFFFFFFF8000020uLL));
  }
  *v5 = result;
  v16 = *((_QWORD *)v1 + 8);
  v78 = v16;
  if ( v16 )
  {
    v17 = 0;
    v18 = *(_DWORD *)(v16 + 48);
    v19 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
    v20 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
    if ( MiVadPageSizes[(v18 >> 19) & 3] != 16 )
    {
      result = *v1;
      if ( (result & 2) != 0 )
      {
        v49 = *((_QWORD *)v1 + 7);
        v26 = 256LL;
        v50 = v20 - (v3 >> 12) + 1;
        v51 = *(_OWORD *)(v49 + 16);
        v72[0] = *(_OWORD *)v49;
        v72[1] = v51;
        v27 = *((_QWORD *)&v51 + 1);
        v88 = *((_QWORD *)&v51 + 1);
        v52 = *(_OWORD *)(v49 + 48);
        v72[2] = *(_OWORD *)(v49 + 32);
        v72[3] = v52;
        v53 = *(_OWORD *)(v49 + 80);
        v72[4] = *(_OWORD *)(v49 + 64);
        *(_QWORD *)&v72[6] = *(_QWORD *)(v49 + 96);
        v72[5] = v53;
        if ( v50 < 0x100 )
          v26 = v50;
      }
      else
      {
        if ( (v18 & 0x70) == 0x20 )
          return result;
        v21 = 8LL;
        *(_QWORD *)&v70 = v3 & 0xFFFFFFFFFFFFF000uLL;
        v22 = *(_QWORD *)(v16 + 120);
        if ( v22 >= 0 )
        {
          v23 = *(_QWORD *)(v16 + 120) & 0xFFFLL;
          if ( (v22 & 0xFFF) != 0 && v23 + ((unsigned __int64)v22 >> 12) - 1 == v3 >> 12 )
          {
            v24 = *(__int64 **)(v16 + 72);
            if ( v24 )
            {
              v25 = *v24;
              if ( *(_QWORD *)(*v24 + 64) )
              {
                if ( (*(_DWORD *)(v25 + 56) & 0x20) == 0 && (*(_BYTE *)(v25 + 62) & 0xC) == 4 )
                {
                  v21 = 2 * v23;
                  v17 = 1;
                  if ( (unsigned __int64)(2 * v23) > 0x80 )
                    v21 = 128LL;
                }
              }
            }
          }
        }
        LOWORD(v72[0]) = 2;
        *(_QWORD *)&v72[1] = 1LL;
        v26 = v20 - (v3 >> 12) + 1;
        if ( v21 <= v26 )
          v26 = v21;
        v27 = 0LL;
        *((_QWORD *)&v70 + 1) = v26 << 12;
        v88 = 0LL;
        *((_QWORD *)&v72[0] + 1) = &v70;
        *((_QWORD *)&v72[1] + 1) = 0LL;
        *(_QWORD *)&v72[2] = 0LL;
      }
      result = *(_QWORD *)&v72[1];
      v28 = 0LL;
      v29 = 0LL;
      v67 = *(_QWORD *)&v72[1];
      v68 = 0LL;
      if ( !v26 )
        goto LABEL_59;
      goto LABEL_29;
    }
    v57 = v3 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v70 + 1) = 0x10000LL;
    *(_QWORD *)&v70 = v57;
    result = v57 >> 12;
    if ( v57 >> 12 >= v19 )
    {
      result = (v57 + 0xFFFF) >> 12;
      if ( result <= v20 )
      {
        v27 = 0LL;
        LOWORD(v72[0]) = 2;
        v88 = 0LL;
        v29 = 0LL;
        v72[1] = 1uLL;
        v28 = 0LL;
        *((_QWORD *)&v72[0] + 1) = &v70;
        v26 = 16LL;
        *(_QWORD *)&v72[2] = 0LL;
        v67 = 1LL;
        v68 = 0LL;
LABEL_29:
        v30 = *((_QWORD *)&v72[0] + 1);
        v31 = v67;
        v81 = *((_QWORD *)&v72[0] + 1);
        do
        {
          v32 = ((*(_QWORD *)&v72[2] << 12) + *(_QWORD *)(v30 + 16 * v27)) & 0xFFFFFFFFFFFFF000uLL;
          v80 = v32;
          v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v71 = v33;
          if ( v28 )
          {
            result = v29 + 4096;
            if ( v32 != v29 + 4096 || (v33 & 0xFFF) == 0 )
              break;
          }
          v34 = *(_QWORD *)v33;
          if ( v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v34 & 1) != 0
              && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
            {
              v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v58 )
              {
                v59 = *((_QWORD *)&v58->Flink + ((v33 >> 3) & 0x1FF));
                v60 = v34 | 0x20;
                if ( (v59 & 0x20) == 0 )
                  v60 = *(_QWORD *)v33;
                v34 = v60;
                if ( (v59 & 0x42) != 0 )
                  v34 = v60 | 0x42;
              }
            }
            v27 = *((_QWORD *)&v72[1] + 1);
            v88 = *((_QWORD *)&v72[1] + 1);
          }
          if ( !v34 )
          {
            v75 = v32 >> 12;
            result = MiGetProtoPteAddress(v16, v32 >> 12, 4, &v74);
            v77 = result;
            v35 = result;
            if ( !result )
              break;
            v36 = *(_QWORD **)(v16 + 120);
            if ( (__int64)v36 < 0 )
            {
              result = (unsigned __int64)(*v36 - 1LL) >> 12;
              if ( v75 - v19 > result )
                break;
            }
            v37 = (unsigned __int64 *)v71;
            v38 = (__int64)((v71 << 25) - v7) >> 16;
            v39 = 0;
            while ( v38 > 0x7FFFFFFEFFFFLL )
            {
              ++v39;
              v38 = (__int64)((v38 << 25) - v7) >> 16;
              if ( v39 >= 3 )
              {
                v27 = v88;
                goto LABEL_50;
              }
            }
            v40 = (((unsigned __int64)((__int64)((v71 << 25) - v7) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v41 = *(_QWORD *)v40;
            if ( v40 >= 0xFFFFF6FB7DBED000uLL
              && v40 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v41 & 1) != 0
              && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
            {
              v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v61 )
              {
                v62 = *((_QWORD *)&v61->Flink + ((v40 >> 3) & 0x1FF));
                v63 = v41 | 0x20;
                if ( (v62 & 0x20) == 0 )
                  v63 = v41;
                v41 = v63;
                if ( (v62 & 0x42) != 0 )
                  v41 = v63 | 0x42;
              }
            }
            v76 = v41;
            v42 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v76) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            v90 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v90);
              while ( *(__int64 *)(v42 + 24) < 0 );
            }
            *(_QWORD *)(v42 + 16) ^= ((unsigned int)*(_QWORD *)(v42 + 16) ^ ((unsigned int)*(_QWORD *)(v42 + 16)
                                                                           + 0x10000)) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v43 = *(_QWORD *)(v42 + 8) | 0x8000000000000000uLL;
            v82 = 0LL;
            v83 = 0LL;
            if ( (unsigned __int64)((v43 >> 47) + 1) <= 1 )
            {
              v44 = 4LL;
              *(_QWORD *)&v82 = (((unsigned __int64)v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              *((_QWORD *)&v82 + 1) = (((unsigned __int64)v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              *(_QWORD *)&v83 = ((*((_QWORD *)&v82 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v45 = v67;
              *((_QWORD *)&v83 + 1) = (((unsigned __int64)v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              do
              {
                v46 = *(&v81 + v44--);
                v47 = *(_QWORD *)v46;
                if ( v46 >= 0xFFFFF6FB7DBED000uLL
                  && v46 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0x600000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v47 & 1) != 0
                  && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
                {
                  v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v64 )
                  {
                    v65 = *((_QWORD *)&v64->Flink + ((v46 >> 3) & 0x1FF));
                    v66 = v47 | 0x20;
                    if ( (v65 & 0x20) == 0 )
                      v66 = v47;
                    LOBYTE(v47) = v66;
                    if ( (v65 & 0x42) != 0 )
                      LOBYTE(v47) = v66 | 0x42;
                  }
                }
                if ( (v47 & 1) == 0 )
                  break;
                v67 = v45;
                if ( (v47 & 0x80u) != 0LL )
                  break;
                v67 = v45;
              }
              while ( v44 );
              v35 = v77;
              v16 = v78;
              v31 = v67;
            }
            v27 = *((_QWORD *)&v72[1] + 1);
            v7 = v79;
            v37 = (unsigned __int64 *)v71;
            v88 = *((_QWORD *)&v72[1] + 1);
LABEL_50:
            if ( v69 == 256 )
            {
              v48 = MiSwizzleInvalidPte((v35 << 16) | 0x400);
            }
            else
            {
              v48 = 32 * (v69 & 0x1F | 0xFFFFFFFFF8000020uLL);
              if ( qword_140C657C0 )
              {
                if ( (qword_140C657C0 & v48) != 0 )
                  v48 |= 0x10uLL;
                else
                  v48 |= qword_140C657C0;
              }
            }
            v28 = v68;
            *v37 = v48;
            v32 = v80;
          }
          v30 = v81;
          result = 2 * v27;
          if ( ++*(_QWORD *)&v72[2] == (*(_QWORD *)(v81 + 16 * v27 + 8)
                                      + (unsigned __int64)(*(_DWORD *)(v81 + 16 * v27) & 0xFFF)
                                      + 4095) >> 12 )
          {
            v88 = ++v27;
            *((_QWORD *)&v72[1] + 1) = v27;
            *(_QWORD *)&v72[2] = 0LL;
            if ( v27 < *(_QWORD *)&v72[1] )
            {
              result = 2 * v27;
              if ( !*(_QWORD *)(v81 + 16 * v27 + 8) )
                v27 = *(_QWORD *)&v72[1];
              v88 = v27;
              *((_QWORD *)&v72[1] + 1) = v27;
            }
          }
          if ( v27 == v31 )
            break;
          ++v28;
          v29 = v32;
          v68 = v28;
        }
        while ( v28 < v26 );
        v1 = a1;
        LOBYTE(v28) = v68;
LABEL_59:
        if ( v17 )
          *((_BYTE *)v1 + 1) = v28;
      }
    }
  }
  return result;
}
