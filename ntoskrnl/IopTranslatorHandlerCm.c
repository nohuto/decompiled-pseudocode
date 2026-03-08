/*
 * XREFs of IopTranslatorHandlerCm @ 0x1407F9270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopTranslatorHandlerCm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  *(_OWORD *)a7 = *(_OWORD *)a2;
  *(_DWORD *)(a7 + 16) = *(_DWORD *)(a2 + 16);
  return 0LL;
}
