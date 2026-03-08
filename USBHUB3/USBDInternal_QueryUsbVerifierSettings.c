/*
 * XREFs of USBDInternal_QueryUsbVerifierSettings @ 0x1C0041FD4
 * Callers:
 *     USBD_CreateHandle @ 0x1C004247C (USBD_CreateHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

void __fastcall USBDInternal_QueryUsbVerifierSettings(__int64 a1, __int64 a2, __int64 a3)
{
  LOGICAL *v3; // rsi
  LOGICAL IsDriverVerifying; // eax
  POOL_TYPE v7; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, _QWORD *); // rax
  int v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = (LOGICAL *)(a3 + 72);
  IsDriverVerifying = MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(a1 + 8));
  v7 = PoolType;
  *v3 = IsDriverVerifying;
  PoolWithTag = ExAllocatePoolWithTag(v7, 0x1C0uLL, 0x68334855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1C0uLL);
    v9[3] = v3;
    *v9 = USBD_VerifierSettingsCallback;
    v9[2] = L"UsbVerifierEnabled";
    *((_DWORD *)v9 + 8) = 4;
    *((_DWORD *)v9 + 12) = 4;
    v9[5] = v3;
    v9[9] = L"UsbVerifierFailRegistration";
    v9[10] = a3 + 76;
    v9[12] = a3 + 76;
    v9[7] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 22) = 4;
    *((_DWORD *)v9 + 26) = 4;
    v9[16] = L"UsbVerifierFailChainedMdlSupport";
    v9[17] = a3 + 80;
    v9[19] = a3 + 80;
    v9[14] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 36) = 4;
    *((_DWORD *)v9 + 40) = 4;
    v9[23] = L"UsbVerifierFailStaticStreamSupport";
    v9[24] = a3 + 84;
    v9[26] = a3 + 84;
    v9[21] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 50) = 4;
    *((_DWORD *)v9 + 54) = 4;
    v9[30] = L"UsbVerifierStaticStreamCountOverride";
    v9[31] = a3 + 88;
    v9[33] = a3 + 88;
    v9[28] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 64) = 4;
    *((_DWORD *)v9 + 68) = 4;
    v9[37] = L"UsbVerifierFailEnableStaticStreams";
    v9[38] = a3 + 92;
    v9[40] = a3 + 92;
    v9[35] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 78) = 4;
    *((_DWORD *)v9 + 82) = 4;
    v9[44] = L"UsbVerifierFailSecureTransferSupport";
    v9[42] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v9 + 92) = 4;
    *((_DWORD *)v9 + 96) = 4;
    v9[45] = a3 + 160;
    v9[47] = a3 + 160;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))RtlQueryRegistryValues;
    v11 = SystemRoutineAddress(1LL, a2, v9);
    if ( v11 < 0 && g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v11);
    ExFreePoolWithTag(v9, 0x68334855u);
  }
  else if ( g_EnableDbgPrints )
  {
    DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
  }
}
