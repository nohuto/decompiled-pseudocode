/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x1407D4860
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl LsaLookupAuthenticationPackage(
        HANDLE LsaHandle,
        PLSA_STRING PackageName,
        PULONG AuthenticationPackage)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, PLSA_STRING, PULONG))(ExtensionTable + 32))(
           LsaHandle,
           PackageName,
           AuthenticationPackage);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
