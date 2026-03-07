__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  __int32 v4; // eax
  int v5; // eax
  __int32 v6; // eax
  int v7; // r8d
  int v8; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  __int32 v12; // eax
  __int32 v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
    WdLogSingleEntry3(
      2LL,
      v2,
      *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
  v4 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v4 )
  {
    LOBYTE(v5) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v10 = v4 - 1;
  if ( !v10 )
  {
    v5 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v5 & 1) == 0 )
      goto LABEL_23;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v5 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v5 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v12 != 251 )
  {
LABEL_22:
    WdLogSingleEntry1(2LL, v2);
    goto LABEL_23;
  }
LABEL_6:
  v6 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v13 = v6 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == v7 )
          goto LABEL_9;
        goto LABEL_22;
      }
      v8 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v8 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v8 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( (v8 & 1) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_23:
  WdLogSingleEntry3(
    3LL,
    v2,
    *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
    *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
  return 3223192326LL;
}
