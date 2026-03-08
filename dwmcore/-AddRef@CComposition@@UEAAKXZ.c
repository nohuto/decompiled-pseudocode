/*
 * XREFs of ?AddRef@CComposition@@UEAAKXZ @ 0x1800FCA40
 * Callers:
 *     ?AddRef@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x180119910 (-AddRef@CWARPDrawListEntry@@WEA@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x18011A5F0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::AddRef(CComposition *this)
{
  return CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
}
