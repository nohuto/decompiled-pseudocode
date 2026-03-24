/*
 * XREFs of _lambda_3029ce1d0d0873684df583e6396a0ba0_::operator() @ 0x1C023F4DC
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C023F314 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DAB0 (PostIAMShellHookMessageEx.c)
 */

char __fastcall lambda_3029ce1d0d0873684df583e6396a0ba0_::operator()(__int64 a1, __int64 *a2)
{
  struct tagTHREADINFO *v2; // rdx
  __int64 v3; // rcx

  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x20u, *a2);
  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  if ( v3 )
    v2 = *(struct tagTHREADINFO **)(v3 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v2, 0);
  return 1;
}
