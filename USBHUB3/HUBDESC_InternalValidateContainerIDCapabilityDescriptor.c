/*
 * XREFs of HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C003917C
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C003B5DC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0035964 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateContainerIDCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v8; // r15
  char v9; // r12
  int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // r11
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v22; // [rsp+A0h] [rbp+18h]

  v22 = a3;
  v21 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v21;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x14u )
    goto LABEL_9;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 64LL);
  if ( v11 >= 0x14 )
  {
    v13 = v22;
    *v5 = 2;
    *v13 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v8,
        2u,
        5u,
        0x80u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v10,
        *a1,
        20,
        20);
LABEL_9:
    if ( *a1 > 0x14u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v15;
        LODWORD(v19) = *a1;
        LODWORD(v18) = v10;
        WPP_RECORDER_SF_DDD(v8, 2u, v14, 0x82u, v16, v18, v19, v20);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 63LL);
    }
    if ( *v22 <= v11 )
    {
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = a1[3];
          WPP_RECORDER_SF_d(v8, 2u, 5u, 0x84u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 66LL);
      }
      if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_NULL.Data4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 80) + 41LL) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x85u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 153LL);
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x83u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 65LL);
    }
LABEL_35:
    if ( !*v5 )
      return v9;
    goto LABEL_36;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, v12, 0x81u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v10, *a1, 20);
    goto LABEL_35;
  }
LABEL_36:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x86u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v9;
}
