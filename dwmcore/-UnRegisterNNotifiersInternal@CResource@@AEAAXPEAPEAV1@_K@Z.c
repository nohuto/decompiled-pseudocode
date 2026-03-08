/*
 * XREFs of ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180023404
 * Callers:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1800B8624 (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1800B908C (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E498 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x18021EF20 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rbx

  if ( a3 )
  {
    for ( i = 0LL; i < a3; ++i )
    {
      CResource::UnRegisterNotifierInternal(this, a2[i]);
      a2[i] = 0LL;
    }
  }
}
