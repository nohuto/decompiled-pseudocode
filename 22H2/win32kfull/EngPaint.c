/*
 * XREFs of EngPaint @ 0x1C028E980
 * Callers:
 *     EngFillPath @ 0x1C0289380 (EngFillPath.c)
 *     EngStrokeAndFillPath @ 0x1C0289760 (EngStrokeAndFillPath.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A8594 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     NtGdiEngPaint @ 0x1C02CA560 (NtGdiEngPaint.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B265C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  int (*v7)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r11d

  v7 = SURFACE::pfnBitBlt((SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)));
  return ((__int64 (__fastcall *)(SURFOBJ *, _QWORD, _QWORD, CLIPOBJ *, _QWORD, RECTL *, _QWORD, _QWORD, __int64, __int64, int))v7)(
           pso,
           0LL,
           0LL,
           pco,
           0LL,
           &pco->rclBounds,
           0LL,
           0LL,
           v8,
           v9,
           v10);
}
