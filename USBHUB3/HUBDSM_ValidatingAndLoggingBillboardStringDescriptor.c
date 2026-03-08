/*
 * XREFs of HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0022CC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002D020 (HUBDTX_LogBillboardEvent.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C003C360 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingAndLoggingBillboardStringDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  int v3; // ebx
  __int64 v4; // rax
  int v5; // edx
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  _WORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  __int64 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  _BOOL8 v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 256);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v18 = v1;
  v13 = 0LL;
  v19 = 0LL;
  v5 = *(_DWORD *)(v4 + 4);
  v11[0] = *(_WORD *)(v1 + 1990);
  v12 = *(_DWORD *)(v1 + 172);
  v11[1] = 0;
  *(_WORD *)((char *)&v13 + 5) = (v5 & 0x20) != 0;
  v15 = 0;
  HIBYTE(v13) = (v5 & 0x2000) != 0;
  v20 = 0;
  v6 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v13) = (v5 & 0x4000) != 0;
  v7 = *(_QWORD *)(v1 + 8);
  v19 = !v6;
  v14 = *(_DWORD *)(v7 + 220);
  v16 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (int)v1 + 1732,
                          v3,
                          (unsigned int)&v20,
                          v8,
                          *(_QWORD *)(v7 + 1432),
                          (__int64)v11) )
  {
    HUBDTX_LogBillboardEvent(v1, v1 + 1732);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807391;
    v2 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_INVALID_BILLBOARD_STRING_DESCRIPTOR,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24));
  }
  return v2;
}
