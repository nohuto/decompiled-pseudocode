/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800EA664
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18000BF18 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1800EA4A4 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??_GCEllipseGeometry@@UEAAPEAXI@Z @ 0x1800EA4F0 (--_GCEllipseGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x1800EA540 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800EA5A0 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800EA620 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x1801BFFC0 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18022B764 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 15));
  CShapePtr::Release((CShapePtr *)(this + 13));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
