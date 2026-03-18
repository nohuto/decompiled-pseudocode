/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x140812F54
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055DC54 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055E734 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_140812CB4 @ 0x140812CB4 (sub_140812CB4.c)
 *     RtlGenerateClass5Guid @ 0x140812D60 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x1409DA8DC (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx
  unsigned __int64 ExtensionTable; // rax

  v8 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v8 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, _QWORD))(ExtensionTable + 200))(
           phAlgorithm,
           pszAlgId,
           pszImplementation,
           dwFlags);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
