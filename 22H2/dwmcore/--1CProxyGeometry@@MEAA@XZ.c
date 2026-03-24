/*
 * XREFs of ??1CProxyGeometry@@MEAA@XZ @ 0x1801E6138
 * Callers:
 *     ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x18016D790 (--_GCProxyGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801736B8 (-UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z.c)
 */

void __fastcall CProxyGeometry::~CProxyGeometry(CProxyGeometry *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 17);
  *(_QWORD *)this = &CProxyGeometry::`vftable';
  CResource::UnRegisterNotifierNoNULL(this, v1);
  CResource::UnRegisterNotifierNoNULL(this, *((struct CResource **)this + 18));
  CGeometry::~CGeometry((struct CResource **)this);
}
