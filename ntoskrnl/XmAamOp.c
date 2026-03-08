/*
 * XREFs of XmAamOp @ 0x140531080
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmAamOp(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  __int64 result; // rax

  v1 = *(unsigned __int8 *)(a1 + 24);
  v2 = *(unsigned __int8 *)(a1 + 108);
  *(_BYTE *)(a1 + 25) = *(_BYTE *)(a1 + 24) / *(_BYTE *)(a1 + 108);
  *(_BYTE *)(a1 + 24) = v1 % v2;
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFF3F;
  *(_DWORD *)(a1 + 16) = HIBYTE(*(unsigned __int16 *)(a1 + 24)) & 0xFFFF80 | (result | (*(_WORD *)(a1 + 24) == 0
                                                                                      ? 0x40
                                                                                      : 0)) ^ ((unsigned __int8)(*(_BYTE *)(a1 + 16) | (*(_WORD *)(a1 + 24) == 0 ? 0x40 : 0)) ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (*(_WORD *)(a1 + 24) & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)*(_WORD *)(a1 + 24) >> 4))))) & 4;
  return result;
}
