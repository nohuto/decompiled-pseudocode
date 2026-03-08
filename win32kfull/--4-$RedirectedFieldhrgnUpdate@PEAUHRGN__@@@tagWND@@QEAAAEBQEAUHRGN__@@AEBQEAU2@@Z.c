/*
 * XREFs of ??4?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z @ 0x1C01A6EE0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator=(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 136) + 136LL) = *a2;
  return a2;
}
