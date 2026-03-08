/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180195BA4
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180196794 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1801CB230 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180274978 (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return v1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
