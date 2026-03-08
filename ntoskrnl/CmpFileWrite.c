/*
 * XREFs of CmpFileWrite @ 0x1406BC460
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x140A0A220 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x1406BC078 (CmpDoFileWrite.c)
 */

__int64 __fastcall CmpFileWrite(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  void *v5; // rcx

  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0LL;
  v5 = *(void **)(a1 + 8LL * (unsigned int)a2 + 1544);
  if ( !v5 )
    return 0LL;
  else
    return CmpDoFileWrite(v5, a2, a3, a4, a5);
}
