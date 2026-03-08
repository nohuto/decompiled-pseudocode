/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C003B5DC
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BEA8 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C003917C (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C0039478 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0039788 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C0039DAC (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C003A064 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003A3BC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003AC58 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C003B210 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        int *a8,
        _BYTE *a9,
        _BYTE *a10,
        __int64 a11)
{
  int *v11; // rdi
  _WORD *v15; // r13
  unsigned __int16 *v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // rbp
  char v20; // r12
  unsigned int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 **v28; // rax
  int v30; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+10h]

  v11 = a4;
  v30 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v11 = &v30;
  }
  v15 = a5;
  if ( a5 )
    *a5 = 0;
  v16 = a6;
  if ( a6 )
    *a6 = 0;
  v17 = *a1;
  v18 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v19 = a11;
  v20 = 1;
  *a3 = v17;
  v21 = *(_DWORD *)(a2 + 72) - v18;
  LODWORD(a5) = v18;
  v31 = v21;
  if ( (unsigned __int8)v17 >= 3u )
  {
    if ( v21 < 3 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v11 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v19, 2u, 5u, 0xD9u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
      goto LABEL_66;
    }
LABEL_14:
    if ( a1[2] == 2 )
    {
      HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v11, a8, v19);
      if ( *v11 == 1 )
        goto LABEL_66;
      v28 = *(unsigned __int8 ***)(a2 + 80);
      if ( !*v28 )
      {
        *v28 = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v19, 2u, 5u, 0xDAu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v24 = 76LL;
      goto LABEL_37;
    }
    if ( a1[2] == 3 )
    {
      HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, a3, v11, v15, v16, a7, v19);
      if ( *v11 == 1 )
        goto LABEL_66;
      v27 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v27 + 8) )
      {
        *(_QWORD *)(v27 + 8) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v19, 2u, 5u, 0xDBu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v24 = 75LL;
      goto LABEL_37;
    }
    if ( a1[2] != 4 )
    {
      if ( a1[2] == 5 )
      {
        HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v11, v19);
        goto LABEL_66;
      }
      if ( a1[2] == 6 )
      {
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v11, v19);
        goto LABEL_66;
      }
      if ( a1[2] == 10 )
      {
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v11, v19);
        if ( *v11 == 1 )
          goto LABEL_66;
        v25 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v25 + 16) )
        {
          *(_QWORD *)(v25 + 16) = a1;
          goto LABEL_66;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v19, 2u, 5u, 0xDCu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        v24 = 203LL;
      }
      else
      {
        if ( a1[2] != 13 )
        {
          if ( a1[2] == 17 )
            HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(a1, a2, a3, v11, a9, a10, v19);
          goto LABEL_66;
        }
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v11, v19);
        if ( *v11 == 1 )
          goto LABEL_66;
        v23 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v23 + 32) )
        {
          *(_QWORD *)(v23 + 32) = a1;
          goto LABEL_66;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v19, 2u, 5u, 0xDEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        v24 = 245LL;
      }
      goto LABEL_37;
    }
    HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v11, v19);
    if ( *v11 == 1 )
      goto LABEL_66;
    v26 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v26 + 24) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v19, 2u, 5u, 0xDDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v24 = 74LL;
LABEL_37:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
      *v11 = 2;
      goto LABEL_67;
    }
    if ( !*(_BYTE *)(v26 + 41) )
      *(_QWORD *)(v26 + 24) = a1;
LABEL_66:
    if ( !*v11 )
      return v20;
    goto LABEL_67;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL);
  if ( v31 >= 3 )
  {
    *v11 = 2;
    *a3 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v19,
        2u,
        5u,
        0xD7u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        (_DWORD)a5,
        *a1,
        3,
        3);
    v16 = a6;
    goto LABEL_14;
  }
  *v11 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(
      v19,
      2u,
      v22,
      0xD8u,
      (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
      (_DWORD)a5,
      *a1,
      3);
    goto LABEL_66;
  }
LABEL_67:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v19, 2u, 5u, 0xDFu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v20;
}
