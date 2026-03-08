/*
 * XREFs of BmlInternalTryPinningScaling @ 0x1C016DF60
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C016DEBC (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C016D2E8 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01DD5A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

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
