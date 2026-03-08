/*
 * XREFs of _get_printf_count_output @ 0x1C000A70C
 * Callers:
 *     _woutput_l @ 0x1C0009C9C (_woutput_l.c)
 * Callees:
 *     <none>
 */

_BOOL8 get_printf_count_output()
{
  return _enable_percent_n == (_security_cookie | 1);
}
