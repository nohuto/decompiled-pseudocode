/*
 * XREFs of ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C012D268
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 - 275) + 296LL) != *a2;
}
