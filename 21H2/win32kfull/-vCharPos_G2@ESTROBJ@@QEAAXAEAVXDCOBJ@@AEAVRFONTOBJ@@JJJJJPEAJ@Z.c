/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02BCE14
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00C49AC (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C014D908 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C02BC12C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v9; // rax
  LONG v10; // ebx
  __int64 v13; // r11
  int *v14; // r15
  bool v15; // al
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r11
  int v20; // eax
  struct _GLYPHPOS *v21; // r8
  int v22; // r14d
  float v23; // xmm6_4
  unsigned __int16 *v24; // r9
  POINTL *p_ptl; // r13
  __int64 v26; // rbx
  struct RFONTOBJ *v27; // rdx
  __int64 v28; // rax
  float v29; // r10d
  __int64 v30; // r12
  __int64 v31; // rsi
  int v32; // r11d
  int *v33; // r9
  POINTL v34; // r8
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  __int64 v39; // rax
  int v40; // ebx
  bool v41; // zf
  int v42; // eax
  bool v43; // cc
  int v44; // ecx
  int v45; // [rsp+48h] [rbp-49h] BYREF
  int v46; // [rsp+4Ch] [rbp-45h] BYREF
  int v47; // [rsp+50h] [rbp-41h] BYREF
  float v48; // [rsp+54h] [rbp-3Dh] BYREF
  int v49; // [rsp+58h] [rbp-39h]
  __int64 v50; // [rsp+60h] [rbp-31h] BYREF
  __int64 v51; // [rsp+68h] [rbp-29h]
  __int64 v52; // [rsp+70h] [rbp-21h]
  __int64 v53; // [rsp+78h] [rbp-19h]
  __int64 v54; // [rsp+80h] [rbp-11h]

  v9 = *(_QWORD *)a3;
  v10 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v47 = 0;
    if ( a6 )
    {
      v45 = 0;
      bFToL((float)a6 * *(float *)(v9 + 404), &v45, 0);
      *((_DWORD *)this + 29) = v45;
      EPOINTQF::operator=((__int64)&v50, *(_QWORD *)a3 + 396LL);
      v13 = *((int *)this + 29);
      v9 = *(_QWORD *)a3;
      v53 = v13 * v50;
      v54 = v13 * v51;
      v10 = a4;
    }
    else
    {
      v54 = v51;
      v53 = v50;
    }
    v14 = (int *)((char *)this + 120);
    v15 = bCalcBreakExtra(*(unsigned int *)(v9 + 404), a7, a8, (__int64)this + 120);
    v16 = *(_QWORD *)a3;
    if ( v15 )
    {
      v17 = *(_DWORD *)(v16 + 468);
      v18 = *((_DWORD *)this + 29);
      if ( *v14 + v17 + v18 < 0 )
      {
        *v14 = -(v17 + v18);
        v16 = *(_QWORD *)a3;
      }
      EPOINTQF::operator=((__int64)&v50, v16 + 396);
      v19 = *v14;
      v16 = *(_QWORD *)a3;
      v20 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      v52 = v19 * v50;
      v47 = v20;
      v50 = v19 * v51;
    }
    else
    {
      v50 = v51;
      v52 = v51;
    }
    v21 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v22 = 0;
    v23 = *(float *)(v16 + 408);
    v24 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v21->ptl.y = a5;
    p_ptl = &v21->ptl;
    v21->ptl.x = v10;
    v26 = 0x80000000LL;
    v27 = (struct RFONTOBJ *)*(unsigned int *)this;
    v45 = 0;
    v46 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v27, v21, v24, &v46, a2, this) )
    {
      if ( v46 )
      {
        v28 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v28;
      }
      v29 = *(float *)this;
      v30 = 0x80000000LL;
      v31 = v52;
      v32 = 0;
      v33 = a9;
      v48 = *(float *)this;
      while ( 1 )
      {
        v34 = p_ptl[-1];
        v35 = v32;
        v36 = *((_DWORD *)this + 29);
        v37 = v22 + *(_DWORD *)(*(_QWORD *)&v34 + 16LL);
        if ( v45 < v37 )
          v37 = v45;
        v32 = v22 + *(_DWORD *)(*(_QWORD *)&v34 + 20LL);
        v45 = v37;
        if ( v35 > v32 )
          v32 = v35;
        v38 = *(_DWORD *)(*(_QWORD *)&v34 + 12LL);
        v26 += *(_QWORD *)(*(_QWORD *)&v34 + 48LL);
        v22 += v38;
        v30 += *(_QWORD *)(*(_QWORD *)&v34 + 56LL);
        v49 = v32;
        if ( v36 && v38 + v36 > 0 )
        {
          v26 += v53;
          v22 += v36;
          v30 += v54;
        }
        if ( *v14 && p_ptl[-2].x == v47 )
        {
          v22 += *v14;
          v26 += v31;
          v30 += v50;
        }
        if ( v33 )
        {
          v46 = 0;
          bFToL((float)v22 * v23, &v46, 0);
          v29 = v48;
          v32 = v49;
          *a9++ = v46;
          v33 = a9;
        }
        --LODWORD(v29);
        v39 = v26 >> 32;
        v48 = v29;
        if ( v29 == 0.0 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v26);
        p_ptl->y = HIDWORD(v30) + a5;
      }
      v40 = v32 - v22;
      *((_DWORD *)this + 21) = HIDWORD(v30);
      *((_DWORD *)this + 20) = v39;
      if ( v32 - v22 <= 0 )
        v40 = 0;
      v48 = (float)((float)((float)SHIDWORD(v30) * 0.0625) * (float)((float)SHIDWORD(v30) * 0.0625))
          + (float)((float)((float)(int)v39 * 0.0625) * (float)((float)(int)v39 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v48);
      v47 = 0;
      v41 = (unsigned int)bFToL(v48, &v47, 0xAu) == 0;
      v42 = v49;
      if ( !v41 )
        v42 = v47;
      v43 = v22 < v45;
      *((_DWORD *)this + 28) = v42;
      if ( !v43 )
        v22 = v45;
      *((_DWORD *)this + 26) = v40 + v42;
      *((_DWORD *)this + 24) = v22;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 316LL);
      v44 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v44;
    }
  }
}
