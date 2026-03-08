/*
 * XREFs of ??4?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z @ 0x1C01BF230
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator=(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 - 276) + 248LL) = *a2;
  return a2;
}
