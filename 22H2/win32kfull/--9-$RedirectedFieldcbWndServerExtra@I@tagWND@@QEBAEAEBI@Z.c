/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0033C1C
 * Callers:
 *     SetDialogPointer @ 0x1C0031720 (SetDialogPointer.c)
 *     NtUserSetWindowFNID @ 0x1C00355F0 (NtUserSetWindowFNID.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 281) + 252LL) != *a2;
}
