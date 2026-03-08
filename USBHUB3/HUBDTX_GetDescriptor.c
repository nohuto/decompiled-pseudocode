/*
 * XREFs of HUBDTX_GetDescriptor @ 0x1C002A598
 * Callers:
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x1C00213D0 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C0021580 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C00219F0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0022690 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0022750 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C0022FD0 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002A9A4 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C002AA64 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C002AB68 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C002ABF8 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C002AD6C (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B534 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C002B638 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C002B714 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetDescriptor(__int64 a1, __int64 a2, int a3, char a4, char a5, __int16 a6)
{
  char v6; // al

  v6 = *(_BYTE *)(a1 + 400) & 0x1C;
  *(_BYTE *)(a1 + 401) = 6;
  *(_BYTE *)(a1 + 403) = a4;
  *(_BYTE *)(a1 + 400) = v6 | 0x80;
  *(_BYTE *)(a1 + 402) = a5;
  *(_WORD *)(a1 + 404) = a6;
  *(_WORD *)(a1 + 406) = a3;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           a2,
           a3,
           1,
           *(_BYTE *)(a1 + 1512));
}
