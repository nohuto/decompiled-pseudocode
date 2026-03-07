char __fastcall HUBDESC_ValidateMsOs20MimimumRecoveryTime(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v3; // rdi
  char v7; // si
  __int64 v9; // [rsp+28h] [rbp-30h]

  v3 = (__int64 *)(a2 + 96);
  v7 = 1;
  if ( *(char *)a2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*v3, 2u, 5u, 0x153u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 175LL);
    v7 = 0;
  }
  if ( *a3 == 6 )
  {
    if ( *((_BYTE *)a3 + 4) > 0xAu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *v3,
          2u,
          5u,
          0x155u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          *((unsigned __int8 *)a3 + 4));
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 177LL);
      v7 = 0;
    }
    if ( (unsigned __int8)(*((_BYTE *)a3 + 5) - 1) > 0x13u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v9) = *((unsigned __int8 *)a3 + 5);
        WPP_RECORDER_SF_d(*v3, 2u, 5u, 0x156u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v9);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a1 + 40), 178LL);
    }
    if ( v7 == 1 )
    {
      *(_DWORD *)a2 |= 0x80u;
      *(_QWORD *)(a2 + 40) = a3;
      return v7;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x154u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 176LL);
    v7 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*v3, 2u, 5u, 0x157u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v7;
}
