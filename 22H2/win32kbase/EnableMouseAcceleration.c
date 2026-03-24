/*
 * XREFs of EnableMouseAcceleration @ 0x1C00B8540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C0245098;
  *((_BYTE *)qword_1C0245098 + 112) = a1;
  return result;
}
