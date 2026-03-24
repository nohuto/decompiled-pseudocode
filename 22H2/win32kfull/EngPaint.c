/*
 * XREFs of EngPaint @ 0x1C0147890
 * Callers:
 *     NtGdiFrameRgn @ 0x1C013E790 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01462A0 (NtGdiFillRgn.c)
 *     EngFillPath @ 0x1C01472B0 (EngFillPath.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148958 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     EngStrokeAndFillPath @ 0x1C014BD00 (EngStrokeAndFillPath.c)
 *     NtGdiEngPaint @ 0x1C02B2F40 (NtGdiEngPaint.c)
 *     NtGdiExtFloodFill @ 0x1C02B97B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  int (*v8)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d

  v8 = SURFACE::pfnBitBlt((SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)));
  return ((__int64 (__fastcall *)(SURFOBJ *, _QWORD, _QWORD, CLIPOBJ *, _QWORD, __int64, _QWORD, _QWORD, BRUSHOBJ *, __int64, int))v8)(
           pso,
           0LL,
           0LL,
           pco,
           0LL,
           v9,
           0LL,
           0LL,
           pbo,
           v10,
           v11);
}
