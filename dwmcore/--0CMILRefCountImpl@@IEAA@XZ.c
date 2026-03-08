/*
 * XREFs of ??0CMILRefCountImpl@@IEAA@XZ @ 0x18019F56C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMILRefCountImpl *__fastcall CMILRefCountImpl::CMILRefCountImpl(CMILRefCountImpl *this)
{
  *(_DWORD *)this = 0;
  return this;
}
