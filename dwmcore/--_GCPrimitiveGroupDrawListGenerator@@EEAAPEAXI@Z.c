/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180010060
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001009C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
