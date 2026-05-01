/*
 * XREFs of __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x180091794
 * Callers:
 *     __imp_load_SHCreateMemStream @ 0x180091788 (__imp_load_SHCreateMemStream.c)
 *     __imp_load_IStream_Read @ 0x180091A50 (__imp_load_IStream_Read.c)
 *     __imp_load_IStream_Size @ 0x180091A62 (__imp_load_IStream_Size.c)
 *     __imp_load_SHCreateStreamOnFileW @ 0x180091A74 (__imp_load_SHCreateStreamOnFileW.c)
 *     __imp_load_SHOpenRegStream2W @ 0x18009493E (__imp_load_SHOpenRegStream2W.c)
 *     __imp_load_IStream_Write @ 0x180094974 (__imp_load_IStream_Write.c)
 *     __imp_load_IStream_Copy @ 0x180094992 (__imp_load_IStream_Copy.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_stream_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_stream_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
