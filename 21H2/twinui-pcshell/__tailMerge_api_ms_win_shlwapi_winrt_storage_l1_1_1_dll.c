/*
 * XREFs of __tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll @ 0x180091BA8
 * Callers:
 *     __imp_load_SHPinDllOfCLSID @ 0x180091B9C (__imp_load_SHPinDllOfCLSID.c)
 *     __imp_load_SHCreateWorkerWindowW @ 0x180091D32 (__imp_load_SHCreateWorkerWindowW.c)
 *     __imp_load_SHSetWindowBits @ 0x1800920CB (__imp_load_SHSetWindowBits.c)
 *     __imp_load_SHFillRectClr @ 0x18009250D (__imp_load_SHFillRectClr.c)
 *     __imp_load_IUnknown_GetWindow @ 0x1800925AF (__imp_load_IUnknown_GetWindow.c)
 *     __imp_load_StrRetToBufW @ 0x180094BC3 (__imp_load_StrRetToBufW.c)
 *     __imp_load_IStream_WritePidl @ 0x180094C78 (__imp_load_IStream_WritePidl.c)
 *     __imp_load_IStream_ReadPidl @ 0x180094C8A (__imp_load_IStream_ReadPidl.c)
 *     __imp_load_AssocQueryStringW @ 0x180094C9C (__imp_load_AssocQueryStringW.c)
 *     __imp_load_IShellFolder_ParseDisplayName @ 0x1800952C3 (__imp_load_IShellFolder_ParseDisplayName.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
