/*
 * XREFs of ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_@@CAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00BB600
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0029F24 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PVOID __fastcall _lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<36864,144>::Allocate((__int64)&Lookaside[-1].L.AllocateEx);
}
