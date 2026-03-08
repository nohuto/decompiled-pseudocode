/*
 * XREFs of _lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_ @ 0x1C00C89C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_(_QWORD *a1, _OWORD *a2)
{
  int v4; // edx
  const struct tagWND *v5; // rdi
  __int128 v6; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( gpqForeground == *(_QWORD *)(a1[2] + 432LL) )
  {
    v4 = *(_DWORD *)(a1[5] + 236LL);
    if ( v4 != 2 && v4 != 16 )
    {
      v5 = *(const struct tagWND **)(a1[3] + 288LL);
      if ( IsWindowActivateable(v5) )
      {
        *(_QWORD *)&v6 = v5;
        *((_QWORD *)&v6 + 1) = 5LL;
        *a2 = v6;
      }
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
