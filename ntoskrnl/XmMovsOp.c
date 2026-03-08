/*
 * XREFs of XmMovsOp @ 0x140531CC0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmMovsOp(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  unsigned __int16 *StringAddress; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx

  result = 0LL;
  v3 = 1;
  if ( !*(_BYTE *)(a1 + 139)
    || (!*(_BYTE *)(a1 + 137)
      ? (v3 = *(unsigned __int16 *)(a1 + 28), *(_WORD *)(a1 + 28) = 0)
      : (v3 = *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 28) = 0),
        v3) )
  {
    do
    {
      StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
      XmSetSourceValue(a1, StringAddress);
      v6 = XmGetStringAddress(v5, 0, 7u);
      v7 = *(_DWORD *)(a1 + 108);
      *(_QWORD *)(a1 + 88) = v6;
      result = XmStoreResult(a1, v7);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
