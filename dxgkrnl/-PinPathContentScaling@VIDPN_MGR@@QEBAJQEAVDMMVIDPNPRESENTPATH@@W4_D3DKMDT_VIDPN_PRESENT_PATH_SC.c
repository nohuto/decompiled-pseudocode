__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3)
{
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 Container; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  DXGK_ENUM_PIVOT v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v3;
    goto LABEL_8;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v11 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  LOBYTE(v12) = 1;
  v13 = *((_QWORD *)a2 + 12);
  v15.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v15.VidPnTargetId = *(_DWORD *)(v13 + 24);
  v14 = VIDPN_MGR::FormalizeVidPnChange((__int64)this, (D3DKMDT_HVIDPN)(v11 & -(__int64)(v11 != -88)), 7, v12, &v15);
  v7 = v14;
  if ( v14 < 0 )
  {
    v8 = v3;
    if ( v14 == -1071774970 )
    {
      WdLogSingleEntry2(3LL, v3, a2);
      return (unsigned int)v7;
    }
LABEL_8:
    WdLogSingleEntry3(2LL, v8, a2, v7);
    return (unsigned int)v7;
  }
  return 0LL;
}
