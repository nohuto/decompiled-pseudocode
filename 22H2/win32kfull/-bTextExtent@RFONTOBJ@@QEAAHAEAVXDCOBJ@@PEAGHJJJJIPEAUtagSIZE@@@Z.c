/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0083684
 * Callers:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00838A8 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0080034 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00835E4 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C0083888 (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0083CA4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
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
  int v11; // r15d
  int v13; // ebx
  __int64 v14; // r13
  struct XDCOBJ *v16; // rax
  int v17; // esi
  int v18; // r8d
  int v19; // ecx
  unsigned __int16 *v20; // rdx
  int v21; // r12d
  int v22; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v24; // r8
  int ppo_high; // edx
  bool v26; // zf
  int v27; // esi
  __int64 v28; // rcx
  LONG v29; // edx
  Gre::Base *v30; // rcx
  int v32; // ebx
  int v33; // ecx
  int v34; // r8d
  __int16 v35; // r8
  unsigned __int16 *v36; // r9
  __int64 v37; // rdx
  __int16 v38; // ax
  LONG cx; // edx
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v43; // [rsp+40h] [rbp-C0h]
  struct XDCOBJ *v44; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v45; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v46; // [rsp+58h] [rbp-A8h]
  struct _GLYPHPOS v47; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a10;
  v11 = 0;
  v40 = 0;
  v13 = 0;
  v14 = a4;
  v46 = a3;
  v16 = a2;
  v44 = a2;
  v45 = a10;
  if ( a6 )
  {
    v41 = 0;
    bFToL((unsigned int)a6, &v41, 0LL);
    v16 = v44;
    v11 = v41;
  }
  v17 = 0;
  v18 = 0;
  v19 = v14;
  v20 = a3;
  v42 = v14;
  v43 = a3;
  if ( (_DWORD)v14 )
  {
    v41 = 0;
    while ( 1 )
    {
      v21 = v19;
      if ( v19 > 82 )
        v21 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v21, &v47, v20, v16, 0LL) )
        return 0LL;
      if ( v21 > 0 )
      {
        v22 = v41;
        p_pgdf = &v47.pgdf;
        v24 = (unsigned int)v21;
        do
        {
          ppo_high = HIDWORD((*p_pgdf)[1].ppo);
          v17 += ppo_high;
          if ( v11 < 0 && ppo_high + v11 <= 0 )
            ++v22;
          p_pgdf += 3;
          --v24;
        }
        while ( v24 );
        v41 = v22;
        v10 = v45;
      }
      v26 = v42 == v21;
      v19 = v42 - v21;
      v42 -= v21;
      v20 = &v43[v21];
      v16 = v44;
      v43 = v20;
      if ( v26 )
      {
        v18 = v41;
        goto LABEL_15;
      }
    }
  }
  else
  {
LABEL_15:
    if ( a6 )
    {
      if ( (a9 & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 40LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) == 0 )
      {
        v32 = v14;
        if ( a6 <= 0 )
          v32 = v14 - 1;
      }
      else
      {
        v32 = v14 - v18;
      }
      v13 = v11 * v32;
    }
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 404LL), a7, a8, &v40) )
    {
      v33 = v40;
      v34 = *(_DWORD *)(*(_QWORD *)this + 468LL);
      if ( v11 + v34 + v40 < 0 )
        v33 = -(v34 + v11);
      if ( (a9 & 2) != 0 )
        v35 = *(_WORD *)(*(_QWORD *)this + 464LL);
      else
        v35 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
      if ( (int)v14 > 0 )
      {
        v36 = v46;
        v37 = v14;
        do
        {
          v38 = *v36++;
          if ( v38 == v35 )
            v13 += v33;
          --v37;
        }
        while ( v37 );
      }
    }
    v27 = v13 + v17;
    if ( (a9 & 1) != 0 )
      v27 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 680LL)) )
    {
      v10->cx = (v27 + 8) >> 4;
    }
    else
    {
      v40 = 0;
      bFToL(v28, &v40, 0LL);
      v10->cx = v40;
    }
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v10->cy = v29;
    }
    else
    {
      v40 = 0;
      bFToL(v30, &v40, 0LL);
      v10->cy = v40;
    }
    if ( *((_DWORD *)Gre::Base::Globals(v30) + 39)
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
