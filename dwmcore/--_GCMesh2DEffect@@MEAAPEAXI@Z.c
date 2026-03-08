/*
 * XREFs of ??_GCMesh2DEffect@@MEAAPEAXI@Z @ 0x1802BB438
 * Callers:
 *     ??_ECMesh2DEffect@@OBA@EAAPEAXI@Z @ 0x18011FE90 (--_ECMesh2DEffect@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CMesh2DEffect@@MEAA@XZ @ 0x1802BB38C (--1CMesh2DEffect@@MEAA@XZ.c)
 */

CMesh2DEffect *__fastcall CMesh2DEffect::`scalar deleting destructor'(CMesh2DEffect *this, char a2)
{
  CMesh2DEffect::~CMesh2DEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
