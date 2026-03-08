/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x180223FEC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180099FD0 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1802250C0 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *((_DWORD *)this + 84) = -1;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  *((_DWORD *)this + 85) = 0x7FFFFFFF;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  CConditionalExpression::Reset(this);
  return this;
}
