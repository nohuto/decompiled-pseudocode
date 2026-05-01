/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x18041F9D8
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_scalar_deleting_destructor_ @ 0x18041FD30 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_scalar_deleting_destr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1805332F0;
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
