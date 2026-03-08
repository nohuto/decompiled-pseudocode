/*
 * XREFs of ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x18021EF20
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E908 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18022B764 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180023404 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CGeometryGroup::UnRegisterNotifiers(CGeometryGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 22);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 42));
    operator delete(*((void **)this + 22));
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
}
