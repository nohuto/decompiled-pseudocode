/*
 * XREFs of wil::details::lambda_call__lambda_48adee6716735ca7de62ddb49255fa7a___::_lambda_call__lambda_48adee6716735ca7de62ddb49255fa7a___ @ 0x180303E94
 * Callers:
 *     _WindowGroupManager::CreateWindowGroup_::_1_::dtor$0 @ 0x180304571 (_WindowGroupManager--CreateWindowGroup_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_48adee6716735ca7de62ddb49255fa7a___::_lambda_call__lambda_48adee6716735ca7de62ddb49255fa7a___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[16] )
  {
    a1[16] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 96LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 96LL),
           **((unsigned int **)a1 + 1));
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
