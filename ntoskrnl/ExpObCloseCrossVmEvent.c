/*
 * XREFs of ExpObCloseCrossVmEvent @ 0x140A030E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x140A03088 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObCloseCrossVmEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  struct _EX_RUNDOWN_REF *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v9);
  if ( ExtensionHostForCrossVmObject )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(ExtensionHostForCrossVmObject + 48))(a1, a2, a3, a4);
    ExReleaseExtensionTable(v9);
  }
}
