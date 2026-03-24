/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00E3714
 * Callers:
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0063FDC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098A30 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C00E3908 (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00E3928 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  struct tagSIZE *v10; // rdi
  int v11; // r12d
  int v12; // ebx
  int v13; // r15d
  unsigned __int16 *v14; // rax
  __int64 v15; // r13
  struct XDCOBJ *v16; // r9
  int v18; // esi
  int v19; // r8d
  int v20; // ecx
  unsigned __int16 *v21; // rdx
  int v22; // r15d
  int v23; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v25; // r8
  int ppo_high; // edx
  bool v27; // zf
  __int64 v28; // r15
  int v29; // esi
  __int64 v30; // rcx
  LONG v31; // edx
  __int64 v32; // rcx
  int v34; // ebx
  int v35; // edx
  int v36; // ecx
  __int16 v37; // r8
  unsigned __int16 *v38; // r9
  __int64 v39; // rdx
  __int16 v40; // ax
  LONG cx; // edx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v45; // [rsp+40h] [rbp-C0h]
  struct XDCOBJ *v46; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v47; // [rsp+50h] [rbp-B0h]
  struct tagSIZE *v48; // [rsp+58h] [rbp-A8h]
  struct _GLYPHPOS v49; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a10;
  v11 = 0;
  v42 = 0;
  v12 = 0;
  v13 = a6;
  v14 = a3;
  v15 = a4;
  v16 = a2;
  v47 = a3;
  v46 = a2;
  v48 = a10;
  if ( a6 )
  {
    v43 = 0;
    bFToL(this, &v43, 0LL);
    v14 = v47;
    v16 = v46;
    v11 = v43;
  }
  v18 = 0;
  v45 = v14;
  v19 = 0;
  v20 = v15;
  v44 = v15;
  v21 = v14;
  if ( (_DWORD)v15 )
  {
    v43 = 0;
    while ( 1 )
    {
      v22 = v20;
      if ( v20 > 82 )
        v22 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v22, &v49, v21, v16, 0LL) )
        return 0LL;
      if ( v22 > 0 )
      {
        v23 = v43;
        p_pgdf = &v49.pgdf;
        v25 = (unsigned int)v22;
        do
        {
          ppo_high = HIDWORD((*p_pgdf)[1].ppo);
          v18 += ppo_high;
          if ( v11 < 0 && ppo_high + v11 <= 0 )
            ++v23;
          p_pgdf += 3;
          --v25;
        }
        while ( v25 );
        v43 = v23;
        v10 = v48;
      }
      v16 = v46;
      v27 = v44 == v22;
      v20 = v44 - v22;
      v44 -= v22;
      v21 = &v45[v22];
      v45 = v21;
      if ( v27 )
      {
        v19 = v43;
        v13 = a6;
        goto LABEL_15;
      }
    }
  }
  else
  {
LABEL_15:
    if ( v13 )
    {
      if ( (a9 & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 40LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) == 0 )
      {
        v34 = v15;
        if ( v13 <= 0 )
          v34 = v15 - 1;
      }
      else
      {
        v34 = v15 - v19;
      }
      v12 = v11 * v34;
    }
    v28 = *(_QWORD *)this;
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 404LL), a7, a8, &v42) )
    {
      v35 = *(_DWORD *)(v28 + 468);
      v36 = v42;
      if ( v11 + v35 + v42 < 0 )
        v36 = -(v35 + v11);
      if ( (a9 & 2) != 0 )
        v37 = *(_WORD *)(v28 + 464);
      else
        v37 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 120) + 32LL) + 118LL);
      if ( (int)v15 > 0 )
      {
        v38 = v47;
        v39 = v15;
        do
        {
          v40 = *v38++;
          if ( v40 == v37 )
            v12 += v36;
          --v39;
        }
        while ( v39 );
      }
    }
    v29 = v12 + v18;
    if ( (a9 & 1) != 0 )
      v29 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 680LL)) )
    {
      v10->cx = (v29 + 8) >> 4;
    }
    else
    {
      v42 = 0;
      bFToL(v30, &v42, 0LL);
      v10->cx = v42;
    }
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v10->cy = v31;
    }
    else
    {
      v42 = 0;
      bFToL(v32, &v42, 0LL);
      v10->cy = v42;
    }
    if ( gbDBCSCodePage
      && *(_DWORD *)(*(_QWORD *)this + 208LL) == 1
      && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x200014) == 0x200000
      && (a5 == 900 || a5 == 2700) )
    {
      cx = v10->cx;
      v10->cx = v10->cy;
      v10->cy = cx;
    }
    return 1LL;
  }
}
