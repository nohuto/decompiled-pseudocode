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
