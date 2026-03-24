/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0163E9C
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0208 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0163C34 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0280A64 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0283848 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0283BD4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0098730 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B297C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     OffTransparentBlt @ 0x1C010EC7C (OffTransparentBlt.c)
 *     OffAlphaBlend @ 0x1C010F010 (OffAlphaBlend.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0129B40 (OffBitBlt.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0164400 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0164428 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C01644D4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0164544 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027FA90 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C02829B0 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0282E68 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C02846E4 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
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
  struct _SURFOBJ *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ecx
  PVOID *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  PVOID v26; // rcx
  struct REGION *v27; // rdi
  int v28; // edx
  struct _SURFOBJ *v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v35; // rdi
  PVOID *v36; // rbx
  int v37; // eax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // ecx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v48; // edx
  struct _SURFOBJ *v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned int v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+70h] [rbp-90h]
  struct _POINTL v55; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v56; // [rsp+80h] [rbp-80h]
  struct _POINTL *v57; // [rsp+88h] [rbp-78h]
  struct REGION *v58; // [rsp+90h] [rbp-70h] BYREF
  struct _XLATEOBJ *v59; // [rsp+98h] [rbp-68h] BYREF
  struct _CLIPOBJ *v60; // [rsp+A0h] [rbp-60h]
  struct REGION *v61; // [rsp+A8h] [rbp-58h] BYREF
  int v62; // [rsp+B0h] [rbp-50h]
  __int64 *v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 *v67; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v68[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct REGION *v69; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v71[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v74; // [rsp+140h] [rbp+40h]
  _BYTE v75[4]; // [rsp+150h] [rbp+50h] BYREF
  int v76; // [rsp+154h] [rbp+54h]
  int v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+15Ch] [rbp+5Ch]
  int v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  __int64 v81; // [rsp+1A0h] [rbp+A0h]
  int v82; // [rsp+1A8h] [rbp+A8h]
  int v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+E0h]
  int v85; // [rsp+1E8h] [rbp+E8h]

  v57 = a2;
  v55 = 0LL;
  v56 = a4;
  v81 = 0LL;
  v82 = 0;
  v83 = 1;
  v84 = 0LL;
  v80 = 0LL;
  v85 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_47;
  v9 = *v7;
  if ( (v9 & 0x400) != 0 || (v9 & 0xC0) == 0x40 || (v9 & 0x20) == 0 || (v9 & 1) != 0 )
    goto LABEL_47;
  v60 = v8;
  v10 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, (unsigned int)v8);
  v58 = (struct REGION *)v8;
  if ( *((struct _CLIPOBJ **)a1 + 23) == v8 || !v10 )
    goto LABEL_53;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v61);
  if ( !v61
    || (v70 = *((_QWORD *)a1 + 23),
        v69 = v10,
        !RGNOBJ::bMerge((RGNOBJ *)&v61, (struct RGNOBJ *)&v70, (struct RGNOBJ *)&v69, 8u)) )
  {
    v11 = v58;
LABEL_12:
    if ( v62 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v61);
      v11 = v58;
    }
    v8 = 0LL;
    if ( v11 )
    {
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v75, 0, v11, (struct ERECTL *)a4, 0);
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
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v75, v28, v27, (struct ERECTL *)a4, 0);
LABEL_16:
    if ( v76 < v78 )
    {
      v60 = (struct _CLIPOBJ *)v75;
      if ( v77 < v79 )
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
        v63 = (__int64 *)*((_QWORD *)a1 + 2);
        v59 = (struct _XLATEOBJ *)v8;
        if ( (v15 & 0x100) == 0 )
          v17 = v14;
        v55.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
        v55.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
        v53 = v17;
        v18 = *(_QWORD *)(v12[4] + 104);
        v68[0] = v8;
        if ( *((_DWORD *)a1 + 38) != *((_DWORD *)v12 + 27)
          || *((_DWORD *)a1 + 39) != *((_DWORD *)v12 + 28)
          || (v13 & 0x40) != 0 )
        {
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&v59,
                                0LL,
                                0,
                                v16,
                                v18,
                                (__int64)ppalDefault,
                                (__int64)ppalDefault,
                                (int)v8,
                                (int)v8,
                                (int)v8,
                                (int)v8) )
          {
LABEL_44:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
            if ( v10 )
              vSpAddAndCompactDirtyRegion(a1, v10);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v68);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59, v25);
            goto LABEL_47;
          }
          v17 = v53;
          v12 = v63;
        }
        switch ( v17 )
        {
          case 2u:
            v39 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( v39 && SURFREFVIEW::bMap((SURFREFVIEW *)v68, v39) )
            {
              v72.right = v55.x + v56->right - v56->left;
              v72.bottom = v55.y + v56->bottom - v56->top;
              v72.left = v55.x;
              v72.top = v55.y;
              v66 = 0LL;
              v65 = 0LL;
              v64 = 0LL;
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v66,
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
                && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v65,
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
                && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v64,
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
                LODWORD(v71[0]) = *((_DWORD *)a1 + 50);
                v71[1] = v66;
                v71[2] = v65;
                v71[3] = v64;
                v41 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
                v54 = 0;
                v74 = 0LL;
                v67 = 0LL;
                if ( v41 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
                {
                  GreAcquireSemaphore(v63[16]);
                  vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v72, &v67);
                  v74 = v72;
                  v54 = 1;
                }
                v42 = *((_QWORD *)a1 + 16);
                v43 = 0LL;
                if ( v42 )
                {
                  v44 = *(_DWORD *)(v42 + 88);
                  if ( (v44 & 0x80004000) != 0 && (v44 & 0x200) == 0 )
                  {
                    v43 = v42 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v42 - 24 + 48));
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
                if ( a3->iType == 1
                  && bAllowShareAccess(a3)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
                {
                  v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
                }
                else if ( a3->iType == 1
                       && bAllowShareAccess(a3)
                       && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                       && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                       && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                        || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                       || ((__int64)a3[1].hsurf & 0x10000) == 0 )
                {
                  v47 = EngAlphaBlend;
                }
                else
                {
                  v47 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
                }
                OffAlphaBlend(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v47,
                  (LONG *)v57,
                  (__int64)a3,
                  (int *)a1 + 34,
                  *((_QWORD *)a1 + 16),
                  v60,
                  (__int64)v59,
                  (__int128 *)&v56->left,
                  (__int128 *)&v72.left,
                  (__int64)v71);
                if ( p_pvScan0 )
                  GreUnlockDisplayDevice(p_pvScan0[6]);
                if ( v43 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v43 + 48));
                if ( v54 )
                {
                  v48 = *((_DWORD *)a1 + 51);
                  v49 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                  v72 = v74;
                  vSpDeletePerPixelAlphaFromColorKey(v49, v48, &v72, v67);
                  v50 = v63;
                  EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", v63[16]);
                  GreReleaseSemaphoreInternal(v50[16]);
                }
              }
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64, v40);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65, v51);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66, v52);
            }
            goto LABEL_44;
          case 4u:
            v19 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( !v19 || !SURFREFVIEW::bMap((SURFREFVIEW *)v68, v19) )
              goto LABEL_44;
            v20 = *((_QWORD *)a1 + 16);
            v21 = 0LL;
            if ( v20 )
            {
              v22 = *(_DWORD *)(v20 + 88);
              if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
              {
                v21 = v20 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v20 - 24 + 48));
              }
            }
            v23 = 0LL;
            if ( a3 )
            {
              v24 = (int)a3[1].hsurf;
              if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
              {
                v23 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            INVOKEOFFCOPYBITS(v57, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v60, v59, v56, &v55);
            goto LABEL_41;
          case 1u:
            v29 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( !v29 || !SURFREFVIEW::bMap((SURFREFVIEW *)v68, v29) )
              goto LABEL_44;
            v21 = 0LL;
            v30 = *((_QWORD *)a1 + 16);
            v31 = v55.x + v56->right - v56->left;
            *(struct _POINTL *)&v73 = v55;
            DWORD2(v73) = v31;
            HIDWORD(v73) = v55.y + v56->bottom - v56->top;
            if ( v30 )
            {
              v32 = *(_DWORD *)(v30 + 88);
              if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
              {
                v21 = v30 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v30 - 24 + 48));
              }
            }
            v23 = 0LL;
            if ( a3 )
            {
              v33 = (int)a3[1].hsurf;
              if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
              {
                v23 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
            {
              v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
            }
            else if ( a3->iType == 1
                   && bAllowShareAccess(a3)
                   && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                   && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                    || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                   || ((__int64)a3[1].hsurf & 0x8000) == 0 )
            {
              v34 = EngTransparentBlt;
            }
            else
            {
              v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
            }
            OffTransparentBlt(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v34,
              (LONG *)v57,
              (__int64)a3,
              (int *)a1 + 34,
              *((_QWORD *)a1 + 16),
              v60,
              (__int64)v59,
              (__int128 *)&v56->left,
              &v73,
              *((_DWORD *)a1 + 51),
              0);
LABEL_41:
            if ( v23 )
              GreUnlockDisplayDevice(v23[6]);
            if ( !v21 )
              goto LABEL_44;
            v26 = *(PVOID *)(v21 + 48);
LABEL_49:
            GreUnlockDisplayDevice(v26);
            goto LABEL_44;
          case 0x1000000u:
            vSpDrawCursor(a1, v57, a3, v56, &v55);
            goto LABEL_44;
        }
        v35 = *v12;
        v36 = 0LL;
        if ( a3 )
        {
          v37 = (int)a3[1].hsurf;
          if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
          {
            v36 = &a3[-1].pvScan0;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        if ( a3->iType != 1 )
          goto LABEL_109;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_112:
          OffBitBlt(
            (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v38,
            (LONG *)v57,
            (__int64)a3,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &v56->left,
            0LL,
            0LL,
            v35 + 1544,
            (__int64 *)&gptlZero,
            23130);
          if ( !v36 )
            goto LABEL_44;
          v26 = v36[6];
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
            v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            goto LABEL_112;
          }
        }
        v38 = EngBitBlt;
        goto LABEL_112;
      }
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
    if ( !v10 )
      goto LABEL_47;
LABEL_59:
    vSpAddAndCompactDirtyRegion(a1, v10);
    goto LABEL_47;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v61) != 1 )
  {
    v11 = v61;
    v58 = v61;
    goto LABEL_12;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v61);
  vSpAddAndCompactDirtyRegion(a1, v10);
  if ( v62 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v61);
LABEL_47:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v75);
}
