/*
 * XREFs of PsSetExeModerationState @ 0x1405A198C
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsSetExeModerationState(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 ExtensionTable; // rax
  unsigned int v7; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  if ( ExtensionTable )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(ExtensionTable + 24))(a1, a2, a3);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v7;
}
