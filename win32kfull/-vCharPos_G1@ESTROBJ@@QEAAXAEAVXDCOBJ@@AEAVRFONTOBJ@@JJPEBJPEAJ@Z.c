/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02DC24C
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        float **a3,
        LONG a4,
        LONG a5,
        const int *a6,
        int *a7)
{
  float *v9; // rax
  struct _GLYPHPOS *v11; // r14
  int v12; // esi
  float v13; // xmm8_4
  float v14; // xmm6_4
  int v15; // r12d
  float v16; // xmm7_4
  int v17; // edi
  unsigned __int16 *v18; // r9
  struct RFONTOBJ *v19; // rdx
  int v20; // edx
  __int64 v21; // rax
  char v22; // r15
  int v23; // eax
  int v24; // ebx
  GLYPHDEF **p_pgdf; // rax
  GLYPHDEF *v28; // rdx
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // r8d
  bool v33; // zf
  float v34; // xmm1_4
  float v35; // xmm0_4
  int v36; // eax
  unsigned int v37; // r8d
  GLYPHDEF **v38; // rcx
  int v39; // r8d
  int v40; // ecx
  int v42; // [rsp+48h] [rbp-41h] BYREF
  int v43[3]; // [rsp+4Ch] [rbp-3Dh] BYREF
  GLYPHDEF **v44; // [rsp+58h] [rbp-31h]

  v9 = *a3;
  if ( *((_DWORD *)*a3 + 160) )
    return;
  v11 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v12 = 0;
  v13 = v9[101];
  v14 = v9[99];
  v15 = 0;
  v16 = v9[100];
  v17 = 0;
  v18 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v11->ptl.y = a5;
  v11->ptl.x = a4;
  v19 = (struct RFONTOBJ *)*(unsigned int *)this;
  v42 = 0;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetricsPlus((RFONTOBJ *)a3, v19, v11, v18, &v42, a2, this) )
    return;
  v20 = *((_DWORD *)this + 58);
  if ( v42 )
  {
    v21 = *((_QWORD *)this + 8);
    v20 |= 2u;
    *((_DWORD *)this + 58) = v20;
    *((_QWORD *)this + 4) = v21;
  }
  if ( ((_DWORD)(*a3)[69] & 0x10) == 0 || (v22 = 1, (v20 & 0x1400) != 0) )
    v22 = 0;
  v23 = *(_DWORD *)this;
  v24 = 0;
  v43[0] = v23;
  p_pgdf = &v11->pgdf;
  v44 = p_pgdf;
  while ( 1 )
  {
    v28 = *p_pgdf;
    if ( v22 )
    {
      v29 = v17 + HIDWORD(v28[1].ppo);
      if ( v17 >= v12 )
        v17 = v12;
      v12 = v17;
      if ( v29 <= v15 )
        v29 = v15;
LABEL_18:
      v15 = v29;
      goto LABEL_19;
    }
    v30 = v17 + LODWORD(v28[2].pgb);
    if ( v30 >= v12 )
      v30 = v12;
    v12 = v30;
    v29 = v17 + HIDWORD(v28[2].ppo);
    if ( v29 > v15 )
      goto LABEL_18;
LABEL_19:
    v31 = *a6++;
    v24 += v31;
    if ( a7 )
      *a7++ = v24;
    v42 = 0;
    bFToL((float)v24 * v13, &v42, 0);
    v33 = v43[0]-- == 1;
    v17 = v42;
    v34 = (float)v42;
    v35 = (float)v42 * v14;
    if ( v33 )
      break;
    v44 += 3;
    v42 &= v32;
    bFToL(v35, &v42, v32);
    v36 = v42 + a4;
    v42 &= v37;
    *((_DWORD *)v44 + 2) = v36;
    bFToL(v34 * v16, &v42, v37);
    v38 = v44;
    *((_DWORD *)v44 + 3) = v42 + a5;
    p_pgdf = v38;
  }
  v43[0] &= v32;
  bFToL(v35, v43, v32);
  v39 = v43[0];
  v43[0] = 0;
  *((_DWORD *)this + 20) = v39;
  bFToL(v34 * v16, v43, 0);
  *((_DWORD *)this + 21) = v43[0];
  if ( v17 <= v15 )
    v17 = v15;
  *((_DWORD *)this + 26) = v17;
  *((_DWORD *)this + 24) = v12;
  *((float *)this + 25) = (*a3)[79];
  v40 = *((_DWORD *)*a3 + 80);
  *((_DWORD *)this + 58) |= 4u;
  *((_DWORD *)this + 27) = v40;
}
