/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155F90
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027ED08 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281178 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     OffTransparentBlt @ 0x1C00D6B88 (OffTransparentBlt.c)
 *     OffAlphaBlend @ 0x1C00D76B8 (OffAlphaBlend.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01564F0 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0156518 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0156544 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015660C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027DD30 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C02807DC (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0280C94 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281978 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int *v7; // rcx
  struct _CLIPOBJ *v8; // r10
  int v9; // ecx
  struct REGION *v10; // r12
  struct REGION *v11; // r8
  __int64 *v12; // r8
  int v13; // r9d
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdi
  int inited; // eax
  struct _SURFOBJ *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // ecx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v26; // rcx
  struct REGION *v27; // rdi
  int v28; // eax
  struct _SURFOBJ *v29; // rdx
  __int64 v30; // rax
  LONG v31; // ecx
  LONG v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // esi
  __int64 v36; // r14
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v38; // rdi
  char *v39; // rbx
  int v40; // eax
  __int64 v41; // rdi
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v43; // rdx
  int v44; // eax
  struct _RECTL v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rdi
  int v48; // ecx
  PVOID *v49; // rbx
  int v50; // eax
  __int64 v51; // rsi
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v53; // edx
  struct _SURFOBJ *v54; // rcx
  __int64 *v55; // rbx
  unsigned int v56; // [rsp+78h] [rbp-90h]
  int v57; // [rsp+78h] [rbp-90h]
  struct _POINTL v58; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL *v59; // [rsp+88h] [rbp-80h]
  struct REGION *v60; // [rsp+90h] [rbp-78h] BYREF
  int v61; // [rsp+98h] [rbp-70h]
  struct _POINTL *v62; // [rsp+A0h] [rbp-68h]
  struct REGION *v63; // [rsp+A8h] [rbp-60h] BYREF
  struct _XLATEOBJ *v64; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-50h] BYREF
  struct _CLIPOBJ *v66; // [rsp+C0h] [rbp-48h]
  unsigned __int8 *v67; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v68; // [rsp+D0h] [rbp-38h]
  __int64 v69; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v70[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v71[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v72; // [rsp+100h] [rbp-8h]
  struct _RECTL v73; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v74[4]; // [rsp+128h] [rbp+20h] BYREF
  int v75; // [rsp+12Ch] [rbp+24h]
  int v76; // [rsp+130h] [rbp+28h]
  int v77; // [rsp+134h] [rbp+2Ch]
  int v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  __int64 v80; // [rsp+178h] [rbp+70h]
  int v81; // [rsp+180h] [rbp+78h]
  int v82; // [rsp+1A8h] [rbp+A0h]
  __int64 v83; // [rsp+1B8h] [rbp+B0h]
  int v84; // [rsp+1C0h] [rbp+B8h]

  v62 = a2;
  v58 = 0LL;
  v59 = a4;
  v80 = 0LL;
  v81 = 0;
  v82 = 1;
  v83 = 0LL;
  v79 = 0LL;
  v84 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_47;
  v9 = *v7;
  if ( (v9 & 0x400) != 0 || (v9 & 0xC0) == 0x40 || (v9 & 0x20) == 0 || (v9 & 1) != 0 )
    goto LABEL_47;
  v66 = v8;
  v10 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, (unsigned int)v8);
  v63 = (struct REGION *)v8;
  if ( *((struct _CLIPOBJ **)a1 + 23) == v8 || !v10 )
    goto LABEL_53;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v60);
  if ( !v60
    || (v65 = *((_QWORD *)a1 + 23),
        v67 = (unsigned __int8 *)v10,
        !RGNOBJ::bMerge((RGNOBJ *)&v60, (struct RGNOBJ *)&v65, (struct RGNOBJ *)&v67, 8u)) )
  {
    v11 = v63;
LABEL_12:
    if ( v61 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v60);
      v11 = v63;
    }
    v8 = 0LL;
    if ( v11 )
    {
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v74, 0, v11, (struct ERECTL *)a4, 0);
      goto LABEL_16;
    }
LABEL_53:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !v10 )
        goto LABEL_47;
      if ( !*((_QWORD *)a1 + 23) )
        goto LABEL_59;
    }
    v27 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v27 )
      goto LABEL_19;
    v28 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2));
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v74, v28, v27, (struct ERECTL *)a4, 0);
LABEL_16:
    if ( v75 < v77 )
    {
      v66 = (struct _CLIPOBJ *)v74;
      if ( v76 < v78 )
      {
        v8 = 0LL;
LABEL_19:
        v12 = (__int64 *)*((_QWORD *)a1 + 2);
        v13 = *(_DWORD *)a1;
        v14 = *((_DWORD *)a1 + 1);
        v15 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 8) != 0 )
          v14 = 4;
        v16 = *((_QWORD *)a1 + 18);
        v17 = v14 & 0xEFFFFFFF;
        v68 = (__int64 *)*((_QWORD *)a1 + 2);
        v64 = (struct _XLATEOBJ *)v8;
        if ( (v15 & 0x100) == 0 )
          v17 = v14;
        v58.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
        v58.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
        v56 = v17;
        v18 = *(_QWORD *)(v12[4] + 104);
        v70[0] = v8;
        if ( *((_DWORD *)a1 + 38) != *((_DWORD *)v12 + 27)
          || *((_DWORD *)a1 + 39) != *((_DWORD *)v12 + 28)
          || (v13 & 0x40) != 0 )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&v64,
                     0LL,
                     0,
                     v16,
                     v18,
                     (__int64)ppalDefault,
                     (__int64)ppalDefault,
                     (int)v8,
                     (int)v8,
                     (int)v8,
                     (int)v8);
          v8 = 0LL;
          if ( !inited )
          {
LABEL_44:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v63);
            if ( v10 )
              vSpAddAndCompactDirtyRegion(a1, v10);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v70);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
            goto LABEL_47;
          }
          v17 = v56;
          v12 = v68;
        }
        if ( v17 != 2 )
        {
          switch ( v17 )
          {
            case 4u:
              v20 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( !v20 || !SURFREFVIEW::bMap((SURFREFVIEW *)v70, v20) )
                goto LABEL_44;
              v21 = *((_QWORD *)a1 + 16);
              v22 = 0LL;
              if ( v21 )
              {
                v23 = *(_DWORD *)(v21 + 88);
                if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
                {
                  v22 = v21 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v21 - 24 + 48));
                }
              }
              p_pvScan0 = 0LL;
              if ( a3 )
              {
                hsurf = (int)a3[1].hsurf;
                if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &a3[-1].pvScan0;
                  GreLockDisplayDevice(a3->hdev);
                }
              }
              INVOKEOFFCOPYBITS(v62, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v66, v64, v59, &v58);
              goto LABEL_41;
            case 1u:
              v29 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( !v29 || !SURFREFVIEW::bMap((SURFREFVIEW *)v70, v29) )
                goto LABEL_44;
              v22 = 0LL;
              v30 = *((_QWORD *)a1 + 16);
              v31 = v58.x + v59->right - v59->left;
              v73.left = v58.x;
              v73.right = v31;
              v32 = v58.y + v59->bottom - v59->top;
              v73.top = v58.y;
              v73.bottom = v32;
              if ( v30 )
              {
                v33 = *(_DWORD *)(v30 + 88);
                if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
                {
                  v22 = v30 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v30 - 24 + 48));
                }
              }
              p_pvScan0 = 0LL;
              if ( a3 )
              {
                v34 = (int)a3[1].hsurf;
                if ( (v34 & 0x80004000) != 0 && (v34 & 0x200) == 0 )
                {
                  p_pvScan0 = &a3[-1].pvScan0;
                  GreLockDisplayDevice(a3->hdev);
                }
              }
              v35 = *((_DWORD *)a1 + 51);
              v36 = *((_QWORD *)a1 + 16);
              if ( a3->iType != 1 )
                goto LABEL_85;
              if ( bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
              {
                v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
LABEL_88:
                OffTransparentBlt(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v37,
                  (LONG *)v62,
                  (__int64)a3,
                  (int *)a1 + 34,
                  v36,
                  v66,
                  (__int64)v64,
                  (__int128 *)&v59->left,
                  (__int128 *)&v73.left,
                  v35,
                  0);
LABEL_41:
                if ( p_pvScan0 )
                  GreUnlockDisplayDevice(p_pvScan0[6]);
                if ( !v22 )
                  goto LABEL_44;
                v26 = *(_QWORD *)(v22 + 48);
LABEL_49:
                GreUnlockDisplayDevice(v26);
                goto LABEL_44;
              }
              if ( a3->iType != 1
                || !bAllowShareAccess(a3)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
              {
LABEL_85:
                if ( ((__int64)a3[1].hsurf & 0x8000) != 0 )
                {
                  v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 168);
                  goto LABEL_88;
                }
              }
              v37 = EngTransparentBlt;
              goto LABEL_88;
            case 0x1000000u:
              vSpDrawCursor(a1, v62, a3, v59, &v58);
              goto LABEL_44;
          }
          v38 = *v12;
          v39 = (char *)v8;
          if ( a3 )
          {
            v40 = (int)a3[1].hsurf;
            if ( (v40 & 0x80004000) != 0 && (v40 & 0x200) == 0 )
            {
              v39 = (char *)&a3[-1].pvScan0;
              GreLockDisplayDevice(a3->hdev);
            }
          }
          v41 = v38 + 1536;
          if ( a3->iType != 1 )
            goto LABEL_109;
          if ( bAllowShareAccess(a3)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_112:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v42,
              (LONG *)v62,
              (__int64)a3,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &v59->left,
              0LL,
              0LL,
              v41,
              (__int64 *)&gptlZero,
              23130);
            if ( !v39 )
              goto LABEL_44;
            v26 = *((_QWORD *)v39 + 6);
            goto LABEL_49;
          }
          if ( a3->iType != 1
            || !bAllowShareAccess(a3)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_109:
            if ( ((__int64)a3[1].hsurf & 1) != 0 )
            {
              v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
              goto LABEL_112;
            }
          }
          v42 = EngBitBlt;
          goto LABEL_112;
        }
        v43 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( !v43 || !SURFREFVIEW::bMap((SURFREFVIEW *)v70, v43) )
          goto LABEL_44;
        v73.right = v58.x + v59->right - v59->left;
        v73.bottom = v58.y + v59->bottom - v59->top;
        v73.left = v58.x;
        v73.top = v58.y;
        *(_OWORD *)v71 = 0LL;
        v65 = 0LL;
        v72 = 0LL;
        v60 = 0LL;
        v69 = 0LL;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v65,
                              0LL,
                              0,
                              v16,
                              (__int64)gppalRGB,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0)
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v60,
                              0LL,
                              0,
                              v18,
                              (__int64)gppalRGB,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0)
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v69,
                              0LL,
                              0,
                              (__int64)gppalRGB,
                              v18,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0) )
        {
LABEL_154:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
          goto LABEL_44;
        }
        v44 = *((_DWORD *)a1 + 50);
        v45 = 0LL;
        v57 = 0;
        v67 = 0LL;
        LODWORD(v71[0]) = v44;
        v71[1] = v65;
        *(_QWORD *)&v72 = v60;
        *((_QWORD *)&v72 + 1) = v69;
        if ( (*((_DWORD *)a1 + 56) & 0xEFFFFFFF) == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
        {
          GreAcquireSemaphore(v68[16]);
          vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v73, &v67);
          v45 = v73;
          v57 = 1;
        }
        v46 = *((_QWORD *)a1 + 16);
        v47 = 0LL;
        if ( v46 )
        {
          v48 = *(_DWORD *)(v46 + 88);
          if ( (v48 & 0x80004000) != 0 && (v48 & 0x200) == 0 )
          {
            v47 = v46 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v46 - 24 + 48));
          }
        }
        v49 = 0LL;
        if ( a3 )
        {
          v50 = (int)a3[1].hsurf;
          if ( (v50 & 0x80004000) != 0 && (v50 & 0x200) == 0 )
          {
            v49 = &a3[-1].pvScan0;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        v51 = *((_QWORD *)a1 + 16);
        if ( a3->iType != 1 )
          goto LABEL_145;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
        {
          v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
LABEL_148:
          OffAlphaBlend(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v52,
            (LONG *)v62,
            (__int64)a3,
            (int *)a1 + 34,
            v51,
            v66,
            (__int64)v64,
            (__int128 *)&v59->left,
            (__int128 *)&v73.left,
            (__int64)v71);
          if ( v49 )
            GreUnlockDisplayDevice(v49[6]);
          if ( v47 )
            GreUnlockDisplayDevice(*(_QWORD *)(v47 + 48));
          if ( v57 )
          {
            v53 = *((_DWORD *)a1 + 51);
            v54 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            v73 = v45;
            vSpDeletePerPixelAlphaFromColorKey(v54, v53, &v73, v67);
            v55 = v68;
            EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", v68[16]);
            GreReleaseSemaphoreInternal(v55[16]);
          }
          goto LABEL_154;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
        {
LABEL_145:
          if ( ((__int64)a3[1].hsurf & 0x10000) != 0 )
          {
            v52 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 169);
            goto LABEL_148;
          }
        }
        v52 = EngAlphaBlend;
        goto LABEL_148;
      }
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v63);
    if ( !v10 )
      goto LABEL_47;
LABEL_59:
    vSpAddAndCompactDirtyRegion(a1, v10);
    goto LABEL_47;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v60) != 1 )
  {
    v11 = v60;
    v63 = v60;
    goto LABEL_12;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v60);
  vSpAddAndCompactDirtyRegion(a1, v10);
  if ( v61 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v60);
LABEL_47:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v74);
}
