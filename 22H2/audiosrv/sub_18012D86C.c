/*
 * XREFs of sub_18012D86C @ 0x18012D86C
 * Callers:
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_18012D86C(_QWORD **a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 5u, 0LL, **a1, *a1[1]).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 843, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", Pointer);
  return v2;
}
