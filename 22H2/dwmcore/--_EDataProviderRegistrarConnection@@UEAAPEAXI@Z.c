/*
 * XREFs of ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x18017DD70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180165728 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::`vector deleting destructor'(
        DataProviderRegistrarConnection *this,
        char a2)
{
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DataProviderRegistrarConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC0);
    else
      operator delete(this);
  }
  return this;
}
