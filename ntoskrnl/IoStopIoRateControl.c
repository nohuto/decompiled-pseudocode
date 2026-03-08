/*
 * XREFs of IoStopIoRateControl @ 0x1402C454C
 * Callers:
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407552BC (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
