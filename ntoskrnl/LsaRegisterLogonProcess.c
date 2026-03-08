/*
 * XREFs of LsaRegisterLogonProcess @ 0x1408610D0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall LsaRegisterLogonProcess(
        PLSA_STRING LogonProcessName,
        PHANDLE LsaHandle,
        PLSA_OPERATIONAL_MODE SecurityMode)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(PLSA_STRING, PHANDLE, PLSA_OPERATIONAL_MODE))(ExtensionTable + 40))(
           LogonProcessName,
           LsaHandle,
           SecurityMode);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
