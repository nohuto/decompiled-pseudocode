/*
 * XREFs of ??4?$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z @ 0x1C0202F9C
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall tagWND::RedirectedFieldhIcon<HICON__ *>::operator=(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 273) + 272LL) = *a2;
  return a2;
}
