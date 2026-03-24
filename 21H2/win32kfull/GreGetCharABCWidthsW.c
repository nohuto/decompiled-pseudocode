/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00FD588
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00FD420 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098AC0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00FD8FC (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r13d
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // r11
  float v11; // xmm6_4
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 *v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  unsigned __int64 v17; // rcx
  struct _GLYPHPOS *v18; // r12
  struct _GLYPHPOS *v19; // r15
  _DWORD *v20; // rsi
  int *pgdf; // rbx
  float v22; // xmm0_4
  unsigned int v23; // r8d
  float v24; // xmm0_4
  unsigned int v25; // r8d
  int v26; // eax
  struct _GLYPHPOS *v27; // r8
  float *v28; // r9
  GLYPHDEF *v29; // rdx
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct _GLYPHPOS *v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-B0h]
  int v36; // [rsp+5Ch] [rbp-ACh]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  struct _GLYPHPOS v40[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v41[32]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  *(_DWORD *)v31 = a2;
  v35 = a3;
  v34 = a6;
  v8 = a3;
  v37 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v38, a1);
  v9 = 0;
  if ( v38 )
  {
    if ( v8 )
    {
      v32 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v32, (struct XDCOBJ *)&v38, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v32 + 504));
      v10 = v32;
      if ( v32 )
      {
        if ( (*(_DWORD *)(v32 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, a4, v8);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v31, 1u);
            v6 = *(_DWORD *)v31;
          }
        }
        v11 = *(float *)(v10 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v10 + 96) + 3080LL) )
        {
          while ( 1 )
          {
            v12 = v8;
            v33 = v40;
            if ( v8 > 0x20 )
              v12 = 32LL;
            v36 = v12;
            v13 = v12;
            if ( a4 )
            {
              v14 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v13 * 2);
            }
            else
            {
              v15 = 0LL;
              v16 = v41;
              v17 = (unsigned int)v12;
              if ( v41 > &v41[v13] )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  *v16 = v6;
                  ++v15;
                  ++v6;
                  ++v16;
                }
                while ( v15 < v17 );
              }
              v14 = v41;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v32,
                                  (struct RFONTOBJ *)(unsigned int)v12,
                                  v40,
                                  v14,
                                  (struct XDCOBJ *)&v38,
                                  0LL) )
              break;
            v18 = &v40[v12];
            if ( (a5 & 1) != 0 )
            {
              if ( v40 < v18 )
              {
                v19 = v33;
                v20 = (_DWORD *)v34;
                do
                {
                  pgdf = (int *)v19->pgdf;
                  LODWORD(v33) = 0;
                  bFToL((float)pgdf[4] * v11, (int *)&v33, 0);
                  v22 = (float)pgdf[5];
                  *(_DWORD *)v31 = 0;
                  bFToL(v22 * v11, (int *)v31, v23);
                  v24 = (float)pgdf[3];
                  LODWORD(v34) = 0;
                  bFToL(v24 * v11, (int *)&v34, v25);
                  ++v19;
                  v26 = *(_DWORD *)v31 - (_DWORD)v33;
                  *v20 = (_DWORD)v33;
                  v20[1] = v26;
                  v20[2] = v34 - *(_DWORD *)v31;
                  v20 += 3;
                }
                while ( v19 < v18 );
                LODWORD(v12) = v36;
                v34 = (__int64)v20;
                v8 = v35;
              }
            }
            else if ( v40 < v18 )
            {
              v27 = v33;
              v28 = (float *)v37;
              do
              {
                v29 = v27->pgdf;
                ++v27;
                *v28 = (float)SLODWORD(v29[2].pgb) * v11;
                v28[1] = (float)(HIDWORD(v29[2].ppo) - LODWORD(v29[2].pgb)) * v11;
                v28[2] = (float)(HIDWORD(v29[1].ppo) - HIDWORD(v29[2].ppo)) * v11;
                v28 += 3;
              }
              while ( v27 < v18 );
              v37 = (__int64)v28;
            }
            v8 -= v12;
            v35 = v8;
            if ( !v8 )
            {
              v9 = 1;
              break;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v39);
  return v9;
}
