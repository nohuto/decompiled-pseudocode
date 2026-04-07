/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180014184
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800128E8 (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x1800141B0 (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseResources(SharedDwmDcompVisual *this)
{
  SharedDwmDcompVisual::ReleaseDCompResources(this);
  if ( *(_QWORD *)this )
  {
    CBaseObject::Release(*(CBaseObject **)this);
    *(_QWORD *)this = 0LL;
  }
}
