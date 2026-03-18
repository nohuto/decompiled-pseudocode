/*
 * XREFs of BCryptCreateHash @ 0x14076247C
 * Callers:
 *     WbHashData @ 0x1407622D0 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x140812D60 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCreateHash(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_HASH_HANDLE *phHash,
        PUCHAR pbHashObject,
        ULONG cbHashObject,
        PUCHAR pbSecret,
        ULONG cbSecret,
        ULONG dwFlags)
{
  NTSTATUS v11; // ebx
  unsigned __int64 ExtensionTable; // rax

  v11 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v11 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, BCRYPT_HASH_HANDLE *, PUCHAR, _QWORD, _QWORD, _DWORD, _DWORD))(ExtensionTable + 40))(
            hAlgorithm,
            phHash,
            pbHashObject,
            cbHashObject,
            0LL,
            0,
            0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v11;
}
