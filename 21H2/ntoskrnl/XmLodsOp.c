/*
 * XREFs of XmLodsOp @ 0x1404E6A70
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmGetStringAddress @ 0x1403C122C (XmGetStringAddress.c)
 */

_WORD *__fastcall XmLodsOp(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  int *StringAddress; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v2 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  result = (_WORD *)(a1 + 24);
  for ( *(_QWORD *)(a1 + 88) = a1 + 24; v2; --v2 )
  {
    StringAddress = XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, (unsigned __int16 *)StringAddress);
    result = XmStoreResult(v5, *(_DWORD *)(a1 + 108));
  }
  return result;
}
