/*
 * XREFs of ??_GCExternalEffectGraph@@MEAAPEAXI@Z @ 0x1802830A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x1800D1D54 (--1CExternalEffectGraph@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CExternalEffectGraph *__fastcall CExternalEffectGraph::`scalar deleting destructor'(
        CExternalEffectGraph *this,
        char a2)
{
  CExternalEffectGraph::~CExternalEffectGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
