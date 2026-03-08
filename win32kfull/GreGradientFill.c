/*
 * XREFs of GreGradientFill @ 0x1C0001610
 * Callers:
 *     NtGdiGradientFill @ 0x1C0001410 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C022EA20 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0001FFC (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00E6260 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 GreGradientFill(
        __int64 a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        unsigned __int8 a6,
        ...)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // r14
  struct _TRIVERTEX *v9; // rsi
  struct _TRIVERTEX *v10; // r12
  __int64 *ThreadWin32Thread; // rax
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  struct UMPDOBJ *v16; // rdx
  DC *v17; // r9
  int v18; // ebx
  unsigned int v19; // ebx
  struct _DC_ATTR *v20; // rax
  __int64 v21; // rdi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v24; // r9
  DC *v25; // rdx
  char *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rax
  struct _TRIVERTEX *v33; // r9
  int v34; // r8d
  int *v35; // rsi
  __int64 v36; // rcx
  char *v37; // rdx
  __int128 v38; // xmm0
  int v39; // ebx
  unsigned int v40; // r11d
  int v41; // r13d
  struct _TRIVERTEX *v42; // rcx
  struct _TRIVERTEX *v43; // rdx
  struct _TRIVERTEX *v44; // r10
  struct _TRIVERTEX *v45; // r9
  bool v46; // zf
  COLOR16 Alpha; // ax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // r13d
  ULONG v52; // ecx
  struct _TRIVERTEX *v53; // rbx
  __int64 v54; // rdi
  LONG x; // r8d
  int v56; // eax
  LONG y; // r9d
  _DWORD *v58; // rcx
  DC *v59; // rdx
  __int64 v60; // r10
  struct REGION *v61; // r10
  struct ECLIPOBJ *v62; // rdx
  DC *v63; // r13
  struct ECLIPOBJ *v64; // rdx
  __int64 v65; // r13
  Gre::Base *v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // rdi
  __int64 v70; // rbx
  struct Gre::Base::SESSION_GLOBALS *v71; // rax
  unsigned int inited; // eax
  char *v73; // rax
  BOOL (__stdcall *v74)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  DC *v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h]
  int v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v79; // [rsp+80h] [rbp-80h]
  int v80; // [rsp+84h] [rbp-7Ch] BYREF
  struct _TRIVERTEX *v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  char *v83; // [rsp+98h] [rbp-68h] BYREF
  int v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A4h] [rbp-5Ch]
  struct _RECTL v86; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v87[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  char v90; // [rsp+F0h] [rbp-10h]
  int v91; // [rsp+F4h] [rbp-Ch]
  int v92; // [rsp+118h] [rbp+18h]
  __int128 v93; // [rsp+120h] [rbp+20h]
  int v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int16 v97; // [rsp+148h] [rbp+48h]
  __int64 v98; // [rsp+150h] [rbp+50h]
  __int64 v99; // [rsp+158h] [rbp+58h]
  __int16 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+168h] [rbp+68h]
  __int128 v102; // [rsp+170h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  __int64 v105; // [rsp+190h] [rbp+90h]
  __int64 v106; // [rsp+198h] [rbp+98h]
  struct _RECTL si128; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v108[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v109; // [rsp+1B4h] [rbp+B4h]
  int v110; // [rsp+1B8h] [rbp+B8h]
  int v111; // [rsp+1BCh] [rbp+BCh]
  int v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+200h] [rbp+100h]
  int v114; // [rsp+208h] [rbp+108h]
  int v115; // [rsp+230h] [rbp+130h]
  __int64 v116; // [rsp+240h] [rbp+140h]

  v6 = a6;
  v7 = 0;
  v8 = a3;
  v9 = a2;
  v81 = a2;
  LOBYTE(a2) = 1;
  v77 = a6;
  v10 = 0LL;
  v76 = 0LL;
  v75 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v75 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_33:
    v17 = v75;
    goto LABEL_34;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v14 = *ThreadWin32Thread) != 0 && (v15 = *(_QWORD *)(v14 + 40), v15 != v14 + 40) )
    v16 = (struct UMPDOBJ *)(v15 - 40);
  else
    v16 = 0LL;
  v17 = v75;
  if ( *((_WORD *)v75 + 6) == 1 )
  {
    *((_QWORD *)v75 + 271) = v16;
    *((_DWORD *)v75 + 544) = 0xFFFF;
    v17 = v75;
  }
  else if ( *((struct UMPDOBJ **)v75 + 271) != v16 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v75, v16);
    goto LABEL_16;
  }
  if ( !HIDWORD(v76) )
  {
LABEL_34:
    if ( !v17 )
      goto LABEL_18;
    if ( (*((_DWORD *)v17 + 11) & 2) != 0 )
    {
LABEL_41:
      if ( (*((_DWORD *)v17 + 130) & 4) != 0 )
      {
        DC::vMarkTransformDirty(v17);
        v17 = v75;
      }
      if ( !v17 || (*((_DWORD *)v17 + 9) & 0x10000) != 0 )
        goto LABEL_18;
      v89 = 0LL;
      memset(v87, 0, sizeof(v87));
      v93 = 0LL;
      v102 = 0LL;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v96 = 0LL;
      v97 = 256;
      v99 = 0LL;
      v100 = 256;
      v88 = 0LL;
      v94 = 0;
      v101 = 0LL;
      v103 = 0LL;
      v106 = 0LL;
      v104 = 0LL;
      v105 = 0LL;
      v95 = 0LL;
      v98 = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v87, (struct XDCOBJ *)&v75, v13) )
      {
        v19 = XDCOBJ::bFullScreen((XDCOBJ *)&v75);
        goto LABEL_120;
      }
      v25 = v75;
      v84 = *(_DWORD *)(*((_QWORD *)v75 + 122) + 208LL);
      v85 = *(_DWORD *)(*((_QWORD *)v75 + 122) + 108LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v75 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v83, (struct XDCOBJ *)&v75, 0x204u, 0);
        v25 = v75;
        v26 = v83;
      }
      else
      {
        v26 = (char *)v75 + 320;
        v83 = (char *)v75 + 320;
      }
      if ( (*((_DWORD *)v26 + 8) & 1) == 0 && v6 <= 1 )
      {
        v27 = 2LL * a5;
        if ( v27 > 0xFFFFFFFF
          || (v28 = 12LL * (unsigned int)v27, v28 > 0xFFFFFFFF)
          || (v29 = v8 + 2 * a5, v79 = 2 * a5, v29 < 2 * a5)
          || (v30 = 16LL * v29, v30 > 0xFFFFFFFF)
          || (v31 = v30 + v28, (int)v30 + (int)v28 < (unsigned int)v28) )
        {
          v52 = 534;
        }
        else
        {
          if ( v31 <= 0x2710000 )
          {
            if ( v31 )
            {
              v32 = Win32AllocPool(v31, 1886221383LL, 0xFFFFFFFFLL, v24);
              v10 = (struct _TRIVERTEX *)v32;
              if ( v32 )
              {
                v33 = v81;
                v34 = 0;
                v35 = (int *)(v32 + (unsigned int)v30);
                if ( (_DWORD)v8 )
                {
                  v36 = v8;
                  v37 = (char *)v81 - v32;
                  v34 = v8;
                  do
                  {
                    v38 = *(_OWORD *)&v37[v32];
                    v32 += 16LL;
                    *(_OWORD *)(v32 - 16) = v38;
                    --v36;
                  }
                  while ( v36 );
                }
                if ( a5 )
                {
                  while ( 1 )
                  {
                    v39 = *a4;
                    v40 = a4[1];
                    if ( *a4 >= (unsigned int)v8 || v40 >= (unsigned int)v8 )
                      break;
                    v41 = v34 + 1;
                    v42 = &v33[v40];
                    v43 = &v10[v34];
                    v44 = &v10[v34 + 1];
                    v43->x = v42->x;
                    v45 = &v33[v39];
                    v46 = v77 == 1;
                    v43->y = v45->y;
                    v44->x = v45->x;
                    v44->y = v42->y;
                    if ( v46 )
                    {
                      v43->Red = v45->Red;
                      v43->Green = v45->Green;
                      v43->Blue = v45->Blue;
                      v43->Alpha = v45->Alpha;
                      v44->Red = v42->Red;
                      v44->Green = v42->Green;
                      v44->Blue = v42->Blue;
                      Alpha = v42->Alpha;
                    }
                    else
                    {
                      v43->Red = v42->Red;
                      v43->Green = v42->Green;
                      v43->Blue = v42->Blue;
                      v43->Alpha = v42->Alpha;
                      v44->Red = v45->Red;
                      v44->Green = v45->Green;
                      v44->Blue = v45->Blue;
                      Alpha = v45->Alpha;
                    }
                    v33 = v81;
                    v48 = 2 * v7;
                    v44->Alpha = Alpha;
                    v49 = 3 * v48;
                    v35[v49 + 1] = v34;
                    v50 = 3LL * (unsigned int)(v48 + 1);
                    v35[v49] = v39;
                    v35[v50 + 1] = v34;
                    ++v7;
                    v34 += 2;
                    v35[v49 + 2] = v41;
                    a4 += 2;
                    v35[v50] = v40;
                    v35[v50 + 2] = v41;
                    if ( v7 >= a5 )
                      goto LABEL_70;
                  }
                  EngSetLastError(0x57u);
                  Win32FreePool(v10);
                  goto LABEL_75;
                }
LABEL_70:
                v25 = v75;
                v6 = 2;
                v26 = v83;
                a4 = v35;
                v51 = v79;
                v9 = v10;
                v77 = 2;
                LODWORD(v8) = v34;
                v81 = v10;
LABEL_77:
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                if ( (_DWORD)v8 )
                {
                  v53 = v9;
                  v54 = (unsigned int)v8;
                  while ( 1 )
                  {
                    x = v53->x;
                    v56 = *((_DWORD *)v26 + 8) & 0x43;
                    y = v53->y;
                    LODWORD(v78) = v53->x;
                    HIDWORD(v78) = y;
                    if ( (_BYTE)v56 != 67 )
                    {
                      bCvtPts1(v26, &v78, 1LL);
                      v25 = v75;
                      y = HIDWORD(v78);
                      x = v78;
                    }
                    if ( (*(_DWORD *)(*((_QWORD *)v25 + 122) + 108LL) & 1) != 0 )
                      ++x;
                    v58 = (_DWORD *)((char *)v25 + 1024);
                    if ( (*((_DWORD *)v25 + 10) & 1) == 0 )
                      v58 = (_DWORD *)((char *)v25 + 1016);
                    v53->x = x + *v58;
                    v53->y = y + *((_DWORD *)v75 + 2 * (*((_DWORD *)v75 + 10) & 1) + 255);
                    ++v53;
                    if ( !--v54 )
                      break;
                    v25 = v75;
                    v26 = v83;
                  }
                  v6 = v77;
                }
                v19 = bCalcMeshExtent(v9, v8, a4, v51, v6, &si128);
                if ( !v19 )
                  goto LABEL_120;
                v59 = v75;
                v60 = *((_QWORD *)v75 + 146);
                if ( !v60 || (*((_DWORD *)v75 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v75) )
                {
                  if ( !*((_QWORD *)v59 + 144) )
                  {
                    v61 = DC::prgnVisSnap(v59);
                    goto LABEL_98;
                  }
                  if ( !v60 )
                    goto LABEL_96;
                }
                if ( (*((_DWORD *)v59 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v59) )
LABEL_96:
                  v61 = (struct REGION *)*((_QWORD *)v59 + 144);
LABEL_98:
                v115 = 1;
                v113 = 0LL;
                v114 = 0;
                v116 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)v108, v61, (struct ERECTL *)&si128, 0);
                if ( v109 != v111 && v110 != v112 )
                {
                  v63 = v75;
                  if ( (*((_DWORD *)v75 + 9) & 0xE0) != 0 )
                  {
                    v86 = si128;
                    XDCOBJ::vAccumulate((XDCOBJ *)&v75, v62, (struct ERECTL *)&v86);
                    XDCOBJ::vAccumulateTight((XDCOBJ *)&v75, v64, (struct ERECTL *)&v86);
                    v63 = v75;
                  }
                  v65 = *((_QWORD *)v63 + 62);
                  if ( v65 )
                  {
                    ++*(_DWORD *)(v65 + 92);
                    v66 = (Gre::Base *)(v65 + 96);
                    v67 = *(_QWORD *)(v65 + 48);
                    v78 = 0LL;
                    *(_QWORD *)&v86.left = v65 + 96;
                    if ( (*(_DWORD *)(v67 + 40) & 0x80u) != 0 )
                    {
                      *(_QWORD *)&v86.left = v65 + 96;
                    }
                    else if ( *(_DWORD *)v66 > 3u )
                    {
                      v68 = 0LL;
LABEL_108:
                      v73 = (char *)v75 + 1024;
                      if ( (*((_DWORD *)v75 + 10) & 1) == 0 )
                        v73 = (char *)v75 + 1016;
                      v82 = *(_QWORD *)v73;
                      HIDWORD(v82) = -HIDWORD(v82);
                      v46 = *(_DWORD *)v66 == 3;
                      LODWORD(v82) = -(int)v82;
                      if ( v46 || (*(_DWORD *)(v65 + 112) & 0x20000) == 0 )
                        v74 = EngGradientFill;
                      else
                        v74 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v67 + 3208);
                      if ( !v19
                        || (v19 = 1,
                            !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, int *, unsigned int, struct _RECTL *, __int64 *, int))v74)(
                               v65 + 24,
                               v108,
                               v68,
                               v81,
                               v8,
                               a4,
                               v79,
                               &si128,
                               &v82,
                               v77)) )
                      {
                        v19 = 0;
                      }
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v78);
                      goto LABEL_120;
                    }
                    v69 = *(_QWORD *)(v65 + 128);
                    v70 = *((_QWORD *)v75 + 11);
                    v71 = Gre::Base::Globals(v66);
                    inited = EXLATEOBJ::bInitXlateObj(
                               &v78,
                               *(_QWORD *)(*((_QWORD *)v75 + 122) + 248LL),
                               *((unsigned int *)v75 + 30),
                               *((_QWORD *)v71 + 751),
                               v69,
                               v70,
                               v70,
                               *(_DWORD *)(*((_QWORD *)v75 + 122) + 184LL),
                               *(_DWORD *)(*((_QWORD *)v75 + 122) + 176LL),
                               0,
                               0);
                    v68 = v78;
                    v19 = inited;
                    v66 = *(Gre::Base **)&v86.left;
                    goto LABEL_108;
                  }
                }
                v19 = 1;
LABEL_120:
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v87);
                if ( v10 )
                  Win32FreePool(v10);
                v17 = v75;
                goto LABEL_19;
              }
            }
          }
          v52 = 8;
        }
        EngSetLastError(v52);
LABEL_75:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v87);
        DCOBJ::~DCOBJ((DCOBJ *)&v75);
        return 0LL;
      }
      v51 = a5;
      v79 = a5;
      goto LABEL_77;
    }
    if ( HIDWORD(v76) )
    {
LABEL_40:
      *((_DWORD *)v17 + 11) |= 2u;
      v17 = v75;
      LODWORD(v76) = 1;
      goto LABEL_41;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v75);
    if ( !UserAttr || DC::SaveAttributes(v75, UserAttr) )
    {
      v17 = v75;
      goto LABEL_40;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v75 + 3);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v17 + 6) + 40LL) & 0x8000) != 0 )
  {
    v18 = *((_DWORD *)v17 + 528);
    if ( v18 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v17 = v75;
      goto LABEL_13;
    }
    v6 = v77;
    goto LABEL_33;
  }
LABEL_13:
  _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
LABEL_17:
  v75 = 0LL;
  v17 = 0LL;
LABEL_18:
  v19 = 0;
LABEL_19:
  if ( v17 )
  {
    if ( (_DWORD)v76 && (*((_DWORD *)v17 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v76) )
      {
        v20 = XDCOBJ::GetUserAttr((XDCOBJ *)&v75);
        if ( v20 )
          DC::RestoreAttributes(v75, v20);
        v17 = v75;
      }
      *((_DWORD *)v17 + 11) &= ~2u;
      v17 = v75;
      LODWORD(v76) = 0;
    }
    v80 = 0;
    v21 = *(_QWORD *)v17;
    HmgDecrementExclusiveReferenceCountEx(v17, HIDWORD(v76), &v80);
    if ( v80 )
      GrepDeleteDC(v21, 0x2000000LL);
  }
  return v19;
}
