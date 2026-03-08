/*
 * XREFs of LsaDeregisterLogonProcess @ 0x1409C6250
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LsaDeregisterLogonProcess(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
