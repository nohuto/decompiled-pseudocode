/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140556980
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14035AA40 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 7) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 7);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 20) = *a2;
  return 0LL;
}
