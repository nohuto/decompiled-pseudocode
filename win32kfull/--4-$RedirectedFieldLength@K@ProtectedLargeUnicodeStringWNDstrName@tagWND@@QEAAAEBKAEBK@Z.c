/*
 * XREFs of ??4?$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z @ 0x1C0202F80
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::RedirectedFieldLength<unsigned long>::operator=(
        __int64 a1,
        _DWORD *a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 - 152) + 184LL) = *a2;
  return a2;
}
