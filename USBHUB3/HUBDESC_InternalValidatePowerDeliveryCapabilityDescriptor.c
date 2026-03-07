char __fastcall HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v8; // r12
  char v9; // r15
  int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // r11
  unsigned int v17; // eax
  unsigned int v18; // r8d
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v25; // [rsp+A0h] [rbp+18h]

  v25 = a3;
  v24 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v24;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x12u )
    goto LABEL_9;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 230LL);
  if ( v11 >= 0x12 )
  {
    v13 = v25;
    *v5 = 2;
    *v13 = 18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v8,
        2u,
        5u,
        0x87u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v10,
        *a1,
        18,
        18);
LABEL_9:
    if ( *a1 > 0x12u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v15;
        LODWORD(v21) = *a1;
        LODWORD(v20) = v10;
        WPP_RECORDER_SF_DDD(v8, 2u, v14, 0x89u, v16, v20, v21, v22);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 229LL);
    }
    if ( *v25 <= v11 )
    {
      if ( a1[3] || (v17 = *((_DWORD *)a1 + 1), (v17 & 0x81) != 0) || v17 >= 0x8000 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = *((_DWORD *)a1 + 1);
          LODWORD(v23) = v18 >> 15;
          LODWORD(v22) = (v18 >> 7) & 1;
          LODWORD(v21) = v18 & 1;
          LODWORD(v20) = a1[3];
          WPP_RECORDER_SF_DDDD(
            v8,
            2u,
            5u,
            0x8Bu,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
            v20,
            v21,
            v22,
            v23);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 232LL);
      }
      if ( (a1[4] & 0x20) != 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 80) + 42LL) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 4u, 5u, 0x8Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v20);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 231LL);
    }
LABEL_35:
    if ( !*v5 )
      return v9;
    goto LABEL_36;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, v12, 0x88u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v10, *a1, 18);
    goto LABEL_35;
  }
LABEL_36:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x8Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v9;
}
