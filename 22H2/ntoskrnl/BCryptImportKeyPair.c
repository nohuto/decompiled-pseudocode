/*
 * XREFs of BCryptImportKeyPair @ 0x14091C358
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14050A414 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
