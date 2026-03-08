/*
 * XREFs of GetgpastrSetupExe @ 0x1C00F6750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _UNICODE_STRING **__fastcall GetgpastrSetupExe(_QWORD *a1)
{
  struct _UNICODE_STRING **result; // rax

  result = &gpastrSetupExe;
  *a1 = &gpastrSetupExe;
  return result;
}
