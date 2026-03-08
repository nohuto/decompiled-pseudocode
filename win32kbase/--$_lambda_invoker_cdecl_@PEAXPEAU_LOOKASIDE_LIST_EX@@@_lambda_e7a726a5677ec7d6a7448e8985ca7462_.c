/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_e7a726a5677ec7d6a7448e8985ca7462_@@CA?A_PPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00BB2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A5AC0 (-Free@-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall _lambda_e7a726a5677ec7d6a7448e8985ca7462_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<221184,864>::Free((__int64)&Lookaside[-1].L.AllocateEx, Buffer);
}
