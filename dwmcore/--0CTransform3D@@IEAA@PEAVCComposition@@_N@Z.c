/*
 * XREFs of ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x1800E26D4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CTransform3D *__fastcall CTransform3D::CTransform3D(CTransform3D *this, struct CComposition *a2, char a3)
{
  CTransform3D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CTransform3D::`vftable';
  result = this;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 156) = a3;
  return result;
}
