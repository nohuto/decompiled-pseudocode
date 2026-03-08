/*
 * XREFs of _lambda_c133004e6954e14cd1689f8a8d3530b0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_ @ 0x1C00B8960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c133004e6954e14cd1689f8a8d3530b0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag)
{
  return ExAllocatePool2(262LL, NumberOfBytes, Tag);
}
