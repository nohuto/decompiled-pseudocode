char __fastcall HUBDESC_Validate30HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v8; // ebx
  char v9; // bl
  __int64 v11; // [rsp+28h] [rbp-20h]

  v4 = 0;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x11Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
LABEL_55:
    v9 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x127u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    return v9;
  }
  if ( *a1 < 0xCu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 12LL);
    v4 = 2;
  }
  if ( *a1 > 0xCu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = *a1;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 11LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  if ( a1[1] != 42 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = a1[1];
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 16LL);
    v4 = 2;
  }
  if ( a1[2] > 0xFu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = a1[2];
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x120u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 17LL);
    v4 = 2;
  }
  if ( !a1[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = 0;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x121u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 18LL);
    v4 = 2;
  }
  v8 = *(unsigned __int16 *)(a1 + 3);
  if ( (v8 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = *(unsigned __int16 *)(a1 + 3);
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x122u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  if ( v8 >= 0x20 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v8;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x123u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  if ( a1[7] >= 0xBu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = a1[7];
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x124u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 10LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v9 = 1;
  if ( (a1[10] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x125u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 15LL);
  }
  if ( ((unsigned __int16)(-1 << (a1[2] + 1)) & *((_WORD *)a1 + 5)) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x126u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 14LL);
  }
  if ( v4 )
    goto LABEL_55;
  return v9;
}
