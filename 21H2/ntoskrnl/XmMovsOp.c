/*
 * XREFs of XmMovsOp @ 0x1404E6AF0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmGetStringAddress @ 0x1403C122C (XmGetStringAddress.c)
 */

_WORD *__fastcall XmMovsOp(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  int *StringAddress; // rax
  __int64 v5; // rcx
  int *v6; // rax
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
      StringAddress = XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
      XmSetSourceValue(a1, (unsigned __int16 *)StringAddress);
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
