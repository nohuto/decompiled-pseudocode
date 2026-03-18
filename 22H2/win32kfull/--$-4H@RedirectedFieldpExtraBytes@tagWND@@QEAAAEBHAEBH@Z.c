/*
 * XREFs of ??$?4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z @ 0x1C02003BC
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

int *__fastcall tagWND::RedirectedFieldpExtraBytes::operator=<int>(__int64 a1, int *a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 275) + 296LL) = *a2;
  return a2;
}
