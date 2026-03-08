/*
 * XREFs of ??0ScrollingConfiguration@CManipulation@@QEAA@XZ @ 0x180106460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CManipulation::ScrollingConfiguration *__fastcall CManipulation::ScrollingConfiguration::ScrollingConfiguration(
        CManipulation::ScrollingConfiguration *this)
{
  CManipulation::ScrollingConfiguration *result; // rax

  *(_BYTE *)this |= 1u;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
