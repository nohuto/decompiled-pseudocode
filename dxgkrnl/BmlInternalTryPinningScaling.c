__int64 __fastcall BmlInternalTryPinningScaling(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a4)
{
  __int64 v4; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // edi
  __int64 result; // rax
  char v10; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(a2 + 48);
  AdapterDefaultScaling = a3;
  if ( a3 == D3DKMDT_VPPS_RESERVED1 )
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48));
  if ( BmlIsSupportedPathScaling(AdapterDefaultScaling, a4) )
  {
    v10 = 1;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(v4 + 488) + 64LL))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)a1 + 24LL),
               *(unsigned int *)(*(_QWORD *)a1 + 28LL),
               (unsigned int)AdapterDefaultScaling,
               v10);
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, AdapterDefaultScaling);
    return 3223192326LL;
  }
  return result;
}
