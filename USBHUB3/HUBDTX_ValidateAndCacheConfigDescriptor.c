/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B98C
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C00214A0 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003599C (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  bool v7; // cf
  int v8; // edx
  bool v9; // zf
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  int v13; // eax
  char v14; // al
  unsigned __int8 *v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // r8
  char v18; // al
  char v19; // al
  void *Pool2; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  _WORD v27[2]; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+54h] [rbp-5h]
  __int64 v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+60h] [rbp+7h]
  int v31; // [rsp+64h] [rbp+Bh]
  void (__fastcall *v32)(__int64, __int64); // [rsp+68h] [rbp+Fh]
  void *v33; // [rsp+70h] [rbp+17h]
  __int64 v34; // [rsp+78h] [rbp+1Fh]
  _BOOL8 v35; // [rsp+80h] [rbp+27h]
  char v36; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 2016);
  v36 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = a1 + 1732;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v5 = *(_QWORD *)(a1 + 8);
  v29 = 0LL;
  v35 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  v27[0] = *(_WORD *)(a1 + 1990);
  v28 = *(_DWORD *)(a1 + 172);
  v27[1] = 0;
  *(_WORD *)((char *)&v29 + 5) = (v6 & 0x20) != 0;
  v31 = 0;
  HIBYTE(v29) = (v6 & 0x2000) != 0;
  v7 = (v6 & 0x4000) != 0;
  v8 = *(_DWORD *)(a1 + 256);
  v9 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v29) = v7;
  v34 = a1;
  v35 = !v9;
  LODWORD(v4) = *(_DWORD *)(v5 + 220);
  v10 = *(_QWORD *)(v5 + 1432);
  v30 = v4;
  v32 = (void (__fastcall *)(__int64, __int64))HUBMISC_LogDescriptorValidationErrorForDevice;
  v33 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(v1, v8, (unsigned int)v27, v10, (__int64)&v36) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_72;
    v12 = 70;
    goto LABEL_71;
  }
  v13 = *(unsigned __int16 *)(a1 + 1734);
  if ( *(_WORD *)(v1 + 2) != (_WORD)v13 )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x47u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        *(unsigned __int16 *)(v1 + 2),
        v13);
    v32(v34, 61LL);
    goto LABEL_72;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x2000u);
  if ( v36 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x40u);
  if ( *(_BYTE *)(a1 + 2005) > 1u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x80u);
  if ( *(_BYTE *)(a1 + 2005) > 1u && *(_BYTE *)(v1 + 4) > 1u )
  {
    v14 = *(_BYTE *)(a1 + 1992);
    if ( !v14 || v14 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
    {
      v15 = (unsigned __int8 *)(v1 + 9);
      while ( (unsigned __int64)v15 < v1 + (unsigned __int64)*(unsigned __int16 *)(v1 + 2) )
      {
        v16 = *v15;
        v17 = v15;
        if ( !(_BYTE)v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              0x48u,
              (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
          break;
        }
        v15 += v16;
        v18 = v17[1];
        if ( v18 == 11 && v17[4] == 1 || v18 == 4 && v17[5] == 1 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
          if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000000u);
          break;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 && *(_BYTE *)(a1 + 2005) == 1 && *(_BYTE *)(v1 + 4) > 1u )
  {
    v19 = *(_BYTE *)(a1 + 1992);
    if ( !v19 || v19 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2016) )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 2), 1681082453LL);
    *(_QWORD *)(a1 + 2016) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_72;
      v12 = 73;
      goto LABEL_71;
    }
    memmove(Pool2, (const void *)v1, *(unsigned __int16 *)(v1 + 2));
    v1 = *(_QWORD *)(a1 + 2016);
  }
  v21 = HUBDESC_ParseConfigurationDescriptor(v1, v1, -1, -1, -1, -1, -1, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 2008) = v21;
  v22 = v21;
  if ( v21 )
  {
    if ( *(_BYTE *)(v21 + 5) == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1632) & 4) == 0
           && *(_WORD *)(a1 + 1990) > 0x200u
           && (*(_DWORD *)(a1 + 1644) & 0x800) == 0 )
    {
      v23 = *(_DWORD *)(a1 + 172);
      if ( v23 == 3 )
      {
        v11 = *(unsigned int *)(*(_QWORD *)a1 + 760LL);
        if ( (v11 & 1) == 0 )
          goto LABEL_56;
      }
      else if ( v23 != 2 )
      {
        goto LABEL_56;
      }
      v24 = HUBDESC_ParseConfigurationDescriptor(
              v1,
              v22,
              *(unsigned __int8 *)(v22 + 2),
              -1,
              8,
              6,
              98,
              0LL,
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
      if ( v24 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
        *(_QWORD *)(a1 + 2008) = v24;
      }
    }
LABEL_56:
    if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
    {
      if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 )
      {
        v25 = *(_QWORD *)(a1 + 2008);
        if ( *(_BYTE *)(v25 + 5) == 1 && !*(_BYTE *)(v25 + 7) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              0x4Au,
              (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
          *(_QWORD *)(a1 + 2008) = 0LL;
          *(_DWORD *)(a1 + 2432) = 1073807393;
          goto LABEL_72;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1632) & 6) == 6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Bu,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x100u);
  if ( (*(_DWORD *)(a1 + 1644) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2432) = 1073807387;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_72;
    v12 = 76;
LABEL_71:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
LABEL_72:
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
