/*
 * XREFs of ??1Variant@wil@@QEAA@XZ @ 0x1803F0300
 * Callers:
 *     _CoverWindowAcc::SetBoundingRect_::_1_::dtor$0 @ 0x18048B6B0 (_CoverWindowAcc--SetBoundingRect_--_1_--dtor$0.c)
 *     _CoverWindowAcc::SetBoundingRect_::_1_::dtor$1 @ 0x18048B6BC (_CoverWindowAcc--SetBoundingRect_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::Variant::~Variant(VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
