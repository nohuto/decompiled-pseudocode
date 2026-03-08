/*
 * XREFs of ExpReleaseCrossVmMutant @ 0x140A0331C
 * Callers:
 *     NtReleaseMutant @ 0x14075CCF0 (NtReleaseMutant.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140A03088 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpReleaseCrossVmMutant(__int64 a1, __int64 a2)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  unsigned int v5; // ebx
  struct _EX_RUNDOWN_REF *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v7);
  if ( ExtensionHostForCrossVmObject )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(ExtensionHostForCrossVmObject + 88))(a1, a2);
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
