/*
 * XREFs of ??1CProxyGeometry@@MEAA@XZ @ 0x1800EA4A4
 * Callers:
 *     ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x1800EA460 (--_GCProxyGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CProxyGeometry::~CProxyGeometry(CProxyGeometry *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 18);
  *(_QWORD *)this = &CProxyGeometry::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 19));
  CGeometry::~CGeometry(this);
}
