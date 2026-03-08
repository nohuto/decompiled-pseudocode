/*
 * XREFs of _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C00C8A5C
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::_lambda_invoker_cdecl_ @ 0x1C00C8A40 (_lambda_9e1c073be7703093e3ca0af05debe537_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_9e1c073be7703093e3ca0af05debe537_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int i; // edi
  __int64 TopWindow; // rax
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  for ( i = 6; ; i &= ~2u )
  {
    TopWindow = FindNextTopWindow::NextTopWindow(a2, a2, i);
    v7 = TopWindow;
    if ( TopWindow )
      break;
    if ( (i & 2) == 0 )
      return *(_QWORD *)a3 != 0LL;
  }
  v8 = (__int64 *)(TopWindow + 200);
  if ( !IsWindowActivateable(*(const struct tagWND **)(TopWindow + 200)) || (v7 = *v8) != 0 )
  {
    *(_QWORD *)&v10 = v7;
    *((_QWORD *)&v10 + 1) = 3LL;
    *a3 = v10;
  }
  return *(_QWORD *)a3 != 0LL;
}
