/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140507770
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1402E5F78 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1402E6690 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x1402E6980 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(v3, v2);
  if ( !IrpExtension )
    return 3221226021LL;
  *(_OWORD *)(IrpExtension + 20) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
