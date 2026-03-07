char __fastcall HUBDESC_ValidateConfigurationDescriptorSet(
        unsigned __int8 *a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  char v13; // bl
  unsigned __int8 *v14; // rbx
  char v15; // di
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18[3]; // [rsp+44h] [rbp-BCh] BYREF
  _OWORD v19[17]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a2;
  v17 = 0;
  v18[0] = 0;
  if ( a5 )
    *a5 = 0;
  memset(v19, 0, 0x108uLL);
  *((_QWORD *)&v19[13] + 1) = &v19[14];
  *(_QWORD *)&v19[6] = (char *)&v19[6] + 8;
  LODWORD(v19[13]) = 256;
  DWORD2(v19[5]) = 256;
  DWORD2(v19[8]) = 256;
  *(_QWORD *)&v19[9] = (char *)&v19[9] + 8;
  RtlClearAllBits((PRTL_BITMAP)&v19[13]);
  RtlClearAllBits((PRTL_BITMAP)((char *)&v19[5] + 8));
  RtlClearAllBits((PRTL_BITMAP)((char *)&v19[8] + 8));
  v9 = *a3;
  *((_QWORD *)&v19[3] + 1) = a1;
  v10 = a3[1];
  *(_QWORD *)&v19[4] = &a1[v5];
  v19[0] = v9;
  v11 = a3[2];
  DWORD2(v19[4]) = v5;
  v19[1] = v10;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 6);
  v19[2] = v11;
  *(_QWORD *)&v19[3] = v10;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v12 = 60LL;
LABEL_7:
    (*((void (__fastcall **)(_QWORD, __int64))a3 + 3))(*((_QWORD *)a3 + 5), v12);
    goto LABEL_8;
  }
  if ( (unsigned int)v5 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x7Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v5, 9);
    v12 = 56LL;
    goto LABEL_7;
  }
  HUBDESC_InternalValidateConfigDescriptor(a1, (__int64)v19, v18, &v17, a4);
  if ( v17 == 1 )
    goto LABEL_8;
  v14 = a1 + 9;
  v15 = v17 != 2;
  while ( (unsigned __int64)v14 < *(_QWORD *)&v19[4] )
  {
    v18[0] = 0;
    v17 = 0;
    HUBDESC_InternalValidateCommonDescriptorHeader(v14, (__int64)v19, v18, &v17, a4);
    if ( v17 == 1 )
      goto LABEL_8;
    if ( v17 == 2 )
      v15 = LOBYTE(v19[3]) != 0 ? v15 : 0;
    v17 = 0;
    if ( v14[1] == 4 )
    {
      LODWORD(v19[16]) &= ~4u;
      HUBDESC_InternalValidateInterfaceDescriptor(v14, (__int64)v19, v18, &v17, a4);
      if ( v17 == 1 )
        goto LABEL_8;
      if ( v17 == 2 )
        v15 = 0;
    }
    else
    {
      switch ( v14[1] )
      {
        case 5u:
          HUBDESC_InternalValidateEndpointDescriptor(v14, (__int64)v19, v18, &v17, a4);
          break;
        case 0xBu:
          LODWORD(v19[16]) &= 0xFFFFFFF3;
          HUBDESC_InternalValidateIADescriptor(v14, (__int64)v19, v18, &v17, a4);
          break;
        case 0x30u:
          LODWORD(v19[16]) &= ~8u;
          HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(v14, (__int64)v19, v18, &v17, a4, a5);
          break;
        case 0x31u:
          HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(v14, (__int64)v19, v18, &v17, a4);
          break;
        default:
          LODWORD(v19[16]) &= 0xFFFFFFF3;
          goto LABEL_35;
      }
      if ( v17 == 1 )
        goto LABEL_8;
      if ( v17 == 2 )
        v15 = 0;
    }
LABEL_35:
    if ( !*v14 )
      break;
    v14 += v18[0];
  }
  v17 = 0;
  HUBDESC_InternalValidateLastInterface((__int64)v19, &v17, a4);
  if ( v17 != 1 )
  {
    v13 = v15;
    if ( v17 == 2 )
      v13 = 0;
    if ( WORD5(v19[12]) == a1[4] || LOWORD(v19[0]) <= 0x200u && !WORD6(v19[0]) )
    {
      if ( !v13 )
        goto LABEL_44;
      return v13;
    }
  }
LABEL_8:
  v13 = 0;
LABEL_44:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v13;
}
