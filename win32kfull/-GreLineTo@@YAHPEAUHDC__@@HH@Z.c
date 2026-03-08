/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70
 * Callers:
 *     NtGdiLineTo @ 0x1C014DFE0 (NtGdiLineTo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00E6260 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014D962 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  struct ECLIPOBJ *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r13
  int v10; // esi
  struct ECLIPOBJ *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // r15
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  LONG v19; // r12d
  LONG v20; // r13d
  int x; // r14d
  LONG y; // esi
  __int64 v23; // rcx
  __int64 v24; // rax
  LONG v25; // ecx
  struct ECLIPOBJ *v26; // rdx
  char *v27; // rcx
  int v28; // eax
  int v29; // r14d
  Gre::Base *v30; // rcx
  __int32 v31; // r13d
  int v32; // esi
  int v33; // r12d
  __int32 v34; // eax
  __int32 v35; // eax
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  struct ECLIPOBJ *v37; // rdx
  int v38; // eax
  struct REGION *v39; // rax
  XCLIPOBJ *v40; // r10
  char *v41; // r10
  bool v42; // zf
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  char *v46; // r8
  struct ECLIPOBJ *v47; // rcx
  int v48; // edx
  struct ECLIPOBJ *v49; // rcx
  int v50; // edx
  struct _POINTFIX Current; // rax
  struct ECLIPOBJ *v53; // r9
  __int64 v54; // [rsp+28h] [rbp-D8h]
  struct ECLIPOBJ *v55[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v57; // [rsp+70h] [rbp-90h]
  LONG v58; // [rsp+74h] [rbp-8Ch]
  char *v59; // [rsp+78h] [rbp-88h]
  struct _POINTL v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h]
  LONG v62; // [rsp+8Ch] [rbp-74h]
  LINEATTRS *v63; // [rsp+90h] [rbp-70h] BYREF
  struct _XFORMOBJ v64[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  _BYTE v66[32]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v67[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v68; // [rsp+E0h] [rbp-20h]
  __m128i v69; // [rsp+100h] [rbp+0h] BYREF
  __m128i v70; // [rsp+110h] [rbp+10h] BYREF
  PATHOBJ ppo; // [rsp+120h] [rbp+20h] BYREF
  __int64 v72; // [rsp+128h] [rbp+28h]

  v3 = a2;
  v57 = a2;
  v58 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  v6 = 0;
  if ( v55[0] )
  {
    if ( (*((_DWORD *)v55[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v64, (struct XDCOBJ *)v55, 516);
      v7 = v55[0];
      v8 = *((_QWORD *)v55[0] + 122);
      v9 = (LINEATTRS *)((char *)v55[0] + 208);
      v63 = (LINEATTRS *)((char *)v55[0] + 208);
      v10 = *(_DWORD *)(v8 + 152);
      if ( (v10 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v55[0], *(_QWORD *)(v8 + 160));
        v7 = v55[0];
      }
      if ( (v10 & 0x2000) != 0 )
      {
        GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
        v7 = v55[0];
      }
      if ( (v9->fl & 0xB) != 0
        || (*((_DWORD *)v7 + 62) & 1) != 0
        || (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) == 0
        && *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL) == 2 )
      {
        goto LABEL_62;
      }
      v67[0] = 0LL;
      v67[1] = 0LL;
      v68 = 256;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, (struct XDCOBJ *)v55, 0);
      v11 = v55[0];
      v12 = *((_QWORD *)v55[0] + 6);
      if ( (v66[24] & 1) != 0 )
      {
        v13 = *((_QWORD *)v55[0] + 62);
        v65 = v13;
        if ( !v13 )
          goto LABEL_15;
        v14 = *(_DWORD *)(v13 + 112);
        if ( (v14 & 0x100) != 0 )
        {
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12 + 2912);
          if ( !v15 )
            goto LABEL_15;
        }
        else
        {
          if ( *(_WORD *)(v13 + 100) || (v14 & 0x20) != 0 )
          {
LABEL_15:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
            if ( v67[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v67);
LABEL_62:
            v60.x = v3;
            v60.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v55, 1);
            if ( v72 )
            {
              if ( (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v64, &v60, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v63);
                v53 = v55[0];
                *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 152LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v53 + 122) + 216LL) = v60;
                *(_DWORD *)(*((_QWORD *)v53 + 122) + 8LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v53 + 122) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v55[0] + 62) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v55, v9, v64, 1u) )
                {
                  v5 = 0;
                }
              }
            }
            else
            {
              EngSetLastError(8u);
            }
            XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
            goto LABEL_78;
          }
          v15 = EngLineTo;
        }
        if ( (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) != 0 )
        {
          v16 = *((_QWORD *)v55[0] + 122);
          v17 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 24LL) >> 4;
          v18 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 28LL) >> 4;
          v19 = v18 + v4;
          v20 = v3 + v17;
          if ( _bittest((const signed __int32 *)(v16 + 152), 8u) )
          {
            x = *(int *)(v16 + 8) >> 4;
            y = *(int *)(v16 + 12) >> 4;
          }
          else
          {
            x = v17 + *(_DWORD *)(v16 + 216);
            y = v18 + *(_DWORD *)(v16 + 220);
          }
        }
        else
        {
          v23 = *((_QWORD *)v55[0] + 122);
          v56[0].x = v3;
          v56[0].y = v4;
          if ( (*(_DWORD *)(v23 + 152) & 0x200) != 0 )
          {
            v56[1] = *(struct _POINTL *)(v23 + 216);
            EXFORMOBJ::bXform((EXFORMOBJ *)v64, v56, 2LL);
            v11 = v55[0];
            x = v56[1].x;
            y = v56[1].y;
          }
          else
          {
            EXFORMOBJ::bXform((EXFORMOBJ *)v64, v56, 1LL);
            v11 = v55[0];
            v24 = *((_QWORD *)v55[0] + 122);
            x = *(int *)(v24 + 8) >> 4;
            y = *(int *)(v24 + 12) >> 4;
          }
          v20 = v56[0].x;
          v19 = v56[0].y;
        }
        v56[0].x = y;
        LODWORD(v59) = x;
        v62 = y;
        v61 = x;
        if ( (unsigned int)(v20 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
        {
          EngSetLastError(0x57u);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
          DCOBJ::~DCOBJ((DCOBJ *)v55);
          return 0LL;
        }
        v25 = v57;
        *(_DWORD *)(*((_QWORD *)v11 + 122) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*((_QWORD *)v11 + 122) + 216LL) = v25;
        *(_DWORD *)(*((_QWORD *)v11 + 122) + 220LL) = v58;
        *(_DWORD *)(*((_QWORD *)v11 + 122) + 8LL) = 16 * v20;
        *(_DWORD *)(*((_QWORD *)v11 + 122) + 12LL) = 16 * v19;
        v26 = (struct ECLIPOBJ *)(*((_DWORD *)v55[0] + 10) & 1);
        v27 = (char *)v55[0] + 1024;
        if ( (*((_DWORD *)v55[0] + 10) & 1) == 0 )
          v27 = (char *)v55[0] + 1016;
        v28 = *(_DWORD *)v27;
        v29 = *(_DWORD *)v27 + x;
        v30 = (Gre::Base *)*((unsigned int *)v55[0] + 2 * (_QWORD)v26 + 255);
        v31 = v28 + v20;
        v32 = (_DWORD)v30 + y;
        v33 = (_DWORD)v30 + v19;
        if ( (unsigned int)(v29 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v32 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v31 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v33 + 134217726) > 0xFFFFFFC )
        {
          EngSetLastError(0x57u);
          v49 = v55[0];
          v50 = 16 * (_DWORD)v59;
          *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 152LL) &= ~0x200u;
          *(_DWORD *)(*((_QWORD *)v49 + 122) + 152LL) |= 0x100u;
          *(_DWORD *)(*((_QWORD *)v49 + 122) + 8LL) = v50;
          *(_DWORD *)(*((_QWORD *)v49 + 122) + 12LL) = 16 * v56[0].x;
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
LABEL_70:
          DCOBJ::~DCOBJ((DCOBJ *)v55);
          return v6;
        }
        if ( v29 > v31 )
        {
          v70.m128i_i32[0] = v31;
          v34 = v29 + 1;
        }
        else
        {
          v70.m128i_i32[0] = v29;
          v34 = v31 + 1;
        }
        v70.m128i_i32[2] = v34;
        if ( v32 > v33 )
        {
          v70.m128i_i32[1] = v33;
          v35 = v32 + 1;
        }
        else
        {
          v70.m128i_i32[1] = v32;
          v35 = v33 + 1;
        }
        v70.m128i_i32[3] = v35;
        if ( (*((_DWORD *)v55[0] + 9) & 0xE0) != 0 )
        {
          *(__m128i *)&v56[0].x = v70;
          XDCOBJ::vAccumulate((XDCOBJ *)v55, v26, (__m128i *)v56);
        }
        v36 = Gre::Base::Globals(v30);
        v37 = v55[0];
        if ( *((_QWORD *)v55[0] + 18) != *((_QWORD *)v36 + 32) )
        {
          v38 = *((_DWORD *)v55[0] + 250);
          v56[0] = 0LL;
          if ( v70.m128i_i32[0] >= v38
            && v70.m128i_i32[2] <= *((_DWORD *)v55[0] + 252)
            && v70.m128i_i32[1] >= *((_DWORD *)v55[0] + 251)
            && v70.m128i_i32[3] <= *((_DWORD *)v55[0] + 253) )
          {
LABEL_51:
            v41 = (char *)v37 + 1336;
            v42 = *((_DWORD *)v37 + 334) == -1;
            v59 = (char *)v37 + 1336;
            if ( v42 )
            {
              *(_DWORD *)(*((_QWORD *)v37 + 122) + 152LL) |= 2u;
              v37 = v55[0];
            }
            v43 = *((_QWORD *)v37 + 122);
            if ( ((*((_BYTE *)v37 + 316) | *(_BYTE *)(v43 + 152)) & 2) != 0 )
            {
              *(_DWORD *)(v43 + 152) &= ~2u;
              v44 = v65;
              v54 = v65;
              *((_DWORD *)v55[0] + 79) &= ~2u;
              EBRUSHOBJ::vInitBrush(
                v41,
                v55[0],
                *((_QWORD *)v55[0] + 18),
                *((_QWORD *)v55[0] + 11),
                *(_QWORD *)(v44 + 128),
                v54,
                0);
              v37 = v55[0];
              v41 = v59;
            }
            if ( (*((_DWORD *)v37 + 9) & 0xE0) != 0 && (*((_DWORD *)v41 + 30) & 0x100) == 0 )
            {
              v69 = v70;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v55, v37, &v69);
            }
            v45 = v65;
            v46 = v59;
            ++*(_DWORD *)(v65 + 92);
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, char *, _QWORD, int, __int32, int, __m128i *, int))v15)(
                    v45 + 24,
                    *(_QWORD *)v56,
                    v46,
                    (unsigned int)v29,
                    v32,
                    v31,
                    v33,
                    &v70,
                    ((((*(_BYTE *)(*((_QWORD *)v55[0] + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v55[0] + 122) + 212LL)
                                                                                                - 1) & 0xF)
                                                                                              + 1)) )
            {
              v47 = v55[0];
              v48 = 16 * v61;
              *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 152LL) &= ~0x200u;
              *(_DWORD *)(*((_QWORD *)v47 + 122) + 152LL) |= 0x100u;
              *(_DWORD *)(*((_QWORD *)v47 + 122) + 8LL) = v48;
              *(_DWORD *)(*((_QWORD *)v47 + 122) + 12LL) = 16 * v62;
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
              if ( v67[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v67);
              v9 = v63;
              v4 = v58;
              v3 = v57;
              goto LABEL_62;
            }
            goto LABEL_67;
          }
          v56[0] = (struct _POINTL)((char *)v55[0] + 1768);
          v39 = XDCOBJ::prgnEffRao(v55);
          XCLIPOBJ::vSetup(v40, v39, (struct ERECTL *)&v70, 0);
          if ( !ERECTL::bEmpty((ERECTL *)(*(_QWORD *)v56 + 4LL)) )
          {
            v37 = v55[0];
            goto LABEL_51;
          }
        }
      }
      else
      {
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v55);
      }
LABEL_67:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      if ( v67[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v67);
      v6 = v5;
      goto LABEL_70;
    }
    EngSetLastError(6u);
    v5 = 0;
  }
  else
  {
    v5 = 0;
    EngSetLastError(6u);
  }
LABEL_78:
  if ( v55[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v55);
  return v5;
}
