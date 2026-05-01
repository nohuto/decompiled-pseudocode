/*
 * XREFs of winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::Release @ 0x18014A630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x180147A14 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 */

__int64 __fastcall winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::Release(void *Block)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)Block + 6);
  if ( !v2 && Block )
  {
    lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_((__int64 *)Block + 1);
    operator delete(Block);
  }
  return v2;
}
