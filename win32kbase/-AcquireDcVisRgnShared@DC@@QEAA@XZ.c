/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0199130 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::AcquireLockShared((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
