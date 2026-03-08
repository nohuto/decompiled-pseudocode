/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1405569E0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14035AA40 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r11
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 5) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v5, 5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
