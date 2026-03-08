/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00C8810
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  int *v8; // rbx
  bool result; // al
  __int128 v10; // [rsp+20h] [rbp-18h]

  if ( (dword_1C0361364 & 1) == 0 )
  {
    dword_1C035C120 = 2;
    dword_1C0361364 |= 1u;
    qword_1C035C118 = (__int64)lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_;
    qword_1C035C128 = (__int64)lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_;
    qword_1C035C138 = (__int64)lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_;
    qword_1C035C148 = (__int64)lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_;
    qword_1C035C158 = (__int64)lambda_9e1c073be7703093e3ca0af05debe537_::_lambda_invoker_cdecl_;
    dword_1C035C130 = 8;
    dword_1C035C140 = 16;
    dword_1C035C150 = 32;
  }
  *a4 = 0LL;
  if ( (a2 & 1) != 0 && IsWindowActivateable(a1) )
  {
    *(_QWORD *)&v10 = a1;
    result = 1;
    *((_QWORD *)&v10 + 1) = 1LL;
    *a4 = v10;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = (int *)&unk_1C035C110;
      do
      {
        if ( (a3 & *v8) != 0 && (*((unsigned __int8 (__fastcall **)(const struct tagWND *, _OWORD *))v8 + 1))(a1, a4) )
          break;
        v8 += 4;
      }
      while ( v8 != &g_cTimerId );
    }
    return *(_QWORD *)a4 != 0LL;
  }
  return result;
}
