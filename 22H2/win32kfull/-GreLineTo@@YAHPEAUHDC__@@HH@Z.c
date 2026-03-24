/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0144F14
 * Callers:
 *     NtGdiLineTo @ 0x1C0144E10 (NtGdiLineTo.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00B6050 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C014580C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0145870 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  int v5; // edi
  unsigned int v6; // ebx
  DC *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  DC *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  int *v16; // rcx
  int v17; // edx
  int v18; // r8d
  LONG v19; // r12d
  unsigned int *v20; // r10
  int v21; // r9d
  LONG v22; // r13d
  int x; // r14d
  int y; // esi
  __int64 v25; // rsi
  LONG v26; // ecx
  DC *v27; // r8
  char *v28; // rcx
  int v29; // eax
  unsigned int v30; // r14d
  int v31; // ecx
  signed int v32; // r13d
  int v33; // esi
  int v34; // r12d
  unsigned __int64 v35; // rdx
  signed int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  char *v39; // r15
  struct REGION *v40; // rax
  char *v41; // r15
  struct ECLIPOBJ *v42; // rdx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rdx
  DC *v46; // rcx
  DC *v47; // rcx
  int v48; // edx
  struct _POINTFIX Current; // rax
  DC *v50; // r9
  __int64 v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+50h] [rbp-B0h]
  unsigned int *v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+58h] [rbp-A8h]
  char *v57; // [rsp+58h] [rbp-A8h]
  struct _POINTL v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v59; // [rsp+70h] [rbp-90h]
  LONG v60; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v61; // [rsp+78h] [rbp-88h] BYREF
  DC *v62[6]; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B4h] [rbp-4Ch]
  LINEATTRS *v65; // [rsp+B8h] [rbp-48h]
  struct _XFORMOBJ v66[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h]
  BOOL (__stdcall *v68)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+D8h] [rbp-28h]
  _BYTE v69[32]; // [rsp+E0h] [rbp-20h] BYREF
  char v70[80]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v71; // [rsp+150h] [rbp+50h] BYREF
  PATHOBJ ppo; // [rsp+160h] [rbp+60h] BYREF
  __int64 v73; // [rsp+168h] [rbp+68h]
  char v74[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v75; // [rsp+1D0h] [rbp+D0h]

  v3 = a2;
  v59 = a2;
  v60 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v62, a1);
  v6 = 0;
  if ( !v62[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_76;
  }
  if ( (*((_DWORD *)v62[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_76:
    v6 = v5;
    goto LABEL_77;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v66, (struct XDCOBJ *)v62, 516);
  v7 = v62[0];
  v8 = *((_QWORD *)v62[0] + 122);
  v9 = (LINEATTRS *)((char *)v62[0] + 208);
  v65 = (LINEATTRS *)((char *)v62[0] + 208);
  v10 = *(_DWORD *)(v8 + 152);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v62[0], *(_QWORD *)(v8 + 160));
    v7 = v62[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
    v7 = v62[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 62) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL) == 2 )
  {
    goto LABEL_60;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v70);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v69, (struct XDCOBJ *)v62, 0);
  v11 = v62[0];
  v12 = *((_QWORD *)v62[0] + 6);
  if ( (v69[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v62);
    goto LABEL_66;
  }
  v13 = *((_QWORD *)v62[0] + 62);
  v67 = v13;
  if ( !v13 )
    goto LABEL_64;
  v14 = *(_DWORD *)(v13 + 112);
  if ( (v14 & 0x100) != 0 )
  {
    v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12 + 2936);
  }
  else
  {
    if ( *(_WORD *)(v13 + 100) || (v14 & 0x20) != 0 )
      goto LABEL_64;
    v15 = EngLineTo;
  }
  v68 = v15;
  if ( !v15 )
  {
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v69);
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) != 0 )
  {
    v16 = (int *)*((_QWORD *)v62[0] + 122);
    v17 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 24LL) >> 4;
    v18 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 28LL) >> 4;
    v19 = v18 + v4;
    v20 = (unsigned int *)(v16 + 38);
    v21 = v16[38];
    v22 = v3 + v17;
    if ( (v21 & 0x100) != 0 )
    {
      x = v16[2] >> 4;
      y = v16[3] >> 4;
    }
    else
    {
      x = v17 + v16[54];
      y = v18 + v16[55];
    }
  }
  else
  {
    v25 = *((_QWORD *)v62[0] + 122);
    v58[0].x = v3;
    v58[0].y = v4;
    v55 = (unsigned int *)(v25 + 152);
    v53 = *(_DWORD *)(v25 + 152);
    if ( (v53 & 0x200) != 0 )
    {
      v58[1] = *(struct _POINTL *)(v25 + 216);
      EXFORMOBJ::bXform((EXFORMOBJ *)v66, v58, 2LL);
      x = v58[1].x;
      y = v58[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v66, v58, 1LL);
      x = *(int *)(v25 + 8) >> 4;
      y = *(int *)(v25 + 12) >> 4;
    }
    v22 = v58[0].x;
    v19 = v58[0].y;
    v21 = v53;
    v20 = v55;
  }
  v56 = y;
  v64 = x;
  v63 = y;
  v54 = x;
  if ( (unsigned int)(v22 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v26 = v59;
    *v20 = v21 & 0xFFFFFCFF;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 216LL) = v26;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 220LL) = v60;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 8LL) = 16 * v22;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 12LL) = 16 * v19;
    v27 = v62[0];
    v28 = (char *)v62[0] + 1024;
    if ( (*((_DWORD *)v62[0] + 10) & 1) == 0 )
      v28 = (char *)v62[0] + 1016;
    v29 = *(_DWORD *)v28;
    v30 = *(_DWORD *)v28 + x;
    v31 = *((_DWORD *)v62[0] + 2 * (*((_DWORD *)v62[0] + 10) & 1) + 255);
    v32 = v29 + v22;
    v33 = v31 + y;
    v34 = v31 + v19;
    if ( v30 + 134217726 <= 0xFFFFFFC
      && (unsigned int)(v33 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v32 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v34 + 134217726) <= 0xFFFFFFC )
    {
      if ( (int)v30 > v32 )
      {
        v35 = (unsigned int)v32;
        v36 = v30 + 1;
      }
      else
      {
        v35 = v30;
        v36 = v32 + 1;
      }
      DWORD2(v71) = v36;
      LODWORD(v71) = v35;
      if ( v33 > v34 )
      {
        v37 = v34;
        DWORD1(v71) = v34;
        v38 = v33 + 1;
      }
      else
      {
        v37 = v33;
        DWORD1(v71) = v33;
        v38 = v34 + 1;
      }
      HIDWORD(v71) = v38;
      if ( (*((_DWORD *)v62[0] + 9) & 0xE0) != 0 )
      {
        *(_OWORD *)&v58[0].x = v71;
        XDCOBJ::vAccumulate((XDCOBJ *)v62, (struct ECLIPOBJ *)v35, (struct ERECTL *)v58);
        v36 = DWORD2(v71);
        LODWORD(v35) = v71;
        v27 = v62[0];
        v38 = HIDWORD(v71);
        v37 = DWORD1(v71);
      }
      if ( *((struct PEN **)v27 + 18) != gpPenNull )
      {
        v57 = 0LL;
        if ( (int)v35 >= *((_DWORD *)v27 + 250)
          && v36 <= *((_DWORD *)v27 + 252)
          && v37 >= *((_DWORD *)v27 + 251)
          && v38 <= *((_DWORD *)v27 + 253) )
        {
LABEL_50:
          v41 = (char *)v27 + 1344;
          if ( *((_DWORD *)v27 + 336) == -1 )
          {
            *(_DWORD *)(*((_QWORD *)v27 + 122) + 152LL) |= 2u;
            v27 = v62[0];
          }
          v42 = (struct ECLIPOBJ *)*((_QWORD *)v27 + 122);
          v43 = *((_DWORD *)v42 + 38);
          if ( (((unsigned __int8)v43 | *((_BYTE *)v27 + 316)) & 2) != 0 )
          {
            *((_DWORD *)v42 + 38) = v43 & 0xFFFFFFFD;
            v44 = v67;
            v52 = v67;
            *((_DWORD *)v62[0] + 79) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v41,
              v62[0],
              *((_QWORD *)v62[0] + 18),
              *((_QWORD *)v62[0] + 11),
              *(_QWORD *)(v44 + 128),
              v52,
              0);
            v27 = v62[0];
          }
          if ( (*((_DWORD *)v27 + 9) & 0xE0) != 0 && (*((_DWORD *)v41 + 30) & 0x100) == 0 )
          {
            *(_OWORD *)&v58[0].x = v71;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v62, v42, (__m128i *)v58);
          }
          v45 = v67;
          ++*(_DWORD *)(v67 + 92);
          if ( !((unsigned int (__fastcall *)(__int64, char *, char *, _QWORD, int, signed int, int, __int128 *, int))v68)(
                  v45 + 24,
                  v57,
                  v41,
                  v30,
                  v33,
                  v32,
                  v34,
                  &v71,
                  (((*(_BYTE *)(*((_QWORD *)v62[0] + 122) + 212LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_QWORD *)v62[0] + 122) + 212LL)
                                                                                        - 1) & 0xF)
                                                                                      + 1) << 8)) )
          {
            v46 = v62[0];
            *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= ~0x200u;
            *(_DWORD *)(*((_QWORD *)v46 + 122) + 152LL) |= 0x100u;
            *(_DWORD *)(*((_QWORD *)v46 + 122) + 8LL) = 16 * v54;
            *(_DWORD *)(*((_QWORD *)v46 + 122) + 12LL) = 16 * v63;
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v69);
            v3 = v59;
            v4 = v60;
LABEL_59:
            v9 = v65;
LABEL_60:
            v61.x = v3;
            v61.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v62, 1);
            if ( v73 )
            {
              if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v66, &v61, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
                v50 = v62[0];
                *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v50 + 122) + 216LL) = v61;
                *(_DWORD *)(*((_QWORD *)v50 + 122) + 8LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v50 + 122) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v62[0] + 62) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v62, v9, v66, 1u) )
                {
                  v5 = 0;
                }
              }
            }
            else
            {
              EngSetLastError(8u);
            }
            EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
            if ( v75 )
              PopThreadGuardedObject(v74);
            goto LABEL_76;
          }
          goto LABEL_66;
        }
        v39 = (char *)v27 + 1776;
        v57 = (char *)v27 + 1776;
        v40 = XDCOBJ::prgnEffRao(v62);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v40, (struct ERECTL *)&v71, 0);
        if ( !ERECTL::bEmpty((ERECTL *)(v39 + 4)) )
        {
          v27 = v62[0];
          goto LABEL_50;
        }
      }
LABEL_66:
      v6 = v5;
      goto LABEL_67;
    }
    EngSetLastError(0x57u);
    v47 = v62[0];
    v48 = 16 * v64;
    *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 152LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 8LL) = v48;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 12LL) = 16 * v56;
  }
LABEL_67:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v69);
LABEL_77:
  DCOBJ::~DCOBJ((DCOBJ *)v62);
  return v6;
}
