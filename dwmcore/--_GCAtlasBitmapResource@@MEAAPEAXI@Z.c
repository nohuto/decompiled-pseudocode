/*
 * XREFs of ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x1800B6050
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1800B608C (--1CAtlasBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::`scalar deleting destructor'(
        CAtlasBitmapResource *this,
        char a2)
{
  CAtlasBitmapResource::~CAtlasBitmapResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
