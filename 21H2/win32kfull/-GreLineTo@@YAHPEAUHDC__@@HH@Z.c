/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0137FE4
 * Callers:
 *     NtGdiLineTo @ 0x1C0137EE0 (NtGdiLineTo.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C010B4E4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C01388BC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  int v5; // ebx
  unsigned int v6; // edi
  POINTL *v7; // r8
  POINTL v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  POINTL *v11; // rdx
  POINTL v12; // rax
  POINTL v13; // r8
  int v14; // ecx
  POINTL v15; // rcx
  int v16; // r8d
  int v17; // r9d
  LONG v18; // r15d
  LONG v19; // r13d
  int x; // r14d
  LONG y; // esi
  POINTL v22; // rcx
  POINTL v23; // rax
  int v24; // r12d
  LONG v25; // ecx
  POINTL *v26; // r8
  POINTL *v27; // rcx
  LONG v28; // eax
  unsigned int v29; // r14d
  LONG v30; // ecx
  int v31; // r15d
  int v32; // esi
  int v33; // r13d
  unsigned __int64 v34; // rdx
  LONG v35; // r9d
  LONG v36; // r10d
  LONG v37; // r11d
  POINTL *v38; // r12
  struct REGION *v39; // rax
  POINTL *v40; // r12
  struct ECLIPOBJ *v41; // rdx
  int v42; // ecx
  POINTL v43; // rcx
  POINTL v44; // rdx
  POINTL *v45; // rcx
  int v46; // edx
  POINTL *v47; // rcx
  LONG v48; // edx
  struct _POINTFIX Current; // rax
  POINTL *v50; // r9
  POINTL v52; // [rsp+28h] [rbp-D8h]
  struct _POINTL v53[2]; // [rsp+50h] [rbp-B0h] BYREF
  LONG v54; // [rsp+60h] [rbp-A0h]
  LONG v55; // [rsp+64h] [rbp-9Ch]
  struct _POINTL v56; // [rsp+68h] [rbp-98h] BYREF
  POINTL *v57[6]; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+A0h] [rbp-60h]
  LONG v59; // [rsp+A4h] [rbp-5Ch]
  struct _XFORMOBJ v60[2]; // [rsp+A8h] [rbp-58h] BYREF
  POINTL v61; // [rsp+B8h] [rbp-48h]
  BOOL (__stdcall *v62)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+C0h] [rbp-40h]
  POINTL *v63; // [rsp+C8h] [rbp-38h]
  __m128i v64; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v65[32]; // [rsp+E0h] [rbp-20h] BYREF
  char v66[80]; // [rsp+100h] [rbp+0h] BYREF
  __m128i v67; // [rsp+150h] [rbp+50h] BYREF
  PATHOBJ ppo; // [rsp+160h] [rbp+60h] BYREF
  __int64 v69; // [rsp+168h] [rbp+68h]

  v3 = a2;
  v54 = a2;
  v55 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v57, a1);
  v6 = 0;
  if ( !v57[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_73;
  }
  if ( (v57[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_73:
    v6 = v5;
    goto LABEL_74;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v60, (struct XDCOBJ *)v57, 516);
  v7 = v57[0];
  v8 = v57[0][122];
  v9 = (LINEATTRS *)&v57[0][26];
  v63 = v57[0] + 26;
  v10 = *(_DWORD *)(*(_QWORD *)&v8 + 152LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v57[0], *(_QWORD *)(*(_QWORD *)&v8 + 160LL));
    v7 = v57[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
    v7 = v57[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (v7[31].x & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v60[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*(_QWORD *)&v7[122] + 208LL) == 2 )
  {
    goto LABEL_16;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v66);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, (struct XDCOBJ *)v57, 0);
  v11 = v57[0];
  v12 = v57[0][6];
  if ( (v65[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v57);
    goto LABEL_64;
  }
  v13 = v57[0][62];
  v61 = v13;
  if ( !*(_QWORD *)&v13 )
  {
LABEL_15:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v65);
LABEL_16:
    v56.x = v3;
    v56.y = v4;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v57, 1);
    if ( v69 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v60, &v56, 1u) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
        v50 = v57[0];
        *(_DWORD *)(*(_QWORD *)&v57[0][122] + 152LL) &= 0xFFFFFCFF;
        *(struct _POINTL *)(*(_QWORD *)&v50[122] + 216LL) = v56;
        *(_DWORD *)(*(_QWORD *)&v50[122] + 8LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*(_QWORD *)&v50[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (v57[0][31].x & 1) == 0 && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v57, v9, v60, 1u) )
          v5 = 0;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    goto LABEL_73;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&v13 + 112LL);
  if ( (v14 & 0x100) != 0 )
  {
    v62 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)&v12 + 2912LL);
    if ( !v62 )
      goto LABEL_15;
  }
  else
  {
    if ( *(_WORD *)(*(_QWORD *)&v13 + 100LL) || (v14 & 0x20) != 0 )
      goto LABEL_15;
    v62 = EngLineTo;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v60[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = v57[0][122];
    v16 = *(int *)(*(_QWORD *)&v60[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v60[0].ulReserved + 28LL) >> 4;
    v18 = v3 + v16;
    v19 = v4 + v17;
    if ( _bittest((const signed __int32 *)(*(_QWORD *)&v15 + 152LL), 8u) )
    {
      x = *(int *)(*(_QWORD *)&v15 + 8LL) >> 4;
      y = *(int *)(*(_QWORD *)&v15 + 12LL) >> 4;
    }
    else
    {
      x = v16 + *(_DWORD *)(*(_QWORD *)&v15 + 216LL);
      y = v17 + *(_DWORD *)(*(_QWORD *)&v15 + 220LL);
    }
  }
  else
  {
    v22 = v57[0][122];
    v53[0].x = v3;
    v53[0].y = v4;
    if ( (*(_DWORD *)(*(_QWORD *)&v22 + 152LL) & 0x200) != 0 )
    {
      v53[1] = *(struct _POINTL *)(*(_QWORD *)&v22 + 216LL);
      EXFORMOBJ::bXform((EXFORMOBJ *)v60, v53, 2LL);
      v11 = v57[0];
      x = v53[1].x;
      y = v53[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v60, v53, 1LL);
      v11 = v57[0];
      v23 = v57[0][122];
      x = *(int *)(*(_QWORD *)&v23 + 8LL) >> 4;
      y = *(int *)(*(_QWORD *)&v23 + 12LL) >> 4;
    }
    v18 = v53[0].x;
    v19 = v53[0].y;
  }
  v53[0].x = y;
  v59 = y;
  v58 = x;
  v24 = x;
  if ( (unsigned int)(v18 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v25 = v54;
    *(_DWORD *)(*(_QWORD *)&v11[122] + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)&v11[122] + 216LL) = v25;
    *(_DWORD *)(*(_QWORD *)&v11[122] + 220LL) = v55;
    *(_DWORD *)(*(_QWORD *)&v11[122] + 8LL) = 16 * v18;
    *(_DWORD *)(*(_QWORD *)&v11[122] + 12LL) = 16 * v19;
    v26 = v57[0];
    v27 = v57[0] + 128;
    if ( (v57[0][5].x & 1) == 0 )
      v27 = v57[0] + 127;
    v28 = v27->x;
    v29 = v27->x + x;
    v30 = v57[0][(v57[0][5].x & 1) + 127].y;
    v31 = v28 + v18;
    v32 = v30 + y;
    v33 = v30 + v19;
    if ( v29 + 134217726 <= 0xFFFFFFC
      && (unsigned int)(v32 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v31 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v33 + 134217726) <= 0xFFFFFFC )
    {
      if ( (int)v29 > v31 )
      {
        v34 = (unsigned int)v31;
        v35 = v29 + 1;
      }
      else
      {
        v34 = v29;
        v35 = v31 + 1;
      }
      v67.m128i_i32[2] = v35;
      v67.m128i_i32[0] = v34;
      if ( v32 > v33 )
      {
        v36 = v33;
        v67.m128i_i32[1] = v33;
        v37 = v32 + 1;
      }
      else
      {
        v36 = v32;
        v67.m128i_i32[1] = v32;
        v37 = v33 + 1;
      }
      v67.m128i_i32[3] = v37;
      if ( (v57[0][4].y & 0xE0) != 0 )
      {
        *(__m128i *)&v53[0].x = v67;
        XDCOBJ::vAccumulate((XDCOBJ *)v57, (struct ECLIPOBJ *)v34, (__m128i *)v53);
        v35 = v67.m128i_i32[2];
        LODWORD(v34) = v67.m128i_i32[0];
        v26 = v57[0];
        v37 = v67.m128i_i32[3];
        v36 = v67.m128i_i32[1];
      }
      if ( (struct PEN *)v26[18] != gpPenNull )
      {
        v53[0] = 0LL;
        if ( (int)v34 >= v26[125].x && v35 <= v26[126].x && v36 >= v26[125].y && v37 <= v26[126].y )
        {
LABEL_52:
          v40 = v26 + 167;
          if ( v26[167].x == -1 )
          {
            *(_DWORD *)(*(_QWORD *)&v26[122] + 152LL) |= 2u;
            v26 = v57[0];
          }
          v41 = (struct ECLIPOBJ *)v26[122];
          v42 = *((_DWORD *)v41 + 38);
          if ( (((unsigned __int8)v42 | LOBYTE(v26[39].y)) & 2) != 0 )
          {
            *((_DWORD *)v41 + 38) = v42 & 0xFFFFFFFD;
            v43 = v61;
            v52 = v61;
            v57[0][39].y &= ~2u;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
              v40,
              v57[0],
              *(_QWORD *)&v57[0][18],
              *(_QWORD *)&v57[0][11],
              *(_QWORD *)(*(_QWORD *)&v43 + 128LL),
              v52,
              0);
            v26 = v57[0];
          }
          if ( (v26[4].y & 0xE0) != 0 && (v40[15].x & 0x100) == 0 )
          {
            v64 = v67;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v57, v41, &v64);
          }
          v44 = v61;
          ++*(_DWORD *)(*(_QWORD *)&v61 + 92LL);
          if ( !((unsigned int (__fastcall *)(__int64, _QWORD, POINTL *, _QWORD, int, int, int, __m128i *, int))v62)(
                  *(_QWORD *)&v44 + 24LL,
                  *(_QWORD *)v53,
                  v40,
                  v29,
                  v32,
                  v31,
                  v33,
                  &v67,
                  ((((*(_BYTE *)(*(_QWORD *)&v57[0][122] + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*(_QWORD *)&v57[0][122] + 212LL)
                                                                                            - 1) & 0xF)
                                                                                          + 1)) )
          {
            v45 = v57[0];
            v46 = 16 * v58;
            *(_DWORD *)(*(_QWORD *)&v57[0][122] + 152LL) &= ~0x200u;
            *(_DWORD *)(*(_QWORD *)&v45[122] + 152LL) |= 0x100u;
            *(_DWORD *)(*(_QWORD *)&v45[122] + 8LL) = v46;
            *(_DWORD *)(*(_QWORD *)&v45[122] + 12LL) = 16 * v59;
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v65);
            v3 = v54;
            v4 = v55;
            v9 = (LINEATTRS *)v63;
            goto LABEL_16;
          }
          goto LABEL_64;
        }
        v38 = v26 + 221;
        v53[0] = (struct _POINTL)&v26[221];
        v39 = XDCOBJ::prgnEffRao((DC **)v57);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v38, v39, (struct ERECTL *)&v67, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v38->y) )
        {
          v26 = v57[0];
          goto LABEL_52;
        }
      }
LABEL_64:
      v6 = v5;
      goto LABEL_65;
    }
    EngSetLastError(0x57u);
    v47 = v57[0];
    v48 = v53[0].x;
    *(_DWORD *)(*(_QWORD *)&v57[0][122] + 152LL) &= ~0x200u;
    *(_DWORD *)(*(_QWORD *)&v47[122] + 152LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)&v47[122] + 8LL) = 16 * v24;
    *(_DWORD *)(*(_QWORD *)&v47[122] + 12LL) = 16 * v48;
  }
LABEL_65:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v65);
LABEL_74:
  DCOBJ::~DCOBJ((DCOBJ *)v57);
  return v6;
}
