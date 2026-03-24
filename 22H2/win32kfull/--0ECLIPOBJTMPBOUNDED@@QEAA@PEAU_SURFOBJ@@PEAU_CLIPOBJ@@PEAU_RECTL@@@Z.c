/*
 * XREFs of ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0169988
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x1C013BC80 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngGradientFill @ 0x1C02B27D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B2C70 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3540 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B3980 (NtGdiEngStrokePath.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B94F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C0149208 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0169BBC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C0169C08 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     Feature_2596596024__private_IsEnabledDeviceUsage @ 0x1C0169D58 (Feature_2596596024__private_IsEnabledDeviceUsage.c)
 */

ECLIPOBJTMPBOUNDED *__fastcall ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED(
        ECLIPOBJTMPBOUNDED *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  struct REGION **v4; // rdi
  LONG cx; // r8d
  LONG v10; // ecx
  LONG cy; // edx
  LONG v12; // eax
  struct _RECTL v14; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v15; // [rsp+40h] [rbp-20h] BYREF

  *((_DWORD *)this + 32) = 1;
  v4 = (struct REGION **)((char *)this + 152);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  if ( !SURFACE::bClipEngRenderingsToSurfaceBounds((SURFACE *)&a2[-1].pvScan0) )
    goto LABEL_23;
  *(_QWORD *)&v14.left = 0LL;
  if ( (unsigned int)Feature_2596596024__private_IsEnabledDeviceUsage() )
  {
    cx = a2->sizlBitmap.cx;
    v10 = 0x7FFFFFF;
    cy = a2->sizlBitmap.cy;
    v12 = 0x7FFFFFF;
    if ( cy < 0x7FFFFFF )
      v12 = a2->sizlBitmap.cy;
    v14.bottom = v12;
    if ( cx < 0x7FFFFFF )
      v10 = cx;
    v14.right = v10;
    if ( (((cx & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 || (((cy & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
      TraceLoggingWriteUnsupportedGdiUsage(&LongToFixIntegerOverflowCount, 27LL, 0LL);
  }
  else
  {
    v14.right = a2->sizlBitmap.cx;
    v14.bottom = a2->sizlBitmap.cy;
  }
  if ( a3 && a3->iDComplexity )
  {
    v15 = *(struct _RECTL *)(*(_QWORD *)&a3[2].rclBounds.top + 96LL);
    if ( !ERECTL::bContain((ERECTL *)&v14, &v15) )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      if ( *v4 )
      {
        if ( *(_QWORD *)&v15.left )
        {
          RGNOBJ::vSet((RGNOBJ *)&v15, &v14);
          if ( RGNOBJ::bMerge((RGNOBJ *)v4, (struct RGNOBJ *)&a3[2].rclBounds.top, (struct RGNOBJ *)&v15, 8u) )
          {
            XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v14, 1);
            *((_QWORD *)this + 21) = this;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      return this;
    }
LABEL_23:
    *((_QWORD *)this + 21) = a3;
    *((_BYTE *)this + 176) = 1;
    return this;
  }
  if ( *v4 )
  {
    if ( a4 )
      ERECTL::operator*=(&v14.left, &a4->left);
    RGNOBJ::vSet((RGNOBJ *)v4, &v14);
    XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v14, 1);
    *((_QWORD *)this + 21) = this;
  }
  return this;
}
