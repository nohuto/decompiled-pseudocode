__int64 __fastcall CChannel::QueryInterface(CChannel *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
      goto LABEL_13;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_deb45c4b_ae74_4eca_bcac_6da16704bbfe.Data4;
    if ( !v5 )
      goto LABEL_13;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b3f94ca4_c369_468d_ab2c_516cef810f96.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b3f94ca4_c369_468d_ab2c_516cef810f96.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b3f94ca4_c369_468d_ab2c_516cef810f96.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
      return wil::details::in1diag3::Log_Hr(
               retaddr,
               460LL,
               (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
               (const char *)0x80004002LL);
    }
    else
    {
LABEL_13:
      *a3 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
