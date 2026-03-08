/*
 * XREFs of ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800E27C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlInterpolation::Compute(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rdx

  v6 = *a1;
  if ( *((_DWORD *)a1 + 6) )
    (*(double (**)(void))(v6 + 40))();
  else
    (*(void (**)(void))(v6 + 40))();
  return KeyframeInterpolation::Interpolate(a1, v8, a3, a4);
}
