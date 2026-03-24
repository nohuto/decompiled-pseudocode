/*
 * XREFs of PsSetExeModerationState @ 0x14058137C
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
