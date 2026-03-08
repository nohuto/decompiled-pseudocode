/*
 * XREFs of LsaFreeReturnBuffer @ 0x140881200
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall LsaFreeReturnBuffer(PVOID Buffer)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(PVOID))(ExtensionTable + 16))(Buffer);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
