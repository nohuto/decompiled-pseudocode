/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_a704c69ed083326e40d515dc4d6b076b_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180288AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _lambda_a704c69ed083326e40d515dc4d6b076b_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WORK Work)
{
  __int64 v3; // rcx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = Context[8];
  v5 = (char *)(Context + 9);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  *((_DWORD *)Context + 24) = (*(__int64 (__fastcall **)(__int64, char **, PTP_WORK))(*(_QWORD *)v3 + 16LL))(
                                v3,
                                &v5,
                                Work);
  *((_BYTE *)Context + 100) = 1;
}
