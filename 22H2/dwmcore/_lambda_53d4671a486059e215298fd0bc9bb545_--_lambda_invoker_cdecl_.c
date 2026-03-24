/*
 * XREFs of _lambda_53d4671a486059e215298fd0bc9bb545_::_lambda_invoker_cdecl_ @ 0x1800EF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180184EF4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A4AD0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_53d4671a486059e215298fd0bc9bb545_::_lambda_invoker_cdecl_(CComputeScribbleScheduler *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CComputeScribbleScheduler::ProcessScribbleFrame(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BF,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
