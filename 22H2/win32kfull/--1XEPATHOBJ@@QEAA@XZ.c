/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014475C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092300 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C01435D0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C0143950 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C01445D0 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C01447BC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFlattenPath @ 0x1C02AD030 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AD120 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AD3B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AD510 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AD6B0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD7F0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
