/*
 * XREFs of ??F?$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z @ 0x1C0203008
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFieldcntMBox<int>::operator--(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 - 248);
  result = *(unsigned int *)(v1 + 48);
  *(_DWORD *)(v1 + 48) = result - 1;
  return result;
}
