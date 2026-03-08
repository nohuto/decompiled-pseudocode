/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x14025B5F0
 * Callers:
 *     MiFindPagesForMdl @ 0x1402B3FE8 (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiAsyncSlabReplenish @ 0x1402DF31C (MiAsyncSlabReplenish.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  signed __int32 v11; // eax
  int v12; // r14d
  __int64 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned int v16; // r14d
  unsigned __int64 v17; // r13
  unsigned __int64 *v18; // r12
  unsigned int v19; // ecx
  int v20; // ebx
  unsigned __int64 SlabPage; // rsi
  unsigned int v22; // edi
  ULONG_PTR v23; // r8
  int v24; // ecx
  char *v25; // r9
  unsigned __int64 v26; // r10
  int v27; // ecx
  char *v28; // r9
  int v29; // edi
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // r12d
  __int64 v37; // rdi
  volatile signed __int64 *v38; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r14
  unsigned int v43; // edi
  __int64 v44; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-80h]
  __int64 v46; // [rsp+40h] [rbp-78h]
  unsigned __int64 v47; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v48; // [rsp+50h] [rbp-68h]
  unsigned __int64 v49; // [rsp+58h] [rbp-60h]
  __int64 v50; // [rsp+60h] [rbp-58h]
  __int128 v51; // [rsp+68h] [rbp-50h] BYREF
  int v55; // [rsp+D8h] [rbp+20h]
  unsigned int v56; // [rsp+F0h] [rbp+38h]

  v55 = 0;
  v8 = 0LL;
  v9 = a1;
  v49 = 0LL;
  v51 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned int)(a7 + 1), &v51);
  v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v51, 1u);
  v12 = v11 & DWORD2(v51);
  v14 = *(unsigned int *)(v13 + 588);
  v15 = ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6;
  v16 = HIDWORD(v51) | v12;
  v17 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v18 = (unsigned __int64 *)(a2 + 8 * v15);
  v19 = 8;
  v50 = KiProcessorBlock[v14];
  LODWORD(v14) = *(_DWORD *)(a4 + 84);
  v56 = 8;
  v48 = v18;
  v45 = 0LL;
  v20 = 3;
  if ( (v14 & 2) == 0 )
    v20 = 11;
  while ( 2 )
  {
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2u;
      v55 = 0;
      v19 = 2 * ((a3 & 1) == 0) + 8;
      v56 = v19;
    }
    v20 &= ~4u;
    if ( (v20 & 8) != 0 )
    {
      v44 = 0LL;
      SlabPage = MiGetSlabPage(v9, 6, v16, 5, (__int64)&v44, 0);
      if ( SlabPage == -1LL )
      {
        v36 = v55;
        do
        {
          v37 = v44;
          if ( !v44 || v36 )
            break;
          if ( !(unsigned int)MiReplenishSlabAllocator(v44, 1LL) )
          {
            v40 = 0LL;
            if ( (a3 & 8) != 0 || KeGetCurrentIrql() >= 2u )
              v40 = 1LL;
            v36 = MiAsyncSlabReplenish(v37, &MiShortTime, v40);
            if ( v36 )
              break;
          }
          SlabPage = MiGetSlabPage(a1, 6, v16, 5, (__int64)&v44, 0);
        }
        while ( SlabPage == -1LL );
        v8 = v49;
        v17 = v47;
        v55 = v36;
        v18 = v48;
      }
      if ( SlabPage != -1LL )
      {
        v20 |= 4u;
LABEL_9:
        v22 = v56;
        goto LABEL_10;
      }
      v9 = a1;
      v19 = v56;
    }
    SlabPage = MiGetPage(v9, v16, v19);
    if ( SlabPage != -1LL )
      goto LABEL_9;
    v38 = (volatile signed __int64 *)a1;
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
      goto LABEL_50;
    v22 = v56;
    v41 = v56;
    LODWORD(v41) = v56 | 0x40000;
    SlabPage = MiGetPage(a1, v16, v41);
    if ( SlabPage == -1LL )
      break;
LABEL_10:
    if ( SlabPage > a5 )
    {
      MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
      LOBYTE(v20) = -2;
      break;
    }
    v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * SlabPage) >> 4);
    v24 = dword_140C65708;
    if ( dword_140C65704 > (unsigned int)dword_140C65708
      || (v25 = (char *)qword_140C65748 + 16 * dword_140C65704, v23 < *(_QWORD *)v25)
      || dword_140C65704 != dword_140C65708 && v23 >= *((_QWORD *)v25 + 2) )
    {
      v32 = 0;
      if ( dword_140C65708 < 0 )
LABEL_84:
        KeBugCheckEx(0x1Au, 0x6201uLL, v23, 0LL, 0LL);
      while ( 1 )
      {
        v33 = (v32 + v24) >> 1;
        v25 = (char *)qword_140C65748 + 16 * v33;
        if ( v23 < *(_QWORD *)v25 )
        {
          if ( !v33 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v23, (ULONG_PTR)v25, 0LL);
          v24 = v33 - 1;
        }
        else
        {
          if ( v33 == dword_140C65708 || v23 < *((_QWORD *)v25 + 2) )
          {
            dword_140C65704 = (v32 + v24) >> 1;
            break;
          }
          v32 = v33 + 1;
        }
        if ( v24 < v32 )
          goto LABEL_84;
      }
    }
    v26 = *((unsigned int *)v25 + 2);
    if ( (_DWORD)v26 != v16 >> byte_140C6570D )
    {
      v42 = v46;
      v20 |= 2u;
      if ( !_bittest64(&v42, v26) && (v20 & 8) != 0 )
      {
        v46 |= 1LL << v26;
        v16 = ((_DWORD)v26 << byte_140C6570D) & ~dword_140C65700 | dword_140C65700 & (((_DWORD)v26 << byte_140C6570D) + 1);
        MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
        goto LABEL_25;
      }
    }
    if ( (v20 & 4) == 0 )
    {
      if ( (*(_DWORD *)(48 * SlabPage - 0x220000000000LL + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) != 0 )
          goto LABEL_76;
        v43 = v22 & 0xFFFFFFFD;
      }
      else
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_76;
        v43 = v22 | 2;
      }
      v56 = v43;
LABEL_76:
      if ( (v20 & 8) == 0 )
        ++v45;
      goto LABEL_18;
    }
    v47 = ++v17;
LABEL_18:
    *v18 = SlabPage;
    ++v8;
    ++v18;
    v27 = dword_140C65708;
    v48 = v18;
    v49 = v8;
    if ( dword_140C65704 <= (unsigned int)dword_140C65708 )
    {
      v28 = (char *)qword_140C65748 + 16 * dword_140C65704;
      if ( v23 >= *(_QWORD *)v28 && (dword_140C65704 == dword_140C65708 || v23 < *((_QWORD *)v28 + 2)) )
        goto LABEL_22;
    }
    v34 = 0;
    if ( dword_140C65708 < 0 )
LABEL_83:
      KeBugCheckEx(0x1Au, 0x6201uLL, v23, 0LL, 0LL);
    while ( 1 )
    {
      v35 = (v34 + v27) >> 1;
      v28 = (char *)qword_140C65748 + 16 * v35;
      if ( v23 < *(_QWORD *)v28 )
      {
        if ( !v35 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v23, (ULONG_PTR)v28, 0LL);
        v27 = v35 - 1;
        goto LABEL_40;
      }
      if ( v35 == dword_140C65708 || v23 < *((_QWORD *)v28 + 2) )
        break;
      v34 = v35 + 1;
LABEL_40:
      if ( v27 < v34 )
        goto LABEL_83;
    }
    dword_140C65704 = (v34 + v27) >> 1;
LABEL_22:
    v29 = *((_DWORD *)v28 + 2);
    if ( qword_140C65750 )
      v30 = MiPageToChannel(v23);
    else
      v30 = 0;
    v31 = dword_140C65778 & SlabPage | (v29 << byte_140C6570D) | (v30 << byte_140C6570E);
    v16 = v31 & ~dword_140C65700 | dword_140C65700 & (v31 + 1);
LABEL_25:
    if ( v8 < a6 )
    {
      v9 = a1;
      v19 = v56;
      continue;
    }
    break;
  }
  v38 = (volatile signed __int64 *)a1;
LABEL_50:
  if ( v8 )
  {
    *(_DWORD *)(v50 + 33360) = v16;
    _InterlockedExchangeAdd64(v38 + 2034, v8);
    if ( v17 )
      _InterlockedExchangeAdd64(v38 + 2035, v17);
    if ( v45 )
      _InterlockedExchangeAdd64(v38 + 2036, v45);
  }
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  return v20 & 1;
}
