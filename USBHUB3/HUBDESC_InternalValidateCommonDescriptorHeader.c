char __fastcall HUBDESC_InternalValidateCommonDescriptorHeader(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v8; // ecx
  char v9; // r15
  unsigned int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // esi
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  int v20; // [rsp+A0h] [rbp+8h]
  int v21; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int *v22; // [rsp+B0h] [rbp+18h]
  unsigned int v23; // [rsp+B8h] [rbp+20h]

  v22 = a3;
  v5 = a4;
  v21 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v21;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = 1;
  v10 = *(_DWORD *)(a2 + 64) - (_DWORD)a1;
  v11 = *(_DWORD *)(a2 + 72) - v8;
  *a3 = 0;
  v23 = v10;
  v20 = v8;
  if ( v11 < 2 )
  {
    *v5 = 1;
    v12 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11, 2);
    v13 = 90LL;
LABEL_32:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
    goto LABEL_33;
  }
  v14 = *a1;
  v12 = a5;
  *a3 = v14;
  if ( v14 > v11 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v12,
        2u,
        5u,
        0xEu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a1,
        v8,
        v11,
        v11);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 87LL);
    v8 = v20;
    v10 = v23;
    *v22 = v11;
  }
  if ( *a1 > v10 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v10;
      LODWORD(v18) = v8;
      LODWORD(v17) = *a1;
      WPP_RECORDER_SF_DDD(
        v12,
        2u,
        (__int64)a3,
        0xFu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v17,
        v18,
        v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 88LL);
  }
  if ( *a1 >= 2u )
  {
    v15 = v20;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    v15 = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v20;
      LODWORD(v17) = *a1;
      WPP_RECORDER_SF_DDD(
        v12,
        2u,
        (__int64)a3,
        0x10u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v17,
        v18,
        v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 89LL);
  }
  if ( !*a1 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v15;
      WPP_RECORDER_SF_d(v12, 2u, 5u, 0x11u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v17);
    }
    v13 = 91LL;
    goto LABEL_32;
  }
LABEL_33:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v12, 2u, 5u, 0x12u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    return 0;
  }
  return v9;
}
