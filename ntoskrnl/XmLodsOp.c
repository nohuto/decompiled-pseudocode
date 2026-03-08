/*
 * XREFs of XmLodsOp @ 0x140531C40
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmLodsOp(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  unsigned __int16 *StringAddress; // rax
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
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, StringAddress);
    result = XmStoreResult(v5, *(_DWORD *)(a1 + 108));
  }
  return result;
}
