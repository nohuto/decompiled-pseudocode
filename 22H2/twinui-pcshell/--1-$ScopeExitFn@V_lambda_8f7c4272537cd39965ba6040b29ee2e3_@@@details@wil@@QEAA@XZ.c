/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_8f7c4272537cd39965ba6040b29ee2e3_@@@details@wil@@QEAA@XZ @ 0x18036C5E4
 * Callers:
 *     _MonitorFrame::Initialize_::_1_::dtor$1 @ 0x18037284F (_MonitorFrame--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180370A24 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_8f7c4272537cd39965ba6040b29ee2e3_>::~ScopeExitFn<_lambda_8f7c4272537cd39965ba6040b29ee2e3_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    MonitorFrame::DestroyInternal(*(MonitorFrame **)a1);
  }
}
