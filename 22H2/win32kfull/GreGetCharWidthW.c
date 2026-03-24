/*
 * XREFs of GreGetCharWidthW @ 0x1C00A2794
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C00A25D0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0063FDC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098A30 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00FD5AC (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // edi
  unsigned int v10; // ebx
  __int64 v11; // r11
  int v12; // r13d
  float v13; // xmm6_4
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // r8d
  __int64 v17; // r12
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  _WORD *v21; // rcx
  unsigned __int16 *v22; // r9
  __int64 v23; // rcx
  GLYPHDEF **p_pgdf; // r8
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  GLYPHDEF **v30; // rcx
  __int64 v31; // rdx
  GLYPHDEF *v32; // rax
  unsigned __int16 v34[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-C0h]
  unsigned int v37; // [rsp+4Ch] [rbp-BCh]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v41; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v42[64]; // [rsp+388h] [rbp+280h] BYREF

  v6 = a6;
  v7 = a2;
  v36 = a2;
  *(_DWORD *)v34 = a2;
  v37 = a3;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)&v39, a1);
  if ( !v39 )
  {
    EngSetLastError(6u);
    goto LABEL_47;
  }
  if ( !a6 )
    goto LABEL_47;
  v35 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v35, (struct XDCOBJ *)&v39, 0, (a5 & 8) != 0 ? 4 : 2) )
    GreAcquireSemaphore(*(_QWORD *)(v35 + 504));
  v11 = v35;
  if ( !v35 )
  {
    EngSetLastError(6u);
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v35 + 84) & 4) != 0 )
  {
    if ( a4 )
    {
      RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, a4, a3);
    }
    else
    {
      RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, v34, 1u);
      v7 = *(_DWORD *)v34;
      v36 = *(_DWORD *)v34;
    }
  }
  v12 = 0;
  v13 = *(float *)(v11 + 680);
  if ( (a5 & 1) != 0 )
    v12 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v35);
  v14 = v37;
  v15 = 0;
  if ( !a4 )
    v15 = v7;
  v16 = v37 - 1;
  v17 = (unsigned __int64)a4 & -(__int64)(a4 != 0LL);
  *(_DWORD *)v34 = v37 - 1;
  while ( !a4 )
  {
    if ( v15 - v7 > v16 )
      goto LABEL_45;
    v18 = v15;
    v19 = v7 + v14 - v15;
    v20 = 32;
    if ( v19 < 0x20 )
      v20 = v19;
    v21 = v42;
    if ( v15 < v20 + v15 )
    {
      do
        *v21++ = v18++;
      while ( v18 < v20 + v15 );
    }
    v22 = (unsigned __int16 *)v42;
LABEL_27:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                          (RFONTOBJ *)&v35,
                          (struct RFONTOBJ *)v20,
                          &v41,
                          v22,
                          (struct XDCOBJ *)&v39,
                          0LL) )
      goto LABEL_46;
    if ( (int)v20 > 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        p_pgdf = &v41.pgdf;
        v25 = v20;
        do
        {
          LODWORD(v26) = 0;
          *(float *)&v38 = (float)(v12 + HIDWORD((*p_pgdf)[1].ppo)) * v13;
          v27 = (unsigned __int8)((int)v38 >> 23);
          if ( v27 <= 0x9E )
          {
            v28 = v38 & 0x7FFFFF | 0x800000;
            v29 = v27 < 0x76 ? v28 >> (118 - (unsigned __int8)v27) : v28 << ((unsigned __int8)v27 - 118);
            v26 = (v29 + 0x80000000LL) >> 32;
            if ( (int)v38 < 0 )
              LODWORD(v26) = -(int)v26;
          }
          *(_DWORD *)v6 = v26;
          p_pgdf += 3;
          ++v6;
          --v25;
        }
        while ( v25 );
      }
      else
      {
        v30 = &v41.pgdf;
        v31 = v20;
        do
        {
          v32 = *v30;
          v30 += 3;
          *v6++ = (float)((float)SHIDWORD(v32[1].ppo) * 0.0625) * v13;
          --v31;
        }
        while ( v31 );
      }
    }
    if ( a4 )
      v17 += 2LL * (unsigned __int16)v20;
    else
      v15 += v20;
    v7 = v36;
    v14 = v37;
    v16 = *(_DWORD *)v34;
  }
  v23 = (v17 - (__int64)a4) >> 1;
  if ( (unsigned int)v23 <= v16 )
  {
    v20 = 32;
    v22 = (unsigned __int16 *)v17;
    if ( v14 - (unsigned int)v23 < 0x20 )
      v20 = v14 - v23;
    goto LABEL_27;
  }
LABEL_45:
  v10 = 1;
LABEL_46:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
LABEL_47:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v40);
  return v10;
}
