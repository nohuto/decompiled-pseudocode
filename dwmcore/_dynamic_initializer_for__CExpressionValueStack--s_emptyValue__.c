/*
 * XREFs of _dynamic_initializer_for__CExpressionValueStack::s_emptyValue__ @ 0x1800031E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 */

int dynamic_initializer_for__CExpressionValueStack::s_emptyValue__()
{
  CExpressionValue::CExpressionValue((CExpressionValue *)&CExpressionValueStack::s_emptyValue);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__);
}
