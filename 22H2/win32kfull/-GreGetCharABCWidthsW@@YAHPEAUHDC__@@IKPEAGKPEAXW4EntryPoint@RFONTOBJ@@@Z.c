/*
 * XREFs of ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007D848
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C007B770 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007B6C8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0080034 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C0AC (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  int v6; // r13d
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // r10
  float v12; // xmm6_4
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int16 *v15; // r9
  unsigned __int16 *i; // rax
  __int64 v17; // rcx
  struct _GLYPHPOS *v18; // r12
  struct _GLYPHPOS *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  struct _GLYPHPOS *v25; // r8
  float *v26; // r9
  GLYPHDEF *pgdf; // rdx
  __int64 v28; // rbx
  unsigned __int16 v30[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  struct _GLYPHPOS *v33; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  float *v35; // [rsp+60h] [rbp-A8h]
  __int64 *v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+74h] [rbp-94h]
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  struct _GLYPHPOS v39[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v40[32]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  *(_DWORD *)v30 = a2;
  v32 = (__int64)a6;
  v35 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v36, a1);
  if ( v36 )
  {
    if ( a3 )
    {
      v10 = *((unsigned __int16 *)v36 + 6);
      v31 = 0LL;
      v34[1] = v10;
      v34[0] = 16;
      if ( (unsigned int)RFONTOBJ::bInit(
                           (RFONTOBJ *)&v31,
                           (struct XDCOBJ *)&v36,
                           0,
                           (a5 & 2) != 0 ? 4 : 2,
                           (const struct RFONTOBJ::Tag *)v34) )
        GreAcquireSemaphore(*(_QWORD *)(v31 + 504));
      v11 = v31;
      if ( v31 )
      {
        v9 = 1;
        if ( (*(_DWORD *)(v31 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, v30, 1);
            v6 = *(_DWORD *)v30;
          }
        }
        v12 = *(float *)(v11 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v11 + 96) + 3056LL) )
        {
          while ( 1 )
          {
            v13 = a3;
            v33 = v39;
            if ( a3 > 0x20 )
              v13 = 32LL;
            v34[0] = v13;
            v14 = v13;
            if ( a4 )
            {
              v15 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v14 * 2);
            }
            else
            {
              for ( i = v40; i < &v40[v14]; ++i )
                *i = v6++;
              v15 = v40;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v31, v13, v39, v15, (struct XDCOBJ *)&v36, 0LL) )
              break;
            v18 = &v39[v13];
            if ( (a5 & 1) != 0 )
            {
              if ( v39 < v18 )
              {
                v19 = v33;
                v13 = v32;
                do
                {
                  LODWORD(v33) = 0;
                  bFToL(v17, &v33, 0LL);
                  *(_DWORD *)v30 &= v20;
                  bFToL(v21, v30, v20);
                  LODWORD(v32) = v22 & v32;
                  bFToL(v23, &v32, v22);
                  ++v19;
                  v24 = *(_DWORD *)v30 - (_DWORD)v33;
                  *(_DWORD *)v13 = (_DWORD)v33;
                  *(_DWORD *)(v13 + 4) = v24;
                  *(_DWORD *)(v13 + 8) = v32 - *(_DWORD *)v30;
                  v13 += 12LL;
                }
                while ( v19 < v18 );
                v32 = v13;
                v9 = 1;
                LODWORD(v13) = v34[0];
              }
            }
            else if ( v39 < v18 )
            {
              v25 = v33;
              v26 = v35;
              do
              {
                pgdf = v25->pgdf;
                ++v25;
                *v26 = (float)SLODWORD(pgdf[2].pgb) * v12;
                v26[1] = (float)(HIDWORD(pgdf[2].ppo) - LODWORD(pgdf[2].pgb)) * v12;
                v26[2] = (float)(HIDWORD(pgdf[1].ppo) - HIDWORD(pgdf[2].ppo)) * v12;
                v26 += 3;
              }
              while ( v25 < v18 );
              v35 = v26;
            }
            a3 -= v13;
            if ( !a3 )
            {
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
              if ( v36 )
              {
                XDCOBJ::RestoreAttributes((XDCOBJ *)&v36);
                LODWORD(v32) = 0;
                v28 = *v36;
                HmgDecrementExclusiveReferenceCountEx(v36, v37, &v32);
                if ( (_DWORD)v32 )
                  GrepDeleteDC(v28, 0x2000000LL);
              }
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v38);
              return v9;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v36);
    return v9;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)&v36);
    return 0LL;
  }
}
