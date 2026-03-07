CDrawListPrimitive0 *__fastcall CDrawListPrimitive0::`scalar deleting destructor'(CDrawListPrimitive0 *this, char a2)
{
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
