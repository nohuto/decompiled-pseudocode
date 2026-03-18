/*
 * XREFs of XmCmcOp @ 0x140371E10
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmCmcOp(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(a1 + 16)) & 1;
  return result;
}
