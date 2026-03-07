__int64 __fastcall HalpAddMcaToProcessorSpecificSection(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned int v6; // edi
  void (__fastcall *v7)(__int64, __int64, __int128 *, char *, char *, char *); // rax
  GUID *v8; // r10
  _QWORD *v9; // rcx
  unsigned __int64 v10; // r9
  _QWORD *v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // edi
  char *v28; // rax
  __int64 v30; // [rsp+40h] [rbp-58h]
  __int128 v31; // [rsp+48h] [rbp-50h] BYREF

  *a2 |= 2uLL;
  v6 = 64;
  v30 = *(unsigned int *)(a1 + 16);
  ((void (__fastcall *)(__int64, __int64, unsigned __int64 *, char *, unsigned __int64 *, char *))HalpWheaCpuid)(
    v30,
    1LL,
    a2 + 2,
    (char *)a2 + 20,
    a2 + 3,
    (char *)a2 + 28);
  v7 = (void (__fastcall *)(__int64, __int64, __int128 *, char *, char *, char *))HalpWheaCpuid;
  *a2 |= 1uLL;
  v31 = 0LL;
  v7(v30, 1LL, &v31, (char *)&v31 + 4, (char *)&v31 + 8, (char *)&v31 + 12);
  v8 = (GUID *)(a2 + 8);
  v9 = a2 + 10;
  a2[1] = (unsigned __int64)DWORD1(v31) >> 24;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Au) )
  {
    *v9 |= 2uLL;
    a2[12] = *(_QWORD *)(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *v9 |= 0x10uLL;
    a2[15] = *(_QWORD *)(a1 + 28);
  }
  v10 = *(unsigned __int16 *)(a1 + 40);
  if ( (unsigned __int16)(v10 - 1) <= 3u || (_WORD)v10 == 1024 || (v10 & 0xFC00) == 0x400 && (v10 & 0x3FF) != 0 )
  {
    *v9 |= 1uLL;
    v11 = a2 + 11;
    *v8 = WHEA_MSCHECK_GUID;
    v22 = a2[11] | 3;
    a2[11] = v22;
    v23 = ((unsigned int)v22 ^ (*(_QWORD *)(a1 + 40) >> 38)) & 0x80000 ^ v22 | 4;
    a2[11] = v23;
    v24 = ((unsigned int)v23 ^ (*(_QWORD *)(a1 + 40) >> 41)) & 0x100000 ^ v23 | 0x20;
    a2[11] = v24;
    v25 = ((unsigned int)v24 ^ (*(_QWORD *)(a1 + 40) >> 39)) & 0x800000 ^ v24;
    a2[11] = v25;
    if ( (_WORD)v10 )
    {
      switch ( (_WORD)v10 )
      {
        case 1:
          v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL | 0x10000;
          break;
        case 2:
          v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL | 0x20000;
          break;
        case 3:
          v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL | 0x30000;
          break;
        case 4:
          v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL | 0x40000;
          break;
        default:
          v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL | 0x50000;
          break;
      }
    }
    else
    {
      v15 = v25 & 0xFFFFFFFFFFF8FFFFuLL;
    }
    goto LABEL_31;
  }
  if ( (v10 & 0xEFFC) == 0xC )
  {
    *v9 |= 1uLL;
    v11 = a2 + 11;
    *v8 = WHEA_CACHECHECK_GUID;
    v12 = a2[11] & 0xFFFFFFFFFE3FFFFFuLL | ((v10 & 3) << 22) | 0xC;
LABEL_11:
    *v11 = v12;
    v13 = v12 ^ ((unsigned int)v12 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    *v11 = v13;
    v14 = v13 ^ ((unsigned int)v13 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    *v11 = v14;
    v15 = v14 ^ ((unsigned int)v14 ^ (*(_QWORD *)(a1 + 40) >> 33)) & 0x20000000;
LABEL_31:
    *v11 = v15;
    v6 = 128;
    *a2 = *a2 & 0xFFFFFFFFFFFFFF03uLL | 4;
    goto LABEL_32;
  }
  if ( (v10 & 0xEFF0) == 0x10 )
  {
    *v9 |= 1uLL;
    v11 = a2 + 11;
    *v8 = WHEA_TLBCHECK_GUID;
    v12 = a2[11] & 0xFFFFFFFFFE3CFFFFuLL | ((((v10 & 3) << 6) | ((unsigned __int16)v10 >> 2) & 3LL) << 16) | 0xD;
    goto LABEL_11;
  }
  if ( (v10 & 0xEF00) == 0x100 )
  {
    *v9 |= 1uLL;
    v11 = a2 + 11;
    *v8 = WHEA_CACHECHECK_GUID;
    v16 = a2[11] & 0xFFFFFFFFFE00FFFFuLL | ((((unsigned __int16)v10 >> 2) & 3LL | (4
                                                                                 * ((16 * (v10 & 3)) | ((unsigned __int16)v10 >> 4) & 0xF))) << 16) | 0xF;
    a2[11] = v16;
    v17 = v16 ^ ((unsigned int)v16 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    a2[11] = v17;
    v18 = v17 ^ ((unsigned int)v17 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    a2[11] = v18;
    v15 = v18 ^ ((unsigned int)v18 ^ (*(_QWORD *)(a1 + 40) >> 33)) & 0x20000000;
    goto LABEL_31;
  }
  if ( (v10 & 0xE800) == 0x800 )
  {
    *v9 |= 1uLL;
    v11 = a2 + 11;
    *v8 = WHEA_BUSCHECK_GUID;
    v19 = a2[11] & 0xFFFFFFFFFE03FFFFuLL | (((16 * (v10 & 3)) | ((unsigned __int16)v10 >> 4) & 0xF) << 18) | 0xE;
    a2[11] = v19;
    v20 = v19 ^ ((unsigned int)v19 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    a2[11] = v20;
    v21 = v20 ^ ((unsigned int)v20 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    a2[11] = v21;
    v15 = v21 & 0xFFFFFFF81FFFFFFFuLL | (*(_QWORD *)(a1 + 40) >> 33) & 0x20000000LL | (((v10 >> 9) & 3 | (4 * ((v10 >> 8) & 1 | (2 * (((unsigned __int16)v10 >> 2) & 3LL))))) << 30) | 0x700;
    goto LABEL_31;
  }
  memset(a2 + 8, 0, 0x40uLL);
  v8 = 0LL;
LABEL_32:
  if ( *(_DWORD *)(a1 + 64) && v8 )
  {
    *a2 = *a2 & 0xFFFFFFFFFFFFC0FFuLL | 0x100;
    v26 = v6;
    v27 = v6 + 16;
    v28 = (char *)v8 + v26;
    *(_DWORD *)v28 = 524289;
    *((_DWORD *)v28 + 1) = 384;
    *((_QWORD *)v28 + 1) = 0LL;
    memmove(&v28[v27], (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
    v6 = v27 + 8 * *(_DWORD *)(a1 + 64);
  }
  *a3 = v6;
  return 0LL;
}
