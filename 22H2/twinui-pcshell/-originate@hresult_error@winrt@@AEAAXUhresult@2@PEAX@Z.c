/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x180221720
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x18021D550 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18021D584 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1804D118C (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 * Callees:
 *     RoOriginateLanguageException_0 @ 0x1800952CD (RoOriginateLanguageException_0.c)
 */

__int64 winrt::hresult_error::originate()
{
  RoOriginateLanguageException_0();
  return WINRT_GetRestrictedErrorInfo();
}
