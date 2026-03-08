/*
 * XREFs of CmpPopulateKeyCachedInformation @ 0x140A27494
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPopulateKeyCachedInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 40;
  if ( a3 < 0x28 )
    return 3221225507LL;
  result = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  return result;
}
