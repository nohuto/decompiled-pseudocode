/*
 * XREFs of ??_GCPathData@@MEAAPEAXI@Z @ 0x1800A9AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPathData@@MEAA@XZ @ 0x1800A9B0C (--1CPathData@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CPathData *__fastcall CPathData::`scalar deleting destructor'(CPathData *this, char a2)
{
  CPathData::~CPathData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
