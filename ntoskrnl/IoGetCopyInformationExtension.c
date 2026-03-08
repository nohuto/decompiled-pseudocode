/*
 * XREFs of IoGetCopyInformationExtension @ 0x140556940
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoGetCopyInformationExtension(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD *v2; // r9
  __int64 result; // rax

  if ( !IopIrpHasExtensionType(a1, 9u) )
    return 3221226021LL;
  result = 0LL;
  *v2 = *(_OWORD *)(*(_QWORD *)(v1 + 200) + 64LL);
  return result;
}
