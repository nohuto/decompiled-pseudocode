/*
 * XREFs of ?CreateTileImageResource@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA?AUTileImageResource@UnifiedTile@Shell@WindowsInternal@3@AEBUguid@3@_KAEBUhstring@param@3@_N@Z @ 0x180138998
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelper>::CreateTileImageResource(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 *a5)
{
  __int128 v6; // xmm0
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // eax
  _QWORD *result; // rax
  char v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-18h] BYREF

  v14 = a2;
  v6 = *a3;
  v7 = *a1;
  v14 = 0LL;
  v8 = *v7;
  v9 = *a5;
  v13 = v6;
  v12 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64, char, _QWORD **))(v8 + 80))(
          v7,
          &v13,
          0LL,
          v9,
          v12,
          &v14);
  winrt::check_hresult(v10);
  result = a2;
  *a2 = v14;
  return result;
}
