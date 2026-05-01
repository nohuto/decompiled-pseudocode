/*
 * XREFs of ?close@select_result@wil@@SAXU12@@Z @ 0x1804B52E0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1804B1D74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1-close@12.c)
 *     _lambda_688f7da27bd069ce265bc30902a9ac85_::operator() @ 0x1804B21D0 (_lambda_688f7da27bd069ce265bc30902a9ac85_--operator().c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall wil::select_result::close(__int64 a1)
{
  return SelectObject(*(HDC *)(a1 + 8), *(HGDIOBJ *)a1);
}
