/*
 * XREFs of HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C003A064
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C003B5DC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

_BYTE *__fastcall HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7)
{
  _BYTE *result; // rax
  int *v8; // rsi
  void *v12; // r8
  __int64 v13; // r15
  int v14; // r14d
  unsigned int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF

  result = &retaddr;
  v22 = 0;
  v8 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v8 = &v22;
  }
  v12 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  v13 = a7;
  v14 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v15 = *(_DWORD *)(a2 + 72) - v14;
  if ( *a1 < 8u )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
                        *(_QWORD *)(a2 + 40),
                        262LL,
                        &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    if ( v15 < 8 )
    {
      *v8 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      result = (_BYTE *)WPP_RECORDER_SF_DDD(
                          v13,
                          2u,
                          v16,
                          0xA8u,
                          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                          v14,
                          *a1,
                          8);
      goto LABEL_45;
    }
    *v8 = 2;
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_BYTE *)WPP_RECORDER_SF_DDDD(
                          v13,
                          2u,
                          5u,
                          0xA7u,
                          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                          v14,
                          *a1,
                          8,
                          8);
    v12 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  }
  if ( *a1 > 8u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v8 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = 8;
      LODWORD(v19) = *a1;
      LODWORD(v18) = v14;
      WPP_RECORDER_SF_DDD(
        v13,
        2u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        0xA9u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v18,
        v19,
        v20);
    }
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 264LL, v12);
  }
  if ( *a3 <= v15 )
  {
    if ( a1[3] )
    {
      if ( *((_DWORD *)a1 + 1) >= 4u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v8 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xACu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
        }
        result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
                            *(_QWORD *)(a2 + 40),
                            265LL,
                            v12);
      }
      if ( (a1[4] & 1) != 0 )
      {
        result = a5;
        if ( a5 )
          *a5 = 1;
      }
      if ( (a1[4] & 2) != 0 )
      {
        result = a6;
        if ( a6 )
          *a6 = 1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = (*((_DWORD *)a1 + 1) >> 1) & 1;
        LODWORD(v18) = *((_DWORD *)a1 + 1) & 1;
        result = (_BYTE *)WPP_RECORDER_SF_DD(
                            v13,
                            4u,
                            5u,
                            0xADu,
                            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                            v18,
                            v19);
      }
      goto LABEL_45;
    }
    *v8 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = a1[3];
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xABu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
    }
    v17 = 265LL;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v8 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v14;
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xAAu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
    }
    v17 = 261LL;
  }
  result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v17, v12);
LABEL_45:
  if ( *v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_BYTE *)WPP_RECORDER_SF_(v13, 2u, 5u, 0xAEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return result;
}
