/*
 * XREFs of BCryptGetProperty @ 0x1407623F0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055DC54 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055E734 (SecureDump_SymmetricEncryptionSetup.c)
 *     WbHashData @ 0x1407622D0 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x140812D60 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1409DA8DC (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
