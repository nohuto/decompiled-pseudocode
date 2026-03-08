/*
 * XREFs of HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0022E40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003E79C (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMsOs20DescriptorSetIfPresent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rcx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // [rsp+38h] [rbp-28h]
  void *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  _BOOL8 v16; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  WORD1(v9) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  LODWORD(v9) = *(unsigned __int16 *)(v1 + 1990);
  v3 = *(_DWORD *)(v1 + 172);
  v10 = 0LL;
  HIDWORD(v9) = v3;
  v4 = *(_QWORD *)(v1 + 8);
  v16 = 0LL;
  v12 = 0;
  BYTE5(v10) = (*(_BYTE *)(v2 + 4) & 0x20) != 0;
  HIBYTE(v10) = (*(_DWORD *)(v2 + 4) & 0x2000) != 0;
  v5 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v10) = (*(_DWORD *)(v2 + 4) & 0x4000) != 0;
  v16 = !v5;
  v11 = *(_DWORD *)(v4 + 220);
  v13 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v14 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  *(_DWORD *)(v1 + 2476) = *(_DWORD *)(v1 + 256);
  v15 = v1;
  *(_QWORD *)(v1 + 2560) = *(_QWORD *)(v4 + 1432);
  v7 = HUBDESC_ValidateMsOs20DescriptorSet(&v9, v1 + 2464);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v1 + 2464) & 0x200) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 4u);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807389;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v6,
        &USBHUB3_ETW_EVENT_INVALID_MSOS20_DESCRIPTOR_SET,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24),
        v9,
        v10);
  }
  result = 4065LL;
  if ( v7 == 1 )
    return 4077LL;
  return result;
}
