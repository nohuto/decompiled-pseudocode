/*
 * XREFs of ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0287744
 * Callers:
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027DA60 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027F3A0 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C027F860 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0287840 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEBU_LINEATTRS@@K@Z @ 0x1C0287B9C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEBU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287F9C (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 * Callees:
 *     <none>
 */

void __fastcall PRECOMPUTE::~PRECOMPUTE(PRECOMPUTE *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) = 0LL;
    v5 = *(_QWORD *)this;
    v6 = *((_QWORD *)this + 1);
    v7 = *((_QWORD *)this + 2);
    v8 = *((_QWORD *)this + 3);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) = 0;
    v3 = *(void **)(*((_QWORD *)this + 4) + 48LL);
    if ( v3 )
      Win32FreePool(v3);
    *(_QWORD *)(*((_QWORD *)this + 4) + 48LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 4) + 60LL) = 0;
    v4 = *(void **)(*((_QWORD *)this + 4) + 64LL);
    if ( v4 )
      Win32FreePool(v4);
    *(_QWORD *)(*((_QWORD *)this + 4) + 64LL) = 0LL;
  }
}
