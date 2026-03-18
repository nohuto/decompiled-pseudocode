/*
 * XREFs of ExpObDeleteCrossVmMutant @ 0x140A05F00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140A05D78 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmMutant(__int64 a1)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v3);
  if ( ExtensionHostForCrossVmObject )
  {
    (*(void (__fastcall **)(__int64))(ExtensionHostForCrossVmObject + 104))(a1);
    ExReleaseExtensionTable(v3);
  }
}
