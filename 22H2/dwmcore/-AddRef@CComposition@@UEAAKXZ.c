/*
 * XREFs of ?AddRef@CComposition@@UEAAKXZ @ 0x1800FD680
 * Callers:
 *     ?AddRef@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x18011DAC0 (-AddRef@CWARPDrawListEntry@@WEA@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x18011E7A0 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::AddRef(CComposition *this)
{
  return CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
}
