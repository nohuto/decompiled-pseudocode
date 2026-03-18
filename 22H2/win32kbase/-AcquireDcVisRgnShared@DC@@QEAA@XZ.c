/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016C2E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00A73C0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  __int64 result; // rax

  CPushLock::AcquireLockShared((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
