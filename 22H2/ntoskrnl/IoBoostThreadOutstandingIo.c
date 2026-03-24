/*
 * XREFs of IoBoostThreadOutstandingIo @ 0x14050AB0C
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall IoBoostThreadOutstandingIo(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
