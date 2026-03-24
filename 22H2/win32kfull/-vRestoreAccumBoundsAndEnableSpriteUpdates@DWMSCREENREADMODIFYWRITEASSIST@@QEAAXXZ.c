/*
 * XREFs of ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C029ED60
 * Callers:
 *     GrePolyPolyline @ 0x1C0142500 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C0143A10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C0144870 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C0144E10 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0148D60 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C029FE00 (GrePolyBezier.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0145B34 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  DWMSCREENREADMODIFYWRITEASSIST *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = this;
  v2 = **((_QWORD **)this + 3);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
    {
      *(_DWORD *)(*(_QWORD *)(v2 + 976) + 152LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)(v2 + 976) + 216LL) = *((_DWORD *)this + 12);
      *(_DWORD *)(*(_QWORD *)(v2 + 976) + 220LL) = *((_DWORD *)this + 13);
      *(_DWORD *)(*(_QWORD *)(v2 + 976) + 8LL) = *((_DWORD *)this + 14);
      *(_DWORD *)(*(_QWORD *)(v2 + 976) + 12LL) = *((_DWORD *)this + 15);
      v3 = *(_QWORD *)(**((_QWORD **)this + 3) + 976LL);
      if ( *((_DWORD *)this + 17) )
        *(_DWORD *)(v3 + 152) |= 0x100u;
      else
        *(_DWORD *)(v3 + 152) |= 0x200u;
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 976LL) + 212LL) = *((_BYTE *)this + 32);
    v4 = *(_QWORD *)(**((_QWORD **)this + 3) + 976LL);
    v5 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)(v4 + 160) != v5 )
    {
      *(_QWORD *)(v4 + 160) = v5;
      *(_DWORD *)(*(_QWORD *)(**((_QWORD **)v1 + 3) + 976LL) + 152LL) |= 0x1000u;
    }
    if ( *(_DWORD *)v1 )
      XDCOBJ::vAccumulateTight(*((XDCOBJ **)v1 + 3), (DWMSCREENREADMODIFYWRITEASSIST *)((char *)v1 + 4));
    *(_DWORD *)(**((_QWORD **)v1 + 3) + 488LL) = 1;
  }
}
