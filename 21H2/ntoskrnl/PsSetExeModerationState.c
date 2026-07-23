/*
 * XREFs of PsSetExeModerationState @ 0x14058167C
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsSetExeModerationState(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 ExtensionTable; // rax
  unsigned int v7; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  if ( ExtensionTable )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(ExtensionTable + 24))(a1, a2, a3);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(PspBamExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v7;
}
