/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0144D0C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092390 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C0143B80 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C0143F00 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C0144B80 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0144D6C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0145120 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFlattenPath @ 0x1C02AD660 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AD750 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AD9E0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ADB40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ADCE0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02ADE20 (NtGdiWidenPath.c)
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
