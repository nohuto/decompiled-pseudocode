/*
 * XREFs of ?CreateForPackageFullName@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@3@AEBUUser@System@Windows@3@AEBUhstring@param@3@@Z @ 0x1801386EC
 * Callers:
 *     ??$?RAEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@_lambda_1689c3bace97bc0cd6065eea5596933a_@@QEBA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIMRTHelperStatics@2345@@Z @ 0x180129C0C (--$-RAEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@_lambda_1689c3bace97bc0cd60.c)
 *     ??$call@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@Z @ 0x180133728 (--$call@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@-$factory_cache_entry@UMRTHelper@Unified.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  _QWORD *result; // rax
  _QWORD *v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = a2;
  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v4 + 48LL))(v4, *a3, *a4, &v8);
  winrt::check_hresult(v6);
  result = a2;
  *a2 = v8;
  return result;
}
