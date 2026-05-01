/*
 * XREFs of ?DismissViewForDrag@CPPIAllUpViewHost@@UEAAXXZ @ 0x1803FF280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPPIAllUpViewHost::DismissViewForDrag(CPPIAllUpViewHost *this)
{
  CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this - 120);
}
