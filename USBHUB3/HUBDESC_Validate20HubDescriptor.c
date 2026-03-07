char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rbx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // r8d
  unsigned __int8 v12; // dl
  unsigned int i; // ebx
  char v14; // di
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  unsigned int v18; // [rsp+80h] [rbp+8h]
  unsigned int v19; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = a4;
  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, 0);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
      v4 = 2;
    }
    v8 = a1[2];
    v19 = (unsigned int)(v8 + 8) >> 3;
    v18 = (unsigned int)(v8 + 7) >> 3;
    v9 = v19 + 7 + v18;
    if ( *a1 < v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = *a1;
        WPP_RECORDER_SF_DD(v5, 2u, 5u, 0x12Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, v9);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 1LL);
      if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
        v4 = 2;
    }
    if ( *a1 > v18 + v19 + 7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v18 + v19 + 7;
        LODWORD(v16) = *a1;
        WPP_RECORDER_SF_DD(v5, 2u, 5u, 0x12Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16, v17);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(a3 + 24))(*(_QWORD *)(a3 + 40), 0LL);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
    }
    if ( a1[1] != 41 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = a1[1];
        WPP_RECORDER_SF_d(v5, 2u, 5u, 0x12Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 6LL);
      if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
        v4 = 2;
    }
    v10 = *(unsigned __int16 *)(a1 + 3);
    if ( (v10 & 2) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = *(unsigned __int16 *)(a1 + 3);
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (v10 & 0xFF00) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v10;
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v16);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (a1[7] & 1) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x130u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
    }
    v11 = v19;
    v12 = -1 << ((a1[2] + 1) & 7);
    if ( v12 != 0xFF && (v12 & a1[v19 + 6]) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x131u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
      v11 = v19;
    }
    for ( i = 0; i < v18; ++i )
    {
      if ( a1[i + 7 + v11] != 0xFF )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
          v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a4, 2u, 5u, 0x132u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
        v11 = v19;
      }
    }
    if ( !v4 )
      return 1;
    v5 = a4;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x128u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
  }
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v5, 2u, 5u, 0x133u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v14;
}
