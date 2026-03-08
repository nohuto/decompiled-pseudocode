/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x140A031C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140A03088 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmEvent(__int64 a1)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v3);
  if ( ExtensionHostForCrossVmObject )
  {
    (*(void (__fastcall **)(__int64))(ExtensionHostForCrossVmObject + 56))(a1);
    ExReleaseExtensionTable(v3);
  }
}
