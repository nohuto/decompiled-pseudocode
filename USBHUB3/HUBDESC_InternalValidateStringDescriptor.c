char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rbp
  unsigned int v10; // eax
  int v11; // eax
  char v12; // r13
  unsigned int v13; // ecx
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-40h]
  unsigned int v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+78h] [rbp+10h]

  v22 = 0;
  v7 = a2;
  if ( (unsigned int)a2 < 2 )
  {
    *a3 = 0;
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = a2;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF1u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
LABEL_26:
    v12 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v9, 2u, 5u, 0xF7u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    return v12;
  }
  v10 = *a1;
  v9 = a5;
  *a3 = v10;
  if ( v10 > (unsigned int)a2 )
  {
    v22 = 2;
    *a3 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(a5, a2, (__int64)a3, 0xF2u, v15);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
  }
  if ( *a1 <= 2u )
  {
    v22 = 2;
    *a3 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v7;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF3u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 130LL);
  }
  if ( a1[1] != 3 )
  {
    v22 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 3;
      LODWORD(v16) = a1[1];
      WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xF4u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, v20);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 133LL);
  }
  v11 = *a1;
  v12 = 1;
  if ( (v11 & 1) != 0 )
  {
    v13 = *a3 & 0xFFFFFFFE;
    v22 = 2;
    *a3 = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v13;
      LODWORD(v16) = v11;
      WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xF5u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 128LL);
  }
  if ( *a1 != v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v7;
      LODWORD(v16) = *a1;
      WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xF6u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 134LL);
  }
  if ( v22 )
    goto LABEL_26;
  return v12;
}
