__int64 __fastcall HUBPDO_ValidateConfigurationDescriptor(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int16 v8; // cx
  unsigned __int8 v9; // r8
  int v10; // ecx
  bool v11; // cf
  __int64 v12; // rcx
  bool v13; // zf
  _WORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+44h] [rbp-3Ch]
  __int64 v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-2Ch]
  void *v21; // [rsp+58h] [rbp-28h]
  void *v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  _BOOL8 v24; // [rsp+70h] [rbp-10h]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v8 = *(_WORD *)(a1 + 1990);
  v9 = a2[1];
  v18 = 0LL;
  v16[0] = v8;
  v17 = *(_DWORD *)(a1 + 172);
  v10 = *(_DWORD *)(v7 + 4);
  v24 = 0LL;
  *(_WORD *)((char *)&v18 + 5) = (v10 & 0x20) != 0;
  v16[1] = 0;
  HIBYTE(v18) = (v10 & 0x2000) != 0;
  v11 = (v10 & 0x4000) != 0;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v18) = v11;
  v20 = 0;
  v24 = !v13;
  v19 = *(_DWORD *)(v12 + 220);
  v21 = &HUBMISC_LogDescriptorValidationErrorForDevice;
  v22 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v23 = a1;
  if ( v9 != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_c(
        *(_QWORD *)(v12 + 1432),
        2u,
        5u,
        0x18u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v9);
    return (unsigned int)-1073737984;
  }
  if ( *a2 < 9u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v12 + 1432),
        2u,
        5u,
        0x19u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        *a2,
        9);
    return (unsigned int)-1073737984;
  }
  if ( !*((_WORD *)a2 + 1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(v12 + 1432),
        2u,
        5u,
        0x1Au,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    return (unsigned int)-1073737984;
  }
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           (_DWORD)a2,
                           a3,
                           (unsigned int)v16,
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           0LL) )
    return (unsigned int)-1073737984;
  return v6;
}
