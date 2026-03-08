/*
 * XREFs of _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1C02B5F20
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(
        struct OUTPUTDUPL_MGR_INDIRECT *a1,
        __int64 (__fastcall **a2)(_QWORD, _QWORD))
{
  if ( *a2 == *((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 16) )
    return a2[1](((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL), a2[2]);
  else
    return 0LL;
}
