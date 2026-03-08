/*
 * XREFs of __crt_debugger_hook @ 0x18010F1F4
 * Callers:
 *     __scrt_fastfail @ 0x18010F204 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
