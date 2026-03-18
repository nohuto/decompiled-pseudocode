/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00CD884
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  int *v8; // rbx
  bool result; // al
  __int128 v10; // [rsp+20h] [rbp-18h]

  if ( (dword_1C033639C & 1) == 0 )
  {
    dword_1C032BEE0 = 2;
    dword_1C033639C |= 1u;
    qword_1C032BED8 = (__int64)lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_;
    qword_1C032BEE8 = (__int64)lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_;
    qword_1C032BEF8 = (__int64)lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_;
    qword_1C032BF08 = (__int64)lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_;
    qword_1C032BF18 = (__int64)lambda_9e1c073be7703093e3ca0af05debe537_::_lambda_invoker_cdecl_;
    dword_1C032BEF0 = 8;
    dword_1C032BF00 = 16;
    dword_1C032BF10 = 32;
  }
  *a4 = 0LL;
  if ( (a2 & 1) != 0 && IsWindowActivateable(a1) )
  {
    *(_QWORD *)&v10 = a1;
    result = 1;
    DWORD2(v10) = 1;
    *a4 = v10;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = (int *)&unk_1C032BED0;
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
