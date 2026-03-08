/*
 * XREFs of ??_5?$RedirectedFieldfnid@G@tagWND@@QEAA?BGAEBG@Z @ 0x1C01CCE30
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::RedirectedFieldfnid<unsigned short>::operator|=(__int64 a1, _WORD *a2)
{
  *(_WORD *)(*(_QWORD *)(a1 - 47) + 42LL) |= *a2;
  return *(unsigned __int16 *)(*(_QWORD *)(a1 - 47) + 42LL);
}
