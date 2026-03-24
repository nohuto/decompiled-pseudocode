/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0028C00
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C001EAF0 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003281C (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0035C28 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  bool v7; // cf
  int v8; // edx
  bool v9; // zf
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  char v13; // al
  unsigned __int8 *v14; // rcx
  _BYTE *v15; // r8
  char v16; // al
  char v17; // al
  PVOID PoolWithTag; // rax
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  _WORD v24[2]; // [rsp+58h] [rbp-9h] BYREF
  int v25; // [rsp+5Ch] [rbp-5h]
  __int64 v26; // [rsp+60h] [rbp-1h]
  int v27; // [rsp+68h] [rbp+7h]
  int v28; // [rsp+6Ch] [rbp+Bh]
  void (__fastcall *v29)(__int64, __int64); // [rsp+70h] [rbp+Fh]
  void *v30; // [rsp+78h] [rbp+17h]
  __int64 v31; // [rsp+80h] [rbp+1Fh]
  _BOOL8 v32; // [rsp+88h] [rbp+27h]
  char v33; // [rsp+C8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 2016);
  v33 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = a1 + 1732;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  v5 = *(_QWORD *)(a1 + 8);
  v26 = 0LL;
  v32 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  v24[0] = *(_WORD *)(a1 + 1990);
  v25 = *(_DWORD *)(a1 + 172);
  v24[1] = 0;
  *(_WORD *)((char *)&v26 + 5) = (v6 & 0x20) != 0;
  v28 = 0;
  HIBYTE(v26) = (v6 & 0x2000) != 0;
  v7 = (v6 & 0x4000) != 0;
  v8 = *(_DWORD *)(a1 + 256);
  v9 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v26) = v7;
  v31 = a1;
  v32 = !v9;
  LODWORD(v4) = *(_DWORD *)(v5 + 220);
  v10 = *(_QWORD *)(v5 + 1432);
  v27 = v4;
  v29 = (void (__fastcall *)(__int64, __int64))HUBMISC_LogDescriptorValidationErrorForDevice;
  v30 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(v1, v8, (unsigned int)v24, v10, (__int64)&v33) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v12 = 70;
    goto LABEL_66;
  }
  if ( *(_WORD *)(v1 + 2) != *(_WORD *)(a1 + 1734) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x47u,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        *(unsigned __int16 *)(v1 + 2),
        *(unsigned __int16 *)(a1 + 1734));
    v29(v31, 61LL);
    goto LABEL_67;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x2000u);
  if ( v33 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x40u);
  if ( *(_BYTE *)(a1 + 2005) > 1u )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x80u);
    if ( *(_BYTE *)(a1 + 2005) > 1u && *(_BYTE *)(v1 + 4) > 1u )
    {
      v13 = *(_BYTE *)(a1 + 1992);
      if ( !v13 || v13 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      {
        v14 = (unsigned __int8 *)(v1 + 9);
        while ( (unsigned __int64)v14 < v1 + (unsigned __int64)*(unsigned __int16 *)(v1 + 2) )
        {
          v15 = v14;
          v14 += *v14;
          v16 = v15[1];
          if ( v16 == 11 && v15[4] == 1 || v16 == 4 && v15[5] == 1 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
            if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
              _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000000u);
            break;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 && *(_BYTE *)(a1 + 2005) == 1 && *(_BYTE *)(v1 + 4) > 1u )
  {
    v17 = *(_BYTE *)(a1 + 1992);
    if ( !v17 || v17 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2016) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2), 0x64334855u);
    *(_QWORD *)(a1 + 2016) = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v12 = 72;
      goto LABEL_66;
    }
    memmove(PoolWithTag, (const void *)v1, *(unsigned __int16 *)(v1 + 2));
    v1 = *(_QWORD *)(a1 + 2016);
  }
  v19 = HUBDESC_ParseConfigurationDescriptor(v1, v1, -1, -1, -1, -1, -1, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 2008) = v19;
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 5) == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1632) & 4) == 0
           && *(_WORD *)(a1 + 1990) > 0x200u
           && (*(_DWORD *)(a1 + 1644) & 0x800) == 0 )
    {
      if ( (v20 = *(_DWORD *)(a1 + 172), v20 == 3) && (v11 = *(unsigned int *)(*(_QWORD *)a1 + 760LL), (v11 & 1) != 0)
        || v20 == 2 )
      {
        v21 = HUBDESC_ParseConfigurationDescriptor(
                v1,
                v19,
                *(unsigned __int8 *)(v19 + 2),
                -1,
                8,
                6,
                98,
                0LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( v21 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
          *(_QWORD *)(a1 + 2008) = v21;
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
    {
      if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 )
      {
        v22 = *(_QWORD *)(a1 + 2008);
        if ( *(_BYTE *)(v22 + 5) == 1 && !*(_BYTE *)(v22 + 7) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              0x49u,
              (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
          *(_QWORD *)(a1 + 2008) = 0LL;
          *(_DWORD *)(a1 + 2432) = 1073807393;
          goto LABEL_67;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1632) & 6) == 6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Au,
      (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x100u);
  if ( (*(_DWORD *)(a1 + 1644) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2432) = 1073807387;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v12 = 75;
LABEL_66:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
LABEL_67:
    v3 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_INVALID_CONFIGURATION_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
  }
  return v3;
}
