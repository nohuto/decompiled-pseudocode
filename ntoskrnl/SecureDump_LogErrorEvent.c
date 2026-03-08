/*
 * XREFs of SecureDump_LogErrorEvent @ 0x14055C088
 * Callers:
 *     SecureDump_PrepareForInit @ 0x1403AAFA4 (SecureDump_PrepareForInit.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055B7B4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055C294 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140552580 (McTemplateK0q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall SecureDump_LogErrorEvent(int a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    return McTemplateK0q_EtwWriteTransfer(
             IoMgrProvider_Context,
             (const EVENT_DESCRIPTOR *)IoMgr_DumpEncryptionFailure,
             a3,
             a1);
  return result;
}
