/*
 * XREFs of ??4?$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z @ 0x1C01BE0AC
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall tagWND::RedirectedFieldcbwndExtra<int>::operator=(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 - 137) + 200LL) = *a2;
  return a2;
}
