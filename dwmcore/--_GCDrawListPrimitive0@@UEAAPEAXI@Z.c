/*
 * XREFs of ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800E68C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CDrawListPrimitive0 *__fastcall CDrawListPrimitive0::`scalar deleting destructor'(CDrawListPrimitive0 *this, char a2)
{
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
