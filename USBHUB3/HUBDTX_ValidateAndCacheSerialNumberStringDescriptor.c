__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rsi
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // r14d
  unsigned __int16 *v15; // rdi
  void *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 Pool2; // rax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  __int64 v24; // [rsp+28h] [rbp-41h]
  unsigned int v25; // [rsp+30h] [rbp-39h]
  __int64 v26; // [rsp+38h] [rbp-31h]
  _WORD v27[2]; // [rsp+40h] [rbp-29h] BYREF
  int v28; // [rsp+44h] [rbp-25h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  int v30; // [rsp+50h] [rbp-19h]
  int v31; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+58h] [rbp-11h]
  void *v33; // [rsp+60h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp-1h]
  _BOOL8 v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+6Fh]
  unsigned int v38; // [rsp+E0h] [rbp+77h]
  unsigned int v39; // [rsp+E8h] [rbp+7Fh]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v27[0] = *(_WORD *)(a1 + 1990);
  v3 = *(_DWORD *)(a1 + 172);
  v29 = 0LL;
  v28 = v3;
  v4 = *(_DWORD *)(v2 + 4);
  v35 = 0LL;
  v27[1] = 0;
  *(_WORD *)((char *)&v29 + 5) = (v4 & 0x20) != 0;
  v31 = 0;
  HIBYTE(v29) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v34 = a1;
  v7 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  v8 = *(_QWORD *)(v6 + 1432);
  BYTE4(v29) = v5;
  v26 = v8;
  v35 = !v7;
  v30 = *(_DWORD *)(v6 + 220);
  v32 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v33 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v25 = *(_DWORD *)(a1 + 256);
  v39 = v25;
  v36 = 0;
  v11 = HUBDESC_InternalValidateStringDescriptor((int)a1 + 1732, v25, (unsigned int)&v36, v9, v8, (__int64)v27);
  if ( !v11 )
    goto LABEL_13;
  v12 = *(unsigned __int8 *)(a1 + 1732);
  v13 = 0;
  v37 = v12;
  v38 = v12 - 2;
  v14 = (v12 - 2) >> 1;
  if ( !v14 )
    goto LABEL_15;
  v15 = (unsigned __int16 *)(a1 + 1734);
  do
  {
    v10 = *v15;
    if ( !(_WORD)v10 )
      break;
    if ( (unsigned __int16)(v10 - 32) > 0x5Fu || (_DWORD)v10 == 44 )
    {
      v11 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = *v15;
        WPP_RECORDER_SF_d(v26, 2u, 5u, 0x119u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v24);
      }
      HUBMISC_LogDescriptorValidationErrorForDevice(a1, 132LL);
    }
    ++v13;
    ++v15;
  }
  while ( v13 < v14 );
  v12 = v37;
  if ( v11 )
  {
LABEL_15:
    v16 = *(void **)(a1 + 2152);
    if ( v16 )
      ExFreePoolWithTag(v16, 0x64334855u);
    v17 = v39 + 12;
    if ( !_bittest((const signed __int32 *)(a1 + 1636), 0xBu) )
      v17 = v25;
    v18 = v17;
    Pool2 = ExAllocatePool2(64LL, v17, 1681082453LL);
    *(_QWORD *)(a1 + 2152) = Pool2;
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    v20 = *(_DWORD *)(a1 + 1632);
    *(_DWORD *)(a1 + 2148) = v18;
    if ( (v20 & 2) != 0 )
    {
      if ( *(_WORD *)(a1 + 1990) < 0x300u )
      {
        *(_QWORD *)v10 = *(_QWORD *)L"MSFT20";
        v21 = *(_DWORD *)L"20";
LABEL_25:
        *(_DWORD *)(v10 + 8) = v21;
        v10 += 12LL;
        goto LABEL_26;
      }
    }
    else if ( !_bittest((const signed __int32 *)(a1 + 1636), 0xBu) )
    {
LABEL_26:
      memmove((void *)v10, (const void *)(a1 + 1734), v12 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x40u);
      return 4077;
    }
    *(_QWORD *)v10 = *(_QWORD *)L"MSFT30";
    v21 = *(_DWORD *)L"30";
    goto LABEL_25;
  }
  v8 = v26;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x11Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  *(_DWORD *)(a1 + 2432) = 1073807384;
LABEL_28:
  v22 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v22;
}
