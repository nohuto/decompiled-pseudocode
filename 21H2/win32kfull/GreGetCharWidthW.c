/*
 * XREFs of GreGetCharWidthW @ 0x1C013B81C
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C013B640 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C001A064 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00EAC98 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // edi
  unsigned __int16 *v8; // rsi
  int v9; // r12d
  __int64 v10; // r10
  unsigned int v11; // ebx
  float v12; // xmm6_4
  unsigned int v13; // r14d
  unsigned int v14; // edx
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  _WORD *v19; // rcx
  unsigned __int16 *v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // esi
  GLYPHDEF **p_pgdf; // r15
  _DWORD *v24; // r14
  __int64 v25; // r12
  GLYPHDEF *v26; // rax
  GLYPHDEF **v27; // rcx
  __int64 v28; // rdx
  GLYPHDEF *v29; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-B0h]
  unsigned int v36; // [rsp+5Ch] [rbp-ACh]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  struct _GLYPHPOS v41; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v42[64]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v6 = a6;
  v7 = a2;
  LODWORD(v33) = a2;
  v8 = a4;
  *(_DWORD *)v31 = a2;
  v9 = a3;
  v38 = a4;
  LODWORD(v37) = a3;
  v34 = (__int64)a6;
  DCOBJ::DCOBJ((DCOBJ *)&v39, a1);
  if ( !v39 )
  {
    EngSetLastError(6u);
    goto LABEL_42;
  }
  if ( !a6 )
  {
LABEL_42:
    v11 = 0;
    goto LABEL_43;
  }
  v32 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v32, (struct XDCOBJ *)&v39, 0, (a5 & 8) != 0 ? 4 : 2) )
    GreAcquireSemaphore(*(_QWORD *)(v32 + 504));
  v10 = v32;
  if ( v32 )
  {
    v11 = 1;
    if ( (*(_DWORD *)(v32 + 84) & 4) != 0 )
    {
      if ( v8 )
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v8, v9);
      }
      else
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v31, 1);
        v7 = *(_DWORD *)v31;
        LODWORD(v33) = *(_DWORD *)v31;
      }
    }
    *(_DWORD *)v31 = 0;
    v12 = *(float *)(v10 + 680);
    if ( (a5 & 1) != 0 )
      *(_DWORD *)v31 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v32);
    v13 = 0;
    v14 = v9 - 1;
    v36 = v9 - 1;
    if ( !v8 )
      v13 = v7;
    v35 = v13;
    v15 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
    while ( 1 )
    {
      if ( v8 )
      {
        v21 = (v15 - (__int64)v8) >> 1;
        if ( (unsigned int)v21 > v14 )
          goto LABEL_40;
        v18 = 32;
        v20 = (unsigned __int16 *)v15;
        if ( (unsigned int)(v9 - v21) < 0x20 )
          v18 = v9 - v21;
      }
      else
      {
        if ( v13 - v7 > v14 )
          goto LABEL_40;
        v16 = v13;
        v17 = v7 + v9 - v13;
        v18 = 32;
        if ( v17 < 0x20 )
          v18 = v17;
        v19 = v42;
        if ( v13 < v18 + v13 )
        {
          do
            *v19++ = v16++;
          while ( v16 < v18 + v13 );
        }
        v20 = (unsigned __int16 *)v42;
      }
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                            (RFONTOBJ *)&v32,
                            (struct RFONTOBJ *)v18,
                            &v41,
                            v20,
                            (struct XDCOBJ *)&v39,
                            0LL) )
        break;
      if ( (int)v18 > 0 )
      {
        if ( (a5 & 2) != 0 )
        {
          v22 = *(_DWORD *)v31;
          p_pgdf = &v41.pgdf;
          v24 = (_DWORD *)v34;
          v25 = v18;
          do
          {
            v26 = *p_pgdf;
            LODWORD(v34) = 0;
            bFToL((float)(int)(v22 + HIDWORD(v26[1].ppo)) * v12, (int *)&v34, 0);
            p_pgdf += 3;
            *v24++ = v34;
            --v25;
          }
          while ( v25 );
          v8 = v38;
          v9 = v37;
          v34 = (__int64)v24;
          v13 = v35;
          v6 = (float *)v34;
        }
        else
        {
          v27 = &v41.pgdf;
          v28 = v18;
          do
          {
            v29 = *v27;
            v27 += 3;
            *v6++ = (float)((float)SHIDWORD(v29[1].ppo) * 0.0625) * v12;
            --v28;
          }
          while ( v28 );
          v34 = (__int64)v6;
        }
      }
      if ( v8 )
      {
        v15 += 2LL * (unsigned __int16)v18;
      }
      else
      {
        v13 += v18;
        v35 = v13;
      }
      v7 = v33;
      v14 = v36;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  v11 = 0;
LABEL_40:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
LABEL_43:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v40);
  return v11;
}
