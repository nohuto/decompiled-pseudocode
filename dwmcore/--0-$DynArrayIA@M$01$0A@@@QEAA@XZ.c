/*
 * XREFs of ??0?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x180250FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall DynArrayIA<float,2,0>::DynArrayIA<float,2,0>(_DWORD *a1)
{
  a1[6] = 0;
  *(_QWORD *)a1 = a1 + 8;
  *((_QWORD *)a1 + 1) = a1 + 8;
  a1[4] = 2;
  a1[5] = 2;
  return a1;
}
