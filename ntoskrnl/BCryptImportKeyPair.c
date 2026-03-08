/*
 * XREFs of BCryptImportKeyPair @ 0x1409C6084
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055B7B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptImportKeyPair(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_KEY_HANDLE hImportKey,
        LPCWSTR pszBlobType,
        BCRYPT_KEY_HANDLE *phKey,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD, const wchar_t *, BCRYPT_KEY_HANDLE *, PUCHAR, ULONG, _DWORD))(ExtensionTable + 192))(
           hAlgorithm,
           0LL,
           L"RSAPUBLICBLOB",
           phKey,
           pbInput,
           cbInput,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
