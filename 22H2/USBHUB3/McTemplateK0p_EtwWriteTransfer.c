/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0
 * Callers:
 *     HUBPARENT_ResetHub @ 0x1C0007D60 (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0008620 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C0008B60 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00093E0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DA50 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018420 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C001A390 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C0021C30 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1C0021DE0 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C0021F00 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0022A20 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0022BB0 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0022D30 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C0022F60 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C00249B0 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AD60 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B210 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B87C (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BE34 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C002C10C (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C002C304 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002C4E0 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor @ 0x1C002C858 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002CA04 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C002CBE0 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C002E868 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002E900 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C0031134 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C00327F8 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBMISC_LogResetTimeout @ 0x1C0033D34 (HUBMISC_LogResetTimeout.c)
 *     HUBIDLE_AddEvent @ 0x1C003E9A4 (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0077890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0078370 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0078620 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007CFF0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C007D8C0 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2u, &v4);
}
