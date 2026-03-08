/*
 * XREFs of _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1C0168560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_()
{
  LONG_PTR result; // rax

  result = ObfDereferenceObject(ghSectionShared);
  ghSectionShared = 0LL;
  return result;
}
