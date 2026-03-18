/*
 * XREFs of ?GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C028D974
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C02C2420 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007B6C8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0080034 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00835E4 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r14
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rsi
  int v9; // r15d
  int v10; // eax
  __int64 v11; // r10
  float v12; // xmm6_4
  int v13; // r13d
  unsigned int v14; // edi
  unsigned int v15; // edx
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  _WORD *v20; // rcx
  unsigned __int16 *v21; // r9
  __int64 v22; // rcx
  float *v23; // rsi
  GLYPHDEF **p_pgdf; // r14
  __int64 v25; // r15
  GLYPHDEF *v26; // rax
  GLYPHDEF **v27; // rcx
  __int64 v28; // rdx
  GLYPHDEF *v29; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-C0h]
  _DWORD v34[2]; // [rsp+50h] [rbp-B8h] BYREF
  float *v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  struct _GLYPHPOS v40; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v41[64]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v6 = a6;
  v7 = a2;
  v33 = a2;
  v8 = a4;
  *(_DWORD *)v31 = a2;
  v9 = a3;
  v37 = a4;
  LODWORD(v36) = a3;
  v35 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v38, a1);
  if ( !v38 )
  {
    EngSetLastError(6u);
    goto LABEL_44;
  }
  if ( !a6 )
  {
LABEL_44:
    DCOBJ::~DCOBJ((DCOBJ *)&v38);
    return 0LL;
  }
  v10 = *(unsigned __int16 *)(v38 + 12);
  v32 = 0LL;
  v34[1] = v10;
  v34[0] = 19;
  if ( (unsigned int)RFONTOBJ::bInit(
                       (RFONTOBJ *)&v32,
                       (struct XDCOBJ *)&v38,
                       0,
                       (a5 & 8) != 0 ? 4 : 2,
                       (const struct RFONTOBJ::Tag *)v34) )
    GreAcquireSemaphore(*(_QWORD *)(v32 + 504));
  v11 = v32;
  if ( !v32 )
  {
    EngSetLastError(6u);
LABEL_42:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    goto LABEL_44;
  }
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
      v33 = *(_DWORD *)v31;
    }
  }
  v12 = *(float *)(v11 + 680);
  v13 = 0;
  if ( (a5 & 1) != 0 )
    v13 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v32);
  v14 = 0;
  v15 = v9 - 1;
  v34[0] = v9 - 1;
  if ( !v8 )
    v14 = v7;
  v16 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
  while ( !v8 )
  {
    if ( v14 - v7 > v15 )
      goto LABEL_38;
    v17 = v14;
    v18 = v7 + v9 - v14;
    v19 = 32;
    if ( v18 < 0x20 )
      v19 = v18;
    v20 = v41;
    if ( v14 < v19 + v14 )
    {
      do
        *v20++ = v17++;
      while ( v17 < v19 + v14 );
    }
    v21 = (unsigned __int16 *)v41;
LABEL_25:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                          (RFONTOBJ *)&v32,
                          (struct RFONTOBJ *)v19,
                          &v40,
                          v21,
                          (struct XDCOBJ *)&v38,
                          0LL) )
      goto LABEL_42;
    if ( (int)v19 > 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v23 = v35;
        p_pgdf = &v40.pgdf;
        v25 = v19;
        do
        {
          v26 = *p_pgdf;
          *(_DWORD *)v31 = 0;
          bFToL((float)(v13 + HIDWORD(v26[1].ppo)) * v12, (int *)v31, 0);
          p_pgdf += 3;
          *v23++ = *(float *)v31;
          --v25;
        }
        while ( v25 );
        v9 = v36;
        v35 = v23;
        v6 = v23;
        v8 = v37;
      }
      else
      {
        v27 = &v40.pgdf;
        v28 = v19;
        do
        {
          v29 = *v27;
          v27 += 3;
          *v6++ = (float)((float)SHIDWORD(v29[1].ppo) * 0.0625) * v12;
          --v28;
        }
        while ( v28 );
        v35 = v6;
      }
    }
    if ( v8 )
      v16 += 2LL * (unsigned __int16)v19;
    else
      v14 += v19;
    v7 = v33;
    v15 = v34[0];
  }
  v22 = (v16 - (__int64)v8) >> 1;
  if ( (unsigned int)v22 <= v15 )
  {
    v19 = 32;
    v21 = (unsigned __int16 *)v16;
    if ( (unsigned int)(v9 - v22) < 0x20 )
      v19 = v9 - v22;
    goto LABEL_25;
  }
LABEL_38:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  if ( v38 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)&v39);
  return 1LL;
}
