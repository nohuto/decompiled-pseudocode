__int64 __fastcall HUBDTX_ValidateAndCacheProductIdStringDescriptor(__int64 a1)
{
  int v1; // ebx
  unsigned __int8 *v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // zf
  int v9; // r9d
  __int64 v10; // rcx
  size_t v11; // rbx
  void *Pool2; // rax
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+34h] [rbp-3Ch]
  __int64 v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  _BOOL8 v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = (unsigned __int8 *)(a1 + 1732);
  v4 = 4077;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v6 = *(_QWORD *)(a1 + 8);
  v21 = a1;
  v16 = 0LL;
  v7 = *(_DWORD *)(v5 + 4);
  v14[0] = *(_WORD *)(a1 + 1990);
  v15 = *(_DWORD *)(a1 + 172);
  v22 = 0LL;
  *(_WORD *)((char *)&v16 + 5) = (v7 & 0x20) != 0;
  v14[1] = 0;
  HIBYTE(v16) = (v7 & 0x2000) != 0;
  v18 = 0;
  v8 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v16) = (v7 & 0x4000) != 0;
  v23 = 0;
  v22 = !v8;
  v17 = *(_DWORD *)(v6 + 220);
  v19 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v20 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (_DWORD)v2,
                          v1,
                          (unsigned int)&v23,
                          v9,
                          *(_QWORD *)(v6 + 1432),
                          (__int64)v14) )
  {
    v11 = *v2;
    Pool2 = (void *)ExAllocatePool2(64LL, v11, 1681082453LL);
    *(_QWORD *)(a1 + 2032) = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v2, v11);
      return v4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x58u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
  }
  else
  {
    *(_DWORD *)(a1 + 2432) = 1073807383;
  }
  v4 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_INVALID_PRODUCT_ID_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v4;
}
