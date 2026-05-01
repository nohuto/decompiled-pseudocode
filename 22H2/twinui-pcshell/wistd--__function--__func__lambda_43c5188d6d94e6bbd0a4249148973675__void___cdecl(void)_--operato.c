/*
 * XREFs of wistd::__function::__func__lambda_43c5188d6d94e6bbd0a4249148973675__void___cdecl(void)_::operator() @ 0x18009C710
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_841554dac235e76a966632a629acea57___ @ 0x18009BED0 (CreationThreadDispatcher--RunAsync__lambda_841554dac235e76a966632a629acea57___.c)
 */

void __fastcall wistd::__function::__func__lambda_43c5188d6d94e6bbd0a4249148973675__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_841554dac235e76a966632a629acea57___(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                + 280LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
