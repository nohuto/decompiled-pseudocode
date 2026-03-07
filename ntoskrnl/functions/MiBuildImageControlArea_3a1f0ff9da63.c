__int64 __fastcall MiBuildImageControlArea(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // r14
  _QWORD *Pool; // rax
  _QWORD *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // r14
  _QWORD *v18; // rax
  _BYTE *v19; // r13
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // r10d
  unsigned int v24; // r8d
  __int16 v25; // ax
  __int64 SubsectionPte; // rax
  unsigned int v27; // r8d
  unsigned int v28; // r11d
  unsigned int v29; // ecx
  __int64 v30; // rdi
  int v31; // ebx
  unsigned __int64 v33; // rbx
  __int64 v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v38; // rdx
  unsigned int v39; // r9d
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // rcx
  bool v43; // zf
  unsigned int v44; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+34h] [rbp-54h]
  int v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v47; // [rsp+40h] [rbp-48h]
  unsigned int v49; // [rsp+A0h] [rbp+18h]

  v46 = *(unsigned __int16 *)(a4 + 2);
  v9 = (*(_DWORD *)(a3 + 16) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !(_DWORD)v9 )
    return 3221225595LL;
  v10 = a5;
  v11 = 1LL;
  if ( (a5 & 0x400000) == 0 )
    v11 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  Pool = MiAllocatePool(
           64,
           8 * (7 * v11 + (((unsigned __int64)MiFlags >> 12) & 1)) + 184,
           (a5 & 0x400000) != 0 ? 1631808845 : 1766026573);
  v13 = Pool;
  if ( !Pool )
  {
    dword_140C65490 = 26;
    return 3221225626LL;
  }
  v14 = (__int64)(Pool + 16);
  v15 = (__int64)&Pool[7 * v11 + 16];
  Pool[12] = v15;
  v47 = (unsigned __int64 *)v15;
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v16 = (unsigned __int64 *)MiAllocatePool(274, 8 * v9, 0x74536D4Du);
  v17 = v16;
  if ( !v16 )
  {
    dword_140C65490 = 27;
    v31 = -1073741670;
    goto LABEL_55;
  }
  memset(v16, 0, 8 * v9);
  v18 = MiAllocatePool(256, 0x98uLL, 0x6765534Du);
  v19 = v18;
  if ( !v18 )
  {
    dword_140C65490 = 28;
    v31 = -1073741670;
    goto LABEL_53;
  }
  v18[5] = 0LL;
  v18[8] = v17;
  *v18 = v13;
  *((_DWORD *)v18 + 2) = v9;
  v18[7] = v18 + 9;
  v18[3] = (unsigned __int64)(unsigned int)v9 << 12;
  *((_DWORD *)v18 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v18 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v18 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v18 + 32) = *a6;
  v18[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v18[11] = *(_QWORD *)(a3 + 32);
  v18[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v18 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v18 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v18 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v18 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v18 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v18 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v18 + 33) = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v20 = 0, *(_DWORD *)(a3 + 28)) )
    v20 = 1;
  v19[122] = v20;
  *((_WORD *)v19 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v19 + 60) = *(_WORD *)a4;
  *((_DWORD *)v19 + 31) = *(_DWORD *)(a3 + 20);
  v13[2] = v13 + 1;
  v13[1] = v13 + 1;
  *v13 = v19;
  v13[14] = 1LL;
  v13[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v13[6] = 1LL;
  *((_DWORD *)v13 + 22) = -1;
  v13[13] = 0LL;
  v49 = 0;
  *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 14) ^ (*((_DWORD *)v13 + 14) ^ (a1 << 20)) & 0x7F00000 | 0xA2;
  v19[14] = v19[14] & 0x7F | (*(_DWORD *)(a3 + 104) != 0 ? 0x80 : 0);
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v19 + 4) = *(_QWORD *)a3;
  *(_QWORD *)(v14 + 8) = v17;
  if ( (a5 & 0x400000) != 0 )
  {
    *(_DWORD *)(v14 + 44) = v9;
    v36 = *(_QWORD *)a6;
    if ( (unsigned __int64)*(unsigned int *)(a3 + 16) <= *(_QWORD *)a6 )
      v36 = *(unsigned int *)(a3 + 16);
    *(_DWORD *)(v14 + 40) = v36 >> 9;
    *(_WORD *)(v14 + 34) = *(_WORD *)(v14 + 34) & 0xF | (16 * (v36 & 0x1FF));
    v19[123] |= 8u;
    v19[122] = 1;
    *(_WORD *)(v14 + 32) = *(_WORD *)(v14 + 32) & 0xFFC1 | 0xE;
    MiMakeSubsectionPte(v14);
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v41 = v40;
    do
    {
      v42 = DemandZeroPte;
      if ( v39 < *a6 )
        v42 = v38;
      v39 += 4096;
      *v17++ = v42;
      --v41;
    }
    while ( v41 );
    *((_QWORD *)v19 + 6) = v40;
    v17 -= v9;
    goto LABEL_21;
  }
  v21 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v21 )
  {
    dword_140C65490 = 29;
LABEL_43:
    v31 = -1073741701;
    goto LABEL_53;
  }
  v22 = *(unsigned int *)(a3 + 12);
  v23 = v21 + v22 - 1;
  if ( v23 <= (unsigned int)v21 )
  {
    dword_140C65490 = 30;
    goto LABEL_43;
  }
  v24 = (((v23 & -(int)v22 & 0xFFF) + 4095) >> 12)
      + (((unsigned __int64)(v22 + v21 - 1) >> 12) & ((unsigned __int64)~(v22 - 1) >> 12));
  *(_DWORD *)(v14 + 44) = v24;
  if ( v24 > (unsigned int)v9 )
  {
    dword_140C65490 = 31;
    goto LABEL_43;
  }
  *(_DWORD *)(v14 + 40) = *(_DWORD *)(a3 + 24) >> 9;
  v45 = v9 - v24;
  v25 = *(_WORD *)(v14 + 32);
  *(_WORD *)(v14 + 34) = *(_WORD *)(v14 + 34) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *(_WORD *)(v14 + 32) = v25 & 0xFFC1 | 2;
  SubsectionPte = MiMakeSubsectionPte(v14);
  v29 = 0;
  v30 = SubsectionPte;
  v44 = 0;
  if ( !v27 )
    goto LABEL_20;
  do
  {
    if ( v28 < *(_DWORD *)(a3 + 24) )
    {
      *v17 = v30;
      goto LABEL_18;
    }
    v33 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v17) )
      goto LABEL_26;
    if ( MiPteHasShadow() )
    {
      v35 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_27;
      v43 = (ZeroPte & 1) == 0;
LABEL_48:
      if ( !v43 )
        v33 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_27;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v35 = 0;
      v43 = (ZeroPte & 1) == 0;
      goto LABEL_48;
    }
LABEL_26:
    v35 = 0;
LABEL_27:
    *v17 = v33;
    if ( v35 )
      MiWritePteShadow((__int64)v17, v33, v34);
    v28 = v49;
    *(_DWORD *)(v14 + 52) ^= (*(_DWORD *)(v14 + 52) ^ (*(_DWORD *)(v14 + 52) + 1)) & 0x3FFFFFFF;
    v29 = v44;
LABEL_18:
    v28 += 4096;
    ++v29;
    v49 = v28;
    ++v17;
    v44 = v29;
  }
  while ( v29 < *(_DWORD *)(v14 + 44) );
  v10 = a5;
  v27 = *(_DWORD *)(v14 + 44);
LABEL_20:
  LODWORD(v9) = v45;
  v17 -= v27;
LABEL_21:
  v31 = MiParseImageSectionHeaders(v10, (_DWORD)v13, a2, v46, a3, v9);
  if ( v31 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v47, 1);
    *a7 = v13;
    return 0LL;
  }
  if ( v17 )
  {
LABEL_53:
    ExFreePoolWithTag(v17, 0);
    if ( v19 )
      goto LABEL_54;
  }
  else
  {
LABEL_54:
    ExFreePoolWithTag(v19, 0);
  }
LABEL_55:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v31;
}
