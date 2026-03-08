/*
 * XREFs of XmSetLogicalResult @ 0x1403B3AD0
 * Callers:
 *     XmXorOp @ 0x14039ED00 (XmXorOp.c)
 *     XmOrOp @ 0x1403B3620 (XmOrOp.c)
 *     XmTestOp @ 0x1403B3640 (XmTestOp.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmSetLogicalResult(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  __int64 result; // rax

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 124) != 22 )
    XmStoreResult(a1, a2);
  result = *(_DWORD *)(v2 + 16) & 0xFFFFFFAA;
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 16) & 0xFFFFF72A | (v3 == 0 ? 0x40 : 0) | (4
                                                                                   * ((32
                                                                                     * ((v3 >> (8
                                                                                              * *(_DWORD *)(v2 + 120)
                                                                                              + 7)) & 1)) | (((*((_BYTE *)XmBitCount + (v3 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0)));
  return result;
}
