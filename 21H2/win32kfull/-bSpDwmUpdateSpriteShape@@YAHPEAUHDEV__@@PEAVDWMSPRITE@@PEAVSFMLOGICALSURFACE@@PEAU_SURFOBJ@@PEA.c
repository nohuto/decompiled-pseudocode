/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0016490
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00EC3B4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026E770 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0016760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0016788 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026EC1C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall bSpDwmUpdateSpriteShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  unsigned int v13; // ebx
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // r14
  struct _SURFOBJ *v19; // rdx
  LONG v20; // edi
  LONG v21; // esi
  struct tagSIZE v22; // r8
  XLATEOBJ *v23; // rsi
  unsigned int inited; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v29; // eax
  __int64 v30; // rcx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  struct tagSIZE v32; // [rsp+60h] [rbp-69h] BYREF
  LONG v33; // [rsp+68h] [rbp-61h] BYREF
  LONG v34; // [rsp+6Ch] [rbp-5Dh]
  HDEV v35; // [rsp+70h] [rbp-59h] BYREF
  __int64 v36; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-39h] BYREF
  struct tagRECT v39; // [rsp+A0h] [rbp-29h] BYREF
  struct tagRECT v40; // [rsp+B0h] [rbp-19h] BYREF

  v35 = a1;
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v39.left = a5->left;
            v39.top = top;
            v32.cx = right - left;
            v39.right = right;
            v39.bottom = bottom;
            v32.cy = bottom - top;
            v38[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v38, a4);
            if ( !v38[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface(a1, a2, a3, &v32, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 23);
            v37[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v37, v19);
            if ( !v37[0] )
              goto LABEL_26;
            v20 = v39.left;
            v21 = v39.top;
            v39.right -= v39.left;
            v39.bottom -= v39.top;
            v33 = v39.left;
            v34 = v39.top;
            *(_QWORD *)&v39.left = 0LL;
            if ( a8 )
            {
              ERECTL::operator*=(&v39);
              v33 = v39.left + v20;
              v34 = v39.top + v21;
            }
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v39) )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v37);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
              return v13;
            }
            v23 = xloIdent;
            v32 = v22;
            if ( a6 )
            {
              inited = EXLATEOBJ::bInitXlateObj(&v32, 0LL, 0LL);
              v23 = (XLATEOBJ *)v32;
              v13 = inited;
            }
            if ( v13 )
            {
              if ( (*((_DWORD *)a2 + 41) & 0x20) != 0 )
              {
                v40 = v39;
                ERECTL::vScale((ERECTL *)&v39, (struct DWMSPRITE *)((char *)a2 + 156));
                if ( (HIDWORD(a4[1].hsurf) & 0x800) != 0 )
                {
                  v36 = *(_QWORD *)&a4[7].iType;
                  ERECTL::vScale((ERECTL *)&v40, (const struct POINTFL *)&v36);
                }
                v29 = bNeedRenderHint((struct PDEVOBJ *)&v35);
                v30 = *((_QWORD *)v18 + 23);
                if ( v29 )
                {
                  v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
                }
                else if ( (*(_DWORD *)(v30 + 88) & 2) != 0 )
                {
                  v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 356);
                }
                else
                {
                  v31 = EngStretchBlt;
                }
                v13 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))v31)(
                        v30,
                        a4,
                        0LL,
                        0LL,
                        v23,
                        0LL,
                        0LL,
                        &v39,
                        &v40,
                        0LL,
                        3);
              }
              else
              {
                v25 = bNeedRenderHint((struct PDEVOBJ *)&v35);
                v26 = *((_QWORD *)v18 + 23);
                if ( v25 )
                {
                  v27 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))RedirCopyBits)(
                          v26,
                          a4,
                          0LL,
                          v23,
                          &v39,
                          &v33);
                }
                else if ( (*(_DWORD *)(v26 + 88) & 0x400) != 0 )
                {
                  v27 = (*((__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))a1
                         + 355))(
                          v26,
                          a4,
                          0LL,
                          v23,
                          &v39,
                          &v33);
                }
                else
                {
                  v27 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, LONG *))EngCopyBits)(
                          v26,
                          a4,
                          0LL,
                          v23,
                          &v39,
                          &v33);
                }
                v13 = v27;
                if ( !v27 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, &v39, a7, 0);
              }
              if ( v13 )
                vSpUpdateDirtyRgn(a2, v18, 0LL, &v39, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v32);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
