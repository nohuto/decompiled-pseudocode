/*
 * XREFs of ??0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z @ 0x1C0227F54
 * Callers:
 *     DxgGetHandleDataCB @ 0x1C0118DA0 (DxgGetHandleDataCB.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a1 = *a2;
  result = a1;
  *a2 = 0LL;
  return result;
}
