/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02DC4B0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010F824 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C02DB5CC (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0309A08 (-vSqrt@EFLOAT@@QEAAXXZ.c)
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
  __int64 v10; // rcx
  LONG v11; // r14d
  int *v13; // rbx
  __int64 v14; // r11
  int *v15; // r12
  int v16; // ecx
  __int64 v17; // r11
  int v18; // eax
  struct _GLYPHPOS *v19; // r8
  __int64 v20; // r15
  unsigned __int16 *v21; // r9
  float v22; // xmm6_4
  int v23; // r14d
  struct RFONTOBJ *v24; // rdx
  __int64 v25; // rax
  float v26; // r10d
  __int64 v27; // r13
  __int64 v28; // rdi
  POINTL *v29; // r8
  __int64 v30; // rsi
  int *v31; // r9
  POINTL v32; // rdx
  int v33; // eax
  int v34; // r11d
  int v35; // ecx
  int v36; // ecx
  int v37; // esi
  int v38; // ebx
  bool v39; // zf
  bool v40; // cc
  int v41; // ecx
  int v42; // [rsp+48h] [rbp-61h] BYREF
  int v43; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v44; // [rsp+50h] [rbp-59h] BYREF
  float v45; // [rsp+54h] [rbp-55h] BYREF
  int v46; // [rsp+58h] [rbp-51h]
  POINTL *p_ptl; // [rsp+60h] [rbp-49h]
  __int64 v48; // [rsp+68h] [rbp-41h] BYREF
  __int64 v49; // [rsp+70h] [rbp-39h]
  __int64 v50; // [rsp+78h] [rbp-31h] BYREF
  __int64 v51; // [rsp+80h] [rbp-29h]
  __int64 v52; // [rsp+88h] [rbp-21h]
  __int128 v53; // [rsp+90h] [rbp-19h]

  v10 = *(_QWORD *)a3;
  v11 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v13 = (int *)((char *)this + 116);
    v44 = 0;
    if ( a6 )
    {
      v42 = 0;
      bFToL((float)a6 * *(float *)(v10 + 404), &v42, 0);
      *v13 = v42;
      EPOINTQF::operator=((__int64)&v50, *(_QWORD *)a3 + 396LL);
      v14 = *v13;
      *(_QWORD *)&v53 = v14 * v50;
      v50 = v14 * v51;
      v11 = a4;
    }
    else
    {
      v50 = v51;
      *(_QWORD *)&v53 = v51;
    }
    v15 = (int *)((char *)this + 120);
    if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 404LL), a7, a8, (__int64)this + 120) )
    {
      v16 = *(_DWORD *)(*(_QWORD *)a3 + 468LL);
      if ( *v15 + v16 + *v13 < 0 )
        *v15 = -(v16 + *v13);
      EPOINTQF::operator=((__int64)&v48, *(_QWORD *)a3 + 396LL);
      v17 = *v15;
      v18 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      v52 = v17 * v48;
      v44 = v18;
      v48 = v17 * v49;
    }
    else
    {
      v48 = v49;
      v52 = v49;
    }
    v19 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v20 = 0x80000000LL;
    v21 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v22 = *(float *)(*(_QWORD *)a3 + 408LL);
    v42 = 0;
    v19->ptl.x = v11;
    v23 = 0;
    p_ptl = &v19->ptl;
    v19->ptl.y = a5;
    v24 = (struct RFONTOBJ *)*(unsigned int *)this;
    v46 = 0;
    v43 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v24, v19, v21, &v43, a2, this) )
    {
      if ( v43 )
      {
        v25 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v25;
      }
      v26 = *(float *)this;
      v27 = 0x80000000LL;
      v28 = v48;
      v29 = p_ptl;
      v30 = v52;
      v31 = a9;
      v45 = v26;
      while ( 1 )
      {
        v32 = v29[-1];
        v33 = v42;
        v34 = *(_DWORD *)(*(_QWORD *)&v32 + 12LL);
        if ( v42 >= v23 + *(_DWORD *)(*(_QWORD *)&v32 + 16LL) )
          v33 = v23 + *(_DWORD *)(*(_QWORD *)&v32 + 16LL);
        v35 = v23 + *(_DWORD *)(*(_QWORD *)&v32 + 20LL);
        v42 = v33;
        if ( v46 > v35 )
          v35 = v46;
        v23 += v34;
        v20 += *(_QWORD *)(*(_QWORD *)&v32 + 48LL);
        v27 += *(_QWORD *)(*(_QWORD *)&v32 + 56LL);
        v46 = v35;
        v36 = *v13;
        if ( *v13 && v34 + v36 > 0 )
        {
          v20 += v53;
          v23 += v36;
          v27 += v50;
        }
        if ( *v15 && v29[-2].x == v44 )
        {
          v23 += *v15;
          v20 += v30;
          v27 += v28;
        }
        if ( v31 )
        {
          v43 = 0;
          bFToL((float)v23 * v22, &v43, 0);
          v26 = v45;
          *a9 = v43;
          v29 = p_ptl;
          v31 = ++a9;
        }
        --LODWORD(v26);
        v45 = v26;
        if ( v26 == 0.0 )
          break;
        v29 += 3;
        p_ptl = v29;
        v29->x = a4 + HIDWORD(v20);
        v29->y = HIDWORD(v27) + a5;
      }
      v37 = v46;
      v38 = v46 - v23;
      v39 = v46 == v23;
      *((_DWORD *)this + 21) = HIDWORD(v27);
      *((_DWORD *)this + 20) = HIDWORD(v20);
      if ( v38 < 0 || v39 )
        v38 = 0;
      v45 = (float)((float)((float)SHIDWORD(v27) * 0.0625) * (float)((float)SHIDWORD(v27) * 0.0625))
          + (float)((float)((float)SHIDWORD(v20) * 0.0625) * (float)((float)SHIDWORD(v20) * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v45);
      v44 = 0;
      if ( (unsigned int)bFToL(v45, &v44, 0xAu) )
        v37 = v44;
      v40 = v23 < v42;
      *((_DWORD *)this + 28) = v37;
      if ( !v40 )
        v23 = v42;
      *((_DWORD *)this + 24) = v23;
      *((_DWORD *)this + 26) = v38 + v37;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 316LL);
      v41 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v41;
    }
  }
}
