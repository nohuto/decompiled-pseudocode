/*
 * XREFs of BCryptGetProperty @ 0x140754608
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055B7B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055C294 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x1407544E8 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x14081B430 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1409D7A3C (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, __int64, ULONG *, _DWORD))(ExtensionTable + 168))(
           hObject,
           pszProperty,
           pbOutput,
           4LL,
           pcbResult,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
