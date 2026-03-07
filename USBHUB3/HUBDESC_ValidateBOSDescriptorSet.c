bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _BYTE *a6,
        _WORD *a7,
        unsigned __int16 *a8,
        _BYTE *a9,
        int *a10,
        _DWORD *a11,
        _BYTE *a12,
        _BYTE *a13,
        __int64 a14)
{
  __int64 v14; // r14
  int v15; // r12d
  __int64 v16; // rdi
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _BYTE *v21; // rbx
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  _BYTE *v24; // r13
  __int64 v25; // rsi
  bool v26; // bl
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 *v29; // rdi
  bool v30; // al
  _DWORD *v31; // rdi
  __int64 v32; // rax
  int v34; // [rsp+20h] [rbp-D9h]
  __int64 v35; // [rsp+28h] [rbp-D1h]
  __int64 v36; // [rsp+30h] [rbp-C9h]
  _BYTE v37[96]; // [rsp+60h] [rbp-99h] BYREF
  _BYTE v38[112]; // [rsp+C0h] [rbp-39h] BYREF
  int v40; // [rsp+158h] [rbp+5Fh] BYREF

  v14 = a5;
  v15 = 0;
  v16 = a4;
  v40 = 0;
  LODWORD(a5) = 0;
  memset(v37, 0, 0x5EuLL);
  memset(v38, 0, 0x40uLL);
  v19 = *(_OWORD *)v14;
  *(_QWORD *)&v37[88] = a3;
  v20 = *(_OWORD *)(v14 + 16);
  *(_QWORD *)&v37[64] = a2 + v16;
  v21 = v38;
  *(_OWORD *)v37 = v19;
  v22 = *(_OWORD *)(v14 + 32);
  if ( a6 )
    v21 = a6;
  *(_OWORD *)&v37[16] = v20;
  v23 = *(_QWORD *)(v14 + 48);
  *(_DWORD *)&v37[72] = v16;
  *(_QWORD *)&v37[56] = a2;
  *(_OWORD *)&v37[32] = v22;
  *(_QWORD *)&v37[48] = v23;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a12 )
    *a12 = 0;
  v24 = a13;
  if ( a13 )
    *a13 = 0;
  memset(v21, 0, 0x40uLL);
  *(_QWORD *)&v37[80] = v21;
  if ( (unsigned int)v16 < 5 )
  {
    v25 = a14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a14, 2u, 5u, 0xEAu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
    goto LABEL_15;
  }
  v25 = a14;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v37, &a5, &v40, a14);
  if ( v40 == 1 )
  {
LABEL_15:
    v26 = 0;
    goto LABEL_55;
  }
  v26 = v40 != 2;
  if ( (unsigned int)v16 < *(unsigned __int16 *)(a2 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v25, v27, v28, 0xEBu, v34);
    v26 = 0;
  }
  if ( (unsigned int)v16 > *(unsigned __int16 *)(a2 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 22LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        v25,
        2u,
        5u,
        0xECu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v16,
        *(unsigned __int16 *)(a2 + 2));
  }
  v29 = (unsigned __int8 *)(a2 + (unsigned int)a5);
  if ( (unsigned __int64)v29 < *(_QWORD *)&v37[64] )
  {
    while ( 1 )
    {
      v40 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v29, (__int64)v37, (unsigned int *)&a5, &v40, v25);
      if ( v40 == 1 )
        break;
      v30 = v26;
      if ( v40 == 2 )
        v30 = 0;
      v40 = 0;
      v26 = v30;
      if ( v29[1] == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v29,
          (__int64)v37,
          (unsigned int *)&a5,
          &v40,
          a7,
          a8,
          a9,
          a10,
          a12,
          v24,
          v25);
        if ( v40 == 1 )
        {
          v26 = 0;
          goto LABEL_55;
        }
        if ( v40 == 2 )
          v26 = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = v29[1];
          LODWORD(v35) = (_DWORD)v29 - a2;
          WPP_RECORDER_SF_DD(v25, 2u, 5u, 0xEDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 28LL);
      }
      ++v15;
      v29 += (unsigned int)a5;
      if ( (unsigned __int64)v29 >= *(_QWORD *)&v37[64] )
        goto LABEL_36;
    }
    v26 = 0;
    goto LABEL_55;
  }
LABEL_36:
  if ( *(unsigned __int8 *)(a2 + 4) != v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = *(unsigned __int8 *)(a2 + 4);
      LODWORD(v35) = v15;
      WPP_RECORDER_SF_DD(v25, 2u, 5u, 0xEEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 25LL);
    v26 = 0;
  }
  v31 = a11;
  if ( *(_QWORD *)(*(_QWORD *)&v37[80] + 8LL) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( *(_DWORD *)&v37[4] == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v25, 2u, 5u, 0xEFu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 26LL);
    v26 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v31 )
  {
    v32 = *(_QWORD *)&v37[80];
    if ( *(_QWORD *)(*(_QWORD *)&v37[80] + 16LL) )
      *v31 |= 0x1000u;
    if ( *(_BYTE *)(v32 + 42) )
      *v31 |= 0x10000u;
  }
  if ( !v26 )
  {
LABEL_55:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v25, 2u, 5u, 0xF0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return v26;
}
