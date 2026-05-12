/*
 * XREFs of TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C0043068
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C00431E0 (TranslateToExtendedSrb.c)
 * Callees:
 *     memmove @ 0x1C00201C0 (memmove.c)
 */

void *__fastcall TranslateScsiRequestBlockToScsiCdb16SrbExData(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rcx
  void *result; // rax

  *(_DWORD *)a1 = 64;
  *(_DWORD *)(a1 + 4) = 32;
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(a2 + 11);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 32);
  v2 = (_OWORD *)(a1 + 24);
  result = (void *)*(unsigned __int8 *)(a2 + 10);
  if ( (_BYTE)result )
    return memmove(v2, (const void *)(a2 + 72), *(unsigned __int8 *)(a2 + 10));
  *v2 = 0LL;
  return result;
}
