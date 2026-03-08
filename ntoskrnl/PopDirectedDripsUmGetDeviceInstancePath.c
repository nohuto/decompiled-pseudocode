/*
 * XREFs of PopDirectedDripsUmGetDeviceInstancePath @ 0x14099C858
 * Callers:
 *     PopDirectedDripsUmTestDeviceCompare @ 0x14099CAF0 (PopDirectedDripsUmTestDeviceCompare.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopDirectedDripsUmGetDeviceInstancePath(_DWORD *a1, _DWORD *a2)
{
  _QWORD *result; // rax

  result = a1 + 2;
  if ( *a1 )
    result = (_QWORD *)*result;
  *a2 = a1[1];
  return result;
}
