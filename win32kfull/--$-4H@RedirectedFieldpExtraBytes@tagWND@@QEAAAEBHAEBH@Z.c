/*
 * XREFs of ??$?4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z @ 0x1C0202F64
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

int *__fastcall tagWND::RedirectedFieldpExtraBytes::operator=<int>(__int64 a1, int *a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 275) + 296LL) = *a2;
  return a2;
}
