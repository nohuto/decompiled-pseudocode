/*
 * XREFs of EnableMouseAcceleration @ 0x1C00C5BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C0288098;
  *((_BYTE *)qword_1C0288098 + 112) = a1;
  return result;
}
