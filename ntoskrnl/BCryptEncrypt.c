/*
 * XREFs of BCryptEncrypt @ 0x1405B5304
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055B7B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x14055BA20 (SecureDump_Encrypt_DmpData.c)
 *     SmCrAuthEncrypt @ 0x1405CB7F0 (SmCrAuthEncrypt.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptEncrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v14; // ebx
  unsigned __int64 ExtensionTable; // rax

  v14 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v14 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE, PUCHAR, _QWORD, void *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG))(ExtensionTable + 88))(
            hKey,
            pbInput,
            cbInput,
            pPaddingInfo,
            pbIV,
            cbIV,
            pbOutput,
            cbOutput,
            pcbResult,
            dwFlags);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v14;
}
