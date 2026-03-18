/*
 * XREFs of IoStopIoRateControl @ 0x1403622A0
 * Callers:
 *     PspIoRateEntryActivate @ 0x1407D8BEC (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407D8CF8 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
