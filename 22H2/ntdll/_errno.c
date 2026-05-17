/*
 * XREFs of _errno @ 0x1800858B0
 * Callers:
 *     wcstoxq @ 0x18008E644 (wcstoxq.c)
 *     mbstowcs @ 0x1800905C0 (mbstowcs.c)
 *     strtoxlX @ 0x180091B6C (strtoxlX.c)
 *     wcstoxlX @ 0x18009276C (wcstoxlX.c)
 *     wcstombs @ 0x180092A30 (wcstombs.c)
 *     strtoxq @ 0x180092C10 (strtoxq.c)
 *     write_string @ 0x180093788 (write_string.c)
 *     write_string_0 @ 0x1800941CC (write_string_0.c)
 *     _handle_qnan1 @ 0x180095248 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180095560 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800966A0 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
