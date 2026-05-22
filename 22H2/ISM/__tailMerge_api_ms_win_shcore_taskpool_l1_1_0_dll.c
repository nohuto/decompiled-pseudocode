/*
 * XREFs of __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18003D3F1
 * Callers:
 *     __imp_load_SHTaskPoolQueueTask @ 0x18003D3E5 (__imp_load_SHTaskPoolQueueTask.c)
 *     __imp_load_SHTaskPoolAllowThreadReuse @ 0x18003D47C (__imp_load_SHTaskPoolAllowThreadReuse.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800114E0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_taskpool_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
