/*
 * XREFs of PcwCloseInstance @ 0x1407536F0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_INSTANCE))(ExtensionTable + 24))(Instance);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
