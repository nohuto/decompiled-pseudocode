/*
 * XREFs of ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180111540
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CTransform *__fastcall CTransform::CTransform(CTransform *this, struct CComposition *a2)
{
  CTransform *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTransform::`vftable';
  result = this;
  *((_BYTE *)this + 156) = 0;
  return result;
}
