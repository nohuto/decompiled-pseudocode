/*
 * XREFs of GreDrawStream @ 0x1C0083A60
 * Callers:
 *     NtGdiDrawStream @ 0x1C0083980 (NtGdiDrawStream.c)
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084708 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0084730 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0087360 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D4270 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D43FC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C01199A4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137CD0 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D7BC (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C028B6C4 (--0SURFREFDC@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(struct SURFACE *a1, unsigned int a2, _DWORD *a3)
{
  XLATEOBJ *v4; // r14
  __int64 v5; // rsi
  char *v6; // r11
  int v7; // r10d
  struct SURFACE *v8; // r8
  struct SURFACE *v9; // r9
  struct PALETTE *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  bool v14; // zf
  _DWORD *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // r11d
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  LONG *v28; // rdx
  char *v29; // r11
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct SURFACE *v33; // rbx
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  int v42; // ecx
  unsigned int v43; // esi
  __int64 v44; // r14
  unsigned int i; // r11d
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // r9
  __int64 v49; // r10
  unsigned int v50; // eax
  __int64 v51; // r9
  __int64 v52; // r10
  struct _XLATEOBJ *v53; // rdx
  int v54; // r8d
  unsigned int v55; // eax
  __int64 XlateObject; // rax
  int v57; // ebx
  __int64 v58; // rcx
  int v59; // r8d
  LONG left; // edx
  LONG top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  __int64 v64; // rdi
  struct PALETTE *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 cEntries; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  struct SURFACE *v74; // rbx
  __int64 v75; // rdx
  __int16 v76; // ax
  __int64 v77; // rcx
  struct _RECTL *v79; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v80; // [rsp+28h] [rbp-D8h]
  int v81; // [rsp+50h] [rbp-B0h]
  unsigned int v83; // [rsp+64h] [rbp-9Ch]
  int v84; // [rsp+68h] [rbp-98h]
  int v85; // [rsp+6Ch] [rbp-94h]
  __int64 v86; // [rsp+70h] [rbp-90h] BYREF
  struct _XLATEOBJ *v87; // [rsp+78h] [rbp-88h] BYREF
  char *v88; // [rsp+80h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v90; // [rsp+90h] [rbp-70h]
  _DWORD *v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  struct SURFACE *v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+B0h] [rbp-50h]
  int v95; // [rsp+B4h] [rbp-4Ch]
  struct SURFACE *v96; // [rsp+B8h] [rbp-48h]
  struct _XLATEOBJ *v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  int v99; // [rsp+D0h] [rbp-30h]
  int v100; // [rsp+D4h] [rbp-2Ch]
  struct PALETTE *v101; // [rsp+D8h] [rbp-28h]
  _QWORD v102[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v103; // [rsp+110h] [rbp+10h] BYREF
  __int64 v104; // [rsp+118h] [rbp+18h] BYREF
  struct PALETTE *v105; // [rsp+120h] [rbp+20h] BYREF
  __int64 v106; // [rsp+128h] [rbp+28h] BYREF
  struct SURFACE *v107; // [rsp+130h] [rbp+30h]
  struct PALETTE *v108; // [rsp+138h] [rbp+38h]
  _BYTE v109[32]; // [rsp+140h] [rbp+40h] BYREF
  struct SURFACE *v110; // [rsp+160h] [rbp+60h]
  __int128 v111; // [rsp+170h] [rbp+70h] BYREF
  __int64 v112; // [rsp+180h] [rbp+80h]
  int v113; // [rsp+188h] [rbp+88h]
  _QWORD v114[2]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v115[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v116; // [rsp+1C0h] [rbp+C0h]
  __int64 v117; // [rsp+1C8h] [rbp+C8h]
  __int64 v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  __int128 v120; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v121; // [rsp+1F0h] [rbp+F0h]
  __int128 v122; // [rsp+200h] [rbp+100h]
  __int128 v123; // [rsp+210h] [rbp+110h]
  __int64 v124; // [rsp+220h] [rbp+120h]
  struct _RECTL v125; // [rsp+230h] [rbp+130h] BYREF
  struct _RECTL v126; // [rsp+240h] [rbp+140h] BYREF

  v107 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v102);
  SURFREFDC::SURFREFDC((SURFREFDC *)v109);
  v4 = 0LL;
  LODWORD(v5) = 0;
  v98 = 0LL;
  v100 = 0;
  v114[0] = 0LL;
  v114[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v115);
  v6 = 0LL;
  v7 = 0;
  v116 = 256;
  v111 = 0LL;
  v8 = 0LL;
  v112 = 0LL;
  v9 = 0LL;
  v113 = 0;
  v10 = 0LL;
  v114[0] = 0LL;
  v11 = 0LL;
  v119 = 0LL;
  v12 = 0LL;
  v118 = 0LL;
  v13 = 0LL;
  v117 = 0LL;
  v108 = gppalRGB;
  v93 = 0LL;
  v96 = 0LL;
  v101 = 0LL;
  v97 = 0LL;
  v87 = 0LL;
  v84 = 0;
  v88 = 0LL;
  v124 = 0LL;
  v85 = 0;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  if ( a2 >= 4 )
  {
    v14 = *a3 == 1148352339;
    v15 = a3 + 1;
    v91 = a3 + 1;
    if ( v14 )
    {
      v16 = a2 - 4;
      LODWORD(v17) = 1;
      v83 = v16;
      if ( (unsigned int)v16 >= 4 )
      {
        while ( 1 )
        {
          switch ( *v15 )
          {
            case 0:
              if ( v6 )
                goto LABEL_116;
              v90 = 24;
              if ( (unsigned int)v16 < 0x18 )
                goto LABEL_145;
              v16 = (int)v15[1];
              if ( (struct SURFACE *)v16 != v107 )
                goto LABEL_145;
              if ( !v7 )
              {
                XDCOBJ::vLock((XDCOBJ *)v102, (HDC)v16);
                v7 = v85;
              }
              v16 = v102[0];
              if ( !v102[0]
                || (*(_DWORD *)(v102[0] + 36LL) & 0x10000) != 0
                || !v7 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v111, (struct XDCOBJ *)v102, 0) )
              {
                goto LABEL_145;
              }
              v16 = v102[0];
              v99 = *(_DWORD *)(*(_QWORD *)(v102[0] + 976LL) + 208LL);
              v57 = *(_DWORD *)(*(_QWORD *)(v102[0] + 976LL) + 108LL) & 1;
              v100 = v57;
              if ( (*(_DWORD *)(*(_QWORD *)(v102[0] + 976LL) + 340LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v98, (struct XDCOBJ *)v102, 0x204u, 0);
                v58 = v98;
                v57 = v100;
              }
              else
              {
                v58 = v102[0] + 320LL;
                v98 = v102[0] + 320LL;
              }
              v59 = *(_DWORD *)(v58 + 32);
              if ( (v59 & 1) == 0 )
                goto LABEL_145;
              left = v15[2];
              top = v15[3];
              right = v15[4];
              bottom = v15[5];
              v125.left = left;
              v125.top = top;
              v125.right = right;
              v125.bottom = bottom;
              if ( (v59 & 0x43) != 0x43 )
              {
                bCvtPts1(v58, &v125, 2LL);
                bottom = v125.bottom;
                right = v125.right;
                top = v125.top;
                left = v125.left;
              }
              if ( v57 )
              {
                ++left;
                ++right;
                v125.left = left;
                v125.right = right;
              }
              if ( left > right )
              {
                v125.left = right;
                v125.right = left;
              }
              if ( top > bottom )
              {
                v125.top = bottom;
                v125.bottom = top;
              }
              if ( (*(_DWORD *)(v102[0] + 36LL) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v102, (struct ERECTL *)&v125);
              v16 = v102[0];
              v8 = *(struct SURFACE **)(v102[0] + 496LL);
              v93 = v8;
              if ( !v8 )
                goto LABEL_145;
              v11 = *((_QWORD *)v8 + 16);
              v12 = *(_QWORD *)(v102[0] + 88LL);
              if ( v13 )
              {
                if ( (*(_DWORD *)(v13 + 24) & 0x2000) != 0 )
                  goto LABEL_145;
              }
              v85 = 1;
              break;
            case 1:
              if ( v6 )
                goto LABEL_116;
              SURFREFDC::vUnlock((SURFREFDC *)v109);
              v90 = 8;
              if ( v83 < 8 )
                goto LABEL_145;
              if ( !v85 )
                goto LABEL_145;
              LOBYTE(v16) = 5;
              v96 = (struct SURFACE *)HmgShareLockCheck((int)v15[1], v16);
              v16 = (unsigned __int64)v96;
              v110 = v96;
              if ( !v96 )
                goto LABEL_145;
              if ( v96 != SURFACE::pdibDefault )
              {
                GreAcquireHmgrSemaphore(v30, v96, v31, v32, v79, v80);
                v33 = v110;
                INC_SHARE_REF_CNT(v110);
                ++*((_DWORD *)v33 + 42);
                DEC_SHARE_REF_CNT(v110, v34);
                GreReleaseHmgrSemaphore();
                v16 = (unsigned __int64)v110;
                v96 = v110;
              }
              if ( !v16 )
                goto LABEL_145;
              v13 = *(_QWORD *)(v16 + 128);
              v101 = ppalDefault;
              if ( !v13 )
                goto LABEL_145;
              v35 = *(_DWORD *)(v13 + 24);
              if ( (v35 & 0x2000) != 0 || (struct SURFACE *)v16 == v93 || *(_DWORD *)(v16 + 96) != 6 )
                goto LABEL_145;
              v36 = *(_QWORD *)(v102[0] + 976LL);
              v37 = *(_DWORD *)(v36 + 176);
              v95 = *(_DWORD *)(v36 + 184);
              LODWORD(v97) = *(_DWORD *)(v102[0] + 120LL);
              v94 = v37;
              if ( v11 )
              {
                v39 = *(_QWORD *)(v13 + 120);
                if ( v39 == v13 )
                  v40 = *(_DWORD *)(v13 + 32);
                else
                  v40 = *(_DWORD *)(v39 + 32);
                v41 = *(_QWORD *)(v11 + 120);
                if ( v41 == v11 )
                  v42 = *(_DWORD *)(v11 + 32);
                else
                  v42 = *(_DWORD *)(v41 + 32);
                if ( v40 != v42 )
                {
                  v43 = *(_DWORD *)(v13 + 56);
                  v104 = v12;
                  v105 = ppalDefault;
                  v103 = v11;
                  v106 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v44 = *(_QWORD *)(v13 + 120);
                  for ( i = 0; i < 8; ++i )
                  {
                    if ( v44 == v13 )
                      v46 = *(_DWORD *)(v13 + 32);
                    else
                      v46 = *(_DWORD *)(v44 + 32);
                    if ( *((_DWORD *)&xlateTable + 8 * v43 + 4) == v46 )
                    {
                      v47 = XEPALOBJ::ulTime((XEPALOBJ *)&v103);
                      if ( *(_DWORD *)(v48 + v49 + 20) == v47 )
                      {
                        v50 = XEPALOBJ::ulTime((XEPALOBJ *)&v104);
                        if ( *(_DWORD *)(v51 + v52 + 28) == v50 )
                        {
                          v53 = *(struct _XLATEOBJ **)(v51 + v52 + 8);
                          v87 = v53;
                          if ( (v53[3].flXlate & 0x6000) == 0 )
                          {
                            if ( (v54 = v53[3].flXlate & 0x100, (v53->flXlate & 4) == 0) && !v54
                              || (v53->flXlate & 4) != 0
                              && !v53[1].iUniq
                              && (v55 = XEPALOBJ::ulTime((XEPALOBJ *)&v105), *(_DWORD *)(v51 + v52 + 24) == v55)
                              || v54 && v95 == v53[1].flXlate && v94 == *(_DWORD *)&v53[1].iSrcType )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v51 + v52));
                              *(_DWORD *)(v13 + 56) = v43;
                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v106);
                              v4 = v87;
                              v15 = v91;
                              v8 = v93;
                              v97 = v87;
                              goto LABEL_112;
                            }
                          }
                        }
                      }
                    }
                    v43 = ((_BYTE)v43 + 1) & 7;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
LABEL_79:
                  XlateObject = CreateXlateObject(
                                  0LL,
                                  (unsigned int)v97,
                                  v13,
                                  v11,
                                  ppalDefault,
                                  v12,
                                  v95,
                                  v94,
                                  0,
                                  0,
                                  v81);
                  v87 = (struct _XLATEOBJ *)XlateObject;
                  v4 = (XLATEOBJ *)XlateObject;
                  if ( !XlateObject )
                  {
                    LODWORD(v5) = 0;
                    goto LABEL_157;
                  }
                  if ( v11 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache(&v87, v13, v11, ppalDefault, v12);
                  v15 = v91;
                  v8 = v93;
                  v97 = v4;
                  break;
                }
              }
              else
              {
                if ( (v35 & 0x800) == 0 )
                  goto LABEL_79;
                v38 = *(_QWORD *)(v12 + 80);
                if ( v38 )
                {
                  if ( v38 != *(_QWORD *)(v12 + 72) )
                    goto LABEL_79;
                }
              }
              v4 = xloIdent;
              v15 = v91;
              v8 = v93;
              v87 = xloIdent;
              v97 = xloIdent;
              break;
            case 9:
              v90 = 60;
              if ( (unsigned int)v16 < 0x3C )
                goto LABEL_145;
              v18 = v15[9];
              if ( (v18 & 0xFFFFFF80) != 0 )
                goto LABEL_145;
              if ( !v9 )
                goto LABEL_145;
              v19 = v15[5];
              if ( v19 < 0 )
                goto LABEL_145;
              v20 = v15[6];
              if ( v20 < 0 )
                goto LABEL_145;
              v16 = (unsigned int)v15[7];
              if ( (int)v16 > *((_DWORD *)v9 + 14) )
                goto LABEL_145;
              v21 = v15[8];
              if ( v21 > *((_DWORD *)v9 + 15) )
                goto LABEL_145;
              v16 = (unsigned int)(v16 - v19);
              v22 = v21 - v20;
              if ( (int)v16 <= 0 )
                goto LABEL_145;
              if ( v22 <= 0 )
                goto LABEL_145;
              if ( (v18 & 0x20) == 0 )
              {
                v23 = v15[10];
                if ( v23 < 0 )
                  goto LABEL_145;
                v24 = v15[11];
                if ( v24 < 0 )
                  goto LABEL_145;
                v25 = v15[12];
                if ( v25 < 0 )
                  goto LABEL_145;
                v26 = v15[13];
                if ( v26 < 0
                  || v23 > (int)v16
                  || v24 > (int)v16
                  || v25 > v22
                  || v26 > v22
                  || v23 + v24 > (int)v16
                  || v26 + v25 > v22 )
                {
                  goto LABEL_145;
                }
              }
              if ( (v18 & 0xC) == 0xC )
                goto LABEL_145;
              if ( (v18 & 8) != 0 )
              {
                v15[14] = ulGetNearestIndexFromColorref(v13, v10, (unsigned int)v15[14], 1LL);
              }
              else
              {
                v27 = v84;
                if ( (v18 & 4) != 0 )
                  v27 = 1;
                v84 = v27;
              }
              v28 = v15 + 1;
              if ( !v88 )
              {
                v29 = (char *)v15;
                v8 = v93;
                v126.left = *v28;
                v126.top = v15[2];
                v126.right = v15[3];
                v126.bottom = v15[4];
                v88 = (char *)v15;
                goto LABEL_113;
              }
              ERECTL::operator+=(&v126, v28);
              v8 = v93;
              break;
            default:
              goto LABEL_145;
          }
LABEL_112:
          v29 = v88;
LABEL_113:
          v16 = v83 - v90;
          v83 = v16;
          v15 += (unsigned __int64)v90 >> 2;
          v91 = v15;
          if ( (_DWORD)v16 || !v29 )
            goto LABEL_142;
          v9 = v96;
LABEL_116:
          if ( v102[0] && v9 )
          {
            *(_QWORD *)&v120 = 72LL;
            v5 = 0LL;
            v86 = 0LL;
            v64 = 0LL;
            v89 = 0LL;
            v17 = 0LL;
            v92 = 0LL;
            *((_QWORD *)&v120 + 1) = 33488896LL;
            *(_QWORD *)&v121 = 0LL;
            if ( v84 )
            {
              if ( (unsigned int)(*((_DWORD *)v8 + 24) - 1) <= 2 )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v89);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
                break;
              }
              v65 = v108;
              v80 = (struct _RECTL *)v101;
              v79 = (struct _RECTL *)v108;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v86, 0LL, 0LL) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v89);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
                goto LABEL_146;
              }
              v5 = v86;
              *(_QWORD *)&v122 = v86;
              v80 = (struct _RECTL *)v12;
              v79 = (struct _RECTL *)v65;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v89, 0LL, 0LL) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v89);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
                LODWORD(v5) = 0;
                goto LABEL_146;
              }
              v64 = v89;
              v81 = 0;
              v80 = (struct _RECTL *)v12;
              v79 = (struct _RECTL *)v11;
              *((_QWORD *)&v122 + 1) = v89;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v92, 0LL, 0LL) )
                goto LABEL_144;
              v17 = v92;
              *(_QWORD *)&v123 = v92;
            }
            else
            {
              *(_QWORD *)&v123 = 0LL;
              v122 = 0uLL;
            }
            if ( !NtGdiDrawStreamInternal(
                    (struct XDCOBJ *)v102,
                    (struct EXFORMOBJ *)&v98,
                    v96,
                    v97,
                    &v125,
                    &v126,
                    (_DWORD)v91 - (_DWORD)v88,
                    v88,
                    (struct _DRAWSTREAMINFO *)&v120) )
            {
LABEL_144:
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v89);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
LABEL_145:
              LODWORD(v5) = 0;
              goto LABEL_146;
            }
            v88 = 0LL;
            v84 = 0;
            if ( v17 )
            {
              v67 = *(int *)(v17 + 36);
              if ( (int)v67 < 0 )
              {
                if ( (_DWORD)v67 == -1 )
                  FreeThreadBufferWithTag(v17, v66);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v67);
                v4 = v87;
                v5 = v86;
                v64 = v89;
              }
            }
            if ( v64 )
            {
              v68 = *(int *)(v64 + 36);
              if ( (int)v68 < 0 )
              {
                if ( (_DWORD)v68 == -1 )
                  FreeThreadBufferWithTag(v64, v66);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v68);
                v4 = v87;
                v5 = v86;
              }
            }
            if ( v5 )
            {
              v69 = *(int *)(v5 + 36);
              if ( (int)v69 < 0 )
              {
                if ( (_DWORD)v69 == -1 )
                  FreeThreadBufferWithTag(v5, v66);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v69);
                v4 = v87;
              }
            }
            v16 = v83;
            v15 = v91;
          }
LABEL_142:
          LODWORD(v17) = 1;
          if ( (unsigned int)v16 < 4 )
            break;
          v10 = v101;
          v9 = v96;
          v8 = v93;
          v7 = v85;
          v6 = v88;
        }
      }
      LODWORD(v5) = v17;
LABEL_146:
      if ( v4 )
      {
        cEntries = (int)v4[1].cEntries;
        if ( (int)cEntries < 0 )
        {
          if ( (_DWORD)cEntries == -1 )
            FreeThreadBufferWithTag(v4, v16);
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        }
      }
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
LABEL_157:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v111);
  if ( v114[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v114);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v115);
  if ( v110 )
  {
    if ( v110 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v110, v71);
    }
    else
    {
      GreAcquireHmgrSemaphore(v110, v71, v72, v73, v79, v80);
      v74 = v110;
      DEC_SHARE_REF_CNT(v110, v75);
      v14 = (*((_DWORD *)v74 + 42))-- == 1;
      if ( v14 )
      {
        if ( (*(_DWORD *)v74 & 0x800000) != 0 )
        {
          v76 = *((_WORD *)v74 + 51);
          if ( (v76 & 0x400) != 0 )
          {
            v77 = *(_QWORD *)v74;
            *((_WORD *)v74 + 51) = v76 & 0xFBFF;
            GreMakeBitmapNonStock(v77);
          }
        }
        *((_QWORD *)v74 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
    v110 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v109);
  DCOBJ::~DCOBJ((DCOBJ *)v102);
  return (unsigned int)v5;
}
