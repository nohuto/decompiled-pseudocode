/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_62a6912156eebe0a4bb23607e970b09b___::Run @ 0x180022230
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_62a6912156eebe0a4bb23607e970b09b_::operator() @ 0x180022258 (_lambda_62a6912156eebe0a4bb23607e970b09b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_62a6912156eebe0a4bb23607e970b09b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_62a6912156eebe0a4bb23607e970b09b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
