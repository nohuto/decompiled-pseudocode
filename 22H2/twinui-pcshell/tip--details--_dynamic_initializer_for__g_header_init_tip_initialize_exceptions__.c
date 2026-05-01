/*
 * XREFs of tip::details::_dynamic_initializer_for__g_header_init_tip_initialize_exceptions__ @ 0x1800039F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *tip::details::_dynamic_initializer_for__g_header_init_tip_initialize_exceptions__()
{
  void *result; // rax

  result = &tip::details::test_interface_with_exception_guard;
  tip::details::g_test_interface_exception_guard = (bool (__high *)(struct tip::details::test_data_interface *, struct tson::output_archive *, enum tip::details::serialize_options, struct tson::input_archive *, const struct TipReportingInfo *))&tip::details::test_interface_with_exception_guard;
  return result;
}
