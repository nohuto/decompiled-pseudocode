/*
 * XREFs of GetglpSetupPrograms @ 0x1C00F6770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 **__fastcall GetglpSetupPrograms(_QWORD *a1)
{
  unsigned __int16 **result; // rax

  result = &glpSetupPrograms;
  *a1 = &glpSetupPrograms;
  return result;
}
