/*
 * XREFs of IopSetCopyInformationExtension @ 0x14035A9EC
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14035AA40 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 9LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 9);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_OWORD *)IrpExtension + 4) = *a2;
  return 0LL;
}
