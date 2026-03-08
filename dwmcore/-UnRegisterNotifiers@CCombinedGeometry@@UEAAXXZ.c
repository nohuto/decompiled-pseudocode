/*
 * XREFs of ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18000C1F0
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18000BF18 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x18000C114 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCombinedGeometry::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
  this[23] = 0LL;
}
