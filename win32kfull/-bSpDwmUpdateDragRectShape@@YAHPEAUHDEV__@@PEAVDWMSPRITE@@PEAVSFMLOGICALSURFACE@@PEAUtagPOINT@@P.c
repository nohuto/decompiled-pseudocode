/*
 * XREFs of ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C0269054
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00284A4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C004F9EC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmUpdateDragRectShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5,
        unsigned int *a6,
        struct SFMLOGICALSURFACE **a7)
{
  unsigned int LogicalSurface; // ebx
  struct SFMLOGICALSURFACE *v10; // rsi
  __int64 v11; // rbx
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v13; // rdx
  __m128i si128; // xmm0
  LONG cx; // eax
  __int64 v16; // rcx
  HDEV v18; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-9h] BYREF
  __m128i v21; // [rsp+88h] [rbp+7h] BYREF

  v18 = a1;
  LogicalSurface = bSpDwmCreateLogicalSurface(a1, a2, a3, a5, a7);
  if ( LogicalSurface )
  {
    v10 = *a7;
    v11 = *((_QWORD *)*a7 + 23);
    v19[0] = 0LL;
    SURFREFVIEW::bMap((SURFREFVIEW *)v19, (struct _SURFOBJ *)v11);
    if ( v19[0] )
    {
      *((_DWORD *)a2 + 35) |= 4u;
      if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v18) )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
      }
      else if ( (*(_DWORD *)(v11 + 88) & 2) != 0 )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 353);
      }
      else
      {
        v12 = EngStretchBlt;
      }
      v13 = *((_QWORD *)a1 + 138);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      **(_DWORD **)(v13 + 56) = -1;
      cx = a5->cx;
      v16 = *((_QWORD *)v10 + 23);
      v20.left = 0;
      v20.top = 0;
      v20.right = cx;
      v20.bottom = a5->cy;
      v21 = si128;
      LogicalSurface = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct tagRECT *, __m128i *, _QWORD, int))v12)(
                         v16,
                         v13,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         &v20,
                         &v21,
                         0LL,
                         1);
      if ( LogicalSurface )
        vSpUpdateDirtyRgn(a2, v10, 0LL, (const struct _RECTL *)&v20, a6, 0);
    }
    else
    {
      LogicalSurface = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v19);
  }
  return LogicalSurface;
}
