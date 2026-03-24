/*
 * XREFs of ??_GCSynchronousSuperWetInk@@UEAAPEAXI@Z @ 0x1801EF490
 * Callers:
 *     ??_ECSynchronousSuperWetInk@@WHA@EAAPEAXI@Z @ 0x1800F62A0 (--_ECSynchronousSuperWetInk@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EF30C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 */

CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::`scalar deleting destructor'(
        CSynchronousSuperWetInk *this,
        char a2)
{
  CSynchronousSuperWetInk::~CSynchronousSuperWetInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x128);
    else
      operator delete(this);
  }
  return this;
}
