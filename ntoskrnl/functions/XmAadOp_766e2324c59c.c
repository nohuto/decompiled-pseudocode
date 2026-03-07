__int64 __fastcall XmAadOp(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 25) * *(_BYTE *)(a1 + 108);
  *(_BYTE *)(a1 + 25) = 0;
  *(_BYTE *)(a1 + 24) += v1;
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFF3F;
  *(_DWORD *)(a1 + 16) = HIBYTE(*(unsigned __int16 *)(a1 + 24)) & 0xFFFF80 | (result | (*(_WORD *)(a1 + 24) == 0
                                                                                      ? 0x40
                                                                                      : 0)) ^ ((unsigned __int8)(*(_BYTE *)(a1 + 16) | (*(_WORD *)(a1 + 24) == 0 ? 0x40 : 0)) ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (*(_WORD *)(a1 + 24) & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)*(_WORD *)(a1 + 24) >> 4))))) & 4;
  return result;
}
