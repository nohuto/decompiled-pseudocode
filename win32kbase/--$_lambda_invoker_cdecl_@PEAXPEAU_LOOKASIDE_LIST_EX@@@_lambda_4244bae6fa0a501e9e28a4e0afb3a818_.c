/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_4244bae6fa0a501e9e28a4e0afb3a818_@@CA?A_PPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00BD1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A77D0 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall _lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)&Lookaside[-1].L.AllocateEx, Buffer);
}
